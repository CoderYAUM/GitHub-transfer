#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<Windows.h>
#include<time.h>

using namespace std;

#define CHAIRS 5 
#define MAX_COUNT 10 
HANDLE Mutex = CreateMutex(NULL, FALSE, L"Mutex");
HANDLE barbers = CreateSemaphore(NULL, 1, 1, L"barbers");
HANDLE customers = CreateSemaphore(NULL, 0, CHAIRS, L"customers");
int count = 0;
int waiting = 0;
int finish = 0;


int random()
{
	srand((int)time(NULL));
	return rand() % 5000;
}


DWORD WINAPI customer(LPVOID pParm2)
{
	if (ReleaseSemaphore(customers, 1, NULL))
	{
		WaitForSingleObject(Mutex, INFINITE);
		::count++;
		cout << "你是第 " << ::count << " 位顾客，欢迎您的到来^_^" << endl;
		if (waiting != 0)
		{
			cout << "现在有" << waiting << " 位顾客等待理发，请您耐心等待^_^" << endl;
		}
		else
		{
			cout << "没有顾客在理发，我马上为您服务^_^" << endl;
		}
		waiting++;
		ResumeThread(customers);
		ReleaseMutex(Mutex);
		WaitForSingleObject(barbers, INFINITE);
	}
	else
	{
		::count++;
		cout << "对不起，没有空椅子......第" << ::count << "个顾客离开理发店" << endl;
	}
	return 0;
}

DWORD WINAPI barber(LPVOID pParm1)
{
	while (true)
	{
		WaitForSingleObject(customers, INFINITE);
		WaitForSingleObject(Mutex, INFINITE);
		ReleaseSemaphore(barbers, 1, NULL);
		ResumeThread(barbers);
		Sleep(5000);
		finish++;
		cout << "第" << finish << "个顾客理发完毕，离开" << endl;
		waiting--;
		ReleaseMutex(Mutex);
	}
	return 0;
}

int main()
{
	char close_door = 'n';
	cout << "***************新店开张，热烈欢迎光大顾客的光临！！***********" << endl;
	cout << "本店中共有" << CHAIRS << "把椅子" << endl;
	HANDLE hThreadCustomer;
	HANDLE hThreadBarder;
	hThreadBarder = CreateThread(NULL, 0, barber, NULL, 0, NULL); 
	while (close_door != 'y')
	{
		Sleep(random());
		cout << endl << "正在营业，请进！" << endl;
		if (finish >= MAX_COUNT) 
		{
			while (waiting != 0)
			{
				Sleep(1000); continue;
			}
			cout << "已经为" << finish << "个顾客理发了，是否停止营业?" << endl << "输入 y 或"
				"n" << endl; 
			cin >> close_door;
			if (close_door == 'y')
			{
				cout << "暂停营业！欢迎下次光临！" << endl;
				system("pause");
				return 0;
			}

			else
			{
				finish = 0;
				::count = 0;
				cout << "继续营业" << endl;
			}
		}
		hThreadCustomer = CreateThread(NULL, 0, customer, NULL, 0, NULL);
	}
	return 0;
}


