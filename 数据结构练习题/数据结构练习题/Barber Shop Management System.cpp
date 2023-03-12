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
		cout << "���ǵ� " << ::count << " λ�˿ͣ���ӭ���ĵ���^_^" << endl;
		if (waiting != 0)
		{
			cout << "������" << waiting << " λ�˿͵ȴ������������ĵȴ�^_^" << endl;
		}
		else
		{
			cout << "û�й˿�������������Ϊ������^_^" << endl;
		}
		waiting++;
		ResumeThread(customers);
		ReleaseMutex(Mutex);
		WaitForSingleObject(barbers, INFINITE);
	}
	else
	{
		::count++;
		cout << "�Բ���û�п�����......��" << ::count << "���˿��뿪����" << endl;
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
		cout << "��" << finish << "���˿�����ϣ��뿪" << endl;
		waiting--;
		ReleaseMutex(Mutex);
	}
	return 0;
}

int main()
{
	char close_door = 'n';
	cout << "***************�µ꿪�ţ����һ�ӭ���˿͵Ĺ��٣���***********" << endl;
	cout << "�����й���" << CHAIRS << "������" << endl;
	HANDLE hThreadCustomer;
	HANDLE hThreadBarder;
	hThreadBarder = CreateThread(NULL, 0, barber, NULL, 0, NULL); 
	while (close_door != 'y')
	{
		Sleep(random());
		cout << endl << "����Ӫҵ�������" << endl;
		if (finish >= MAX_COUNT) 
		{
			while (waiting != 0)
			{
				Sleep(1000); continue;
			}
			cout << "�Ѿ�Ϊ" << finish << "���˿����ˣ��Ƿ�ֹͣӪҵ?" << endl << "���� y ��"
				"n" << endl; 
			cin >> close_door;
			if (close_door == 'y')
			{
				cout << "��ͣӪҵ����ӭ�´ι��٣�" << endl;
				system("pause");
				return 0;
			}

			else
			{
				finish = 0;
				::count = 0;
				cout << "����Ӫҵ" << endl;
			}
		}
		hThreadCustomer = CreateThread(NULL, 0, customer, NULL, 0, NULL);
	}
	return 0;
}


