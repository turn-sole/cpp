#include<iostream>
using namespace std;
//
//class Stack
//{
//public:
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//
//private:
//	int* _a;
//	int _top = 0;
//	int _capacity;
//};
//
//struct TreeNode
//{
//	TreeNode* _left;
//	TreeNode* _right;
//	int _val;
//
//	TreeNode(int val=0)
//	{
//		_left = nullptr;
//		_right = nullptr;
//		_val = val; 
//	}
//};
//
//class Tree
//{
//private:
//	TreeNode* _root=nullptr;
//};
//
//class MyQueue
//{
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//
//int main()
//{
//	Stack st1;
//
//	Tree t1;
//
//	TreeNode n1(1);
//	TreeNode n2(2);
//
//	MyQueue q;
//	return 0;
//}

//void func(Date d)
//{
//
//}
//int main()
//{
//	Date d1;
//
//	return 0;
//}

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
}
bool operator<(const Date& x1,const Date& x2)
{
	if (x1._year < x2._year)
	{
		return true;
	}
	else if (x1._year = x2._year&&x1._month<x2._month)
	{
		return true;
	}
	else if (x1._year = x2._year && x1._month = x2._month && x1._day < x2._day)
	{
		return true;
	}
	
	return false;
}
bool operator>(const Date& x1, const Date& x2)
{
	if (x1._year < x2._year)
	{
		return true;
	}
	else if (x1._year = x2._year && x1._month < x2._month)
	{
		return true;
	}
	else if (x1._year = x2._year && x1._month = x2._month && x1._day < x2._day)
	{
		return true;
	}

	return false;
}
int main()
{
	Date d1(2023, 4, 25);
	Date d2(2023, 5, 25);

	cout << (d1<d2) << endl;
	cout << (d1 > d2) << endl;

	return 0;
}