#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
class Array
{
private:
	int arr[100];
public:
	bool IsSort()
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
};

int main()
{
	Array<int> a;
	a.IsSort();

	return 0;
}