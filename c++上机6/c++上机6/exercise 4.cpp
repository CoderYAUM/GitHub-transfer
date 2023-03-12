//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//template<class T>
//class stack
//{
//private:
//	int size;
//public:
//
//	T* data = new T[100];
//	stack()
//	{
//		size = -1;
//	}
//	bool empty();
//	bool full();
//	T getsize();
//	void Pushstack(T data);
//	T Popstack();
//	void print();
//};
//
//template<class T>
//bool stack<T>::empty()
//{
//	if (this->size == -1)
//		return true;
//	else
//		return false;
//}
//
//template<class T>
//bool stack<T>::full()
//{
//	if (this->size == 100)
//		return true;
//	else
//		return false;
//}
//
//template<class T>
//T stack<T>::getsize()
//{
//	if (empty())
//	{
//		cout << "Õ»¿Õ£¡" << endl;
//		exit(-1);
//	}
//	else
//	{
//		return data[size];
//	}
//}
//
//template<class T>
//T stack<T>::Popstack()
//{
//	if (empty())
//	{
//		cout << "Õ»¿Õ£¡" << endl;
//		exit(-1);
//	}
//	else
//	{
//		return data[size--];
//	}
//}
//
//template<class T>
//void stack<T>::Pushstack(T x)
//{
//	if (full())
//	{
//		cout << "Õ»Âú£¡" << endl;
//		exit(-1);
//	}
//	else
//	{
//		data[++size] = x;
//	}
//}
//
//template<class T>
//void stack<T>::print()
//{
//	if (size == -1)
//	{
//		cout << "Õ»¿Õ£¬ÎÞ·¨Êä³ö£¡" << endl;
//	}
//	else
//	{
//		for (int i = 0; i <= size; i++)
//		{
//			cout << data[i] << " "<<endl;
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	stack<int> s;
//	s.Pushstack(1);
//	s.Pushstack(2);
//	s.Pushstack(3);
//	s.Pushstack(4);
//	s.print();
//	s.Popstack();
//	s.print();
//	stack<double> s2;
//	s2.Pushstack(1.00);
//	s2.Pushstack(2.00);
//	s2.Pushstack(3.00);
//	s2.Pushstack(4.00);
//	s2.print();
//	return 0;
//}