#include<iostream>
using namespace std;
//
//int add(int x, int y)
//{
//	return (x + y) * 10;
//}
//
////#define add(int x,int y)  return ((x+y)*10);
//#define add(x,y) (x+y)*10
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		cout << add(i, i + 1) << endl;
//	}
//	if ((add(10, 20))
//	{
//		;
//	}
//
//	add(10,20)*20;
//	int a=1;b=2;
//	add(a|b,a&b);
//	return 0; 
//}
//inline int add(int x, int y)
//{
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	cout << "1111111111" << endl;
//	return(x + y) * 10;
//}
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		cout << add(i, i + 1) << endl;
//	}
//}
//#include"func.h"
//int main()
//{
//	f(10);
//	return 0;
//}
//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//
//	int arr[] = { 1,2,3 };
//	for (auto& x : arr)
//	{
//		x++;
//	}
//
//	for (auto& x : arr)
//	{
//		cout << x << endl;
//	}
//
//	return 0;
//}
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f(nullptr);
//}
struct stack
{
	void init(int defaultcapacity = 4)
	{
		a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == a)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
			return;
		}
		capacity = defaultcapacity;
		top = 0;
	}

	void push(int x)
	{
		a[top++] = x;
	}

	void destroy()
	{
		free(a);
		a = nullptr;
		top = capacity;
	}
	
	int* a;
	int top;
	int capacity;
};
int main()
{
	struct stack st1;
	st1.init(20);
	stack st2;
	st2.init();
	st2.push(1);
	st2.push(2);
	st2.push(3);
	st2.push(4);
	st2.destroy();

	return 0;
}