//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1,class T2>
//T1* F(T1* a, T1* b, T1* c, T2 n)
//{
//	while (a != b)
//	{
//		if (n(*a))
//		{
//			*c++ = *a;
//		}
//		a++;
//	}
//	return c;
//}
//
//bool Larger2(int n)
//{
//	return n > 2;
//}
//bool Longer3(string s)
//{
//	return s.length() > 3;
//}
//string as1[5] = { "Tom","Mike","Jack","Ted", "Lucy" };
//string as2[5];
//int a1[5] = { 1,2,3,4,5 };
//int a2[5];
//int main()
//{
//	string* p = F(as1, as1 + 5, as2, Longer3);
//	for (int i = 0; i < p - as2; ++i)
//	{
//		cout << as2[i];
//	}
//	cout << endl;
//	int* p2 = F(a1, a1 + 5, a2, Larger2);
//	for (int i = 0; i < p2 - a2; ++i)
//	{
//		cout << a2[i] << ",";
//	}
//	return 0;
//}