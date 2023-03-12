#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

template<class T>
bool IsSort(T arr[100])
{
	int i = 0;
	while (i < 100)
	{
		if (arr[i++] < arr[i + 1])
		{
			;
		}
		else
			return false;
	}
	return true;
}

int main()
{
	int data[100] = { 2,4,33,6,2,7 };
	if (IsSort(data[100]))
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	double data2[100] = { 1.23,3.21,4.56,7.33,3.89 };
	if (IsSort(data2[100]))
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	return 0;
}
