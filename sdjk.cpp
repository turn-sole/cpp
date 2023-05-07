#include<iostream>
using namespace std;

//void swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	swap(x, y);
//	cout << x << " " << y << endl;
//
//	return 0;
//}

//void Test()
//{
//	A a;
//
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		Test(a);
//	size_t end1 = clock();
//
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		Test(a);
//	size_t end2 = clock();
//
//	cout << "Test(A)-time:" << end1 - begin1 << endl;
//	cout << "Test(A&)-time:" << end2 - begin2 << endl;
//}

int& count()
{
	static int n = 0;
	n++;

	return n;
}

int main()
{
	int ret = count();
	cout << ret << endl; 

	return 0;
}