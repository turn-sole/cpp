#include<iostream>
using namespace std;

//struct Stack
//{
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("malloc failed to applyfor space");
//			return;
//		}
//
//		capacity = defaultCapacity;
//		top = 0;
//	}
//	void push(int x)
//	{
//		a[top++] = x;
//	}
//
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//
//	int* a;
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	struct Stack st1;
//	st1.Init(20);
//
//	Stack st2;
//	st2.Init();
//	st2.push(1);
//	st2.Destroy();
//
//	return 0;
//}

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	//void Print(Date* this)
	//{
	//	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	//}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2;
	d1.Init(2022, 1, 11);
	d2.Init(2022, 1, 12);
	d1.Print();
	d2.Print();
	//d1.Print(&d1);
	//d2.Print(&d2);

	return 0;
}