#include<iostream>

using namespace std;

//class Date
//{
//public:
//	Date* operator& ()
//	{
//		cout << "Date*operator&()const" << endl;
//		return this;
//	}
//
//	const Date* operator& ()const
//	{
//		cout << "const Date* operate&()const" << endl;
//		return this;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	const Date d2;
//
//	cout << &d1 << endl;
//	cout << &d2 << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{
//
//	}
//private:
//	A _aobj;  // 没有默认构造函数
//	int& _ref;  // 引用
//	const int _n; // const 
//
//	int x;
//};
//
//int main()
//{
//	B bb(10, 1);
//
//	return 0;
//}
//class Stack
//{
//public:
//	Stack(int capacity = 10)
//		: _a((int*)malloc(capacity * sizeof(int)))
//		,_top(0)
//		,_capacity(capacity)
//	{
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			exit(-1);
//		}
//
//		// 要求数组初始化一下
//		memset(_a, 0, sizeof(int) * capacity);
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class AA
//{
//public:
//	AA(int row = 10, int col = 5)
//		:_row(row)
//		,_col(col)
//	{
//		_aa = (int**)malloc(sizeof(int*) * row);
//		for (int i = 0; i < row; i++)
//		{
//			_aa[i] = (int*)malloc(sizeof(int) * col);
//		}
//	}
//private:
//	int** _aa;
//	int _row;
//	int _col;
//};
//int main()
//{
//	return 0;
//}

class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{}

	void Print() {
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
};

int main()
{
	A.aa(1);
	aa.Print();
}