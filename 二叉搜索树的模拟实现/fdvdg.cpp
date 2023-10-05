#include"BSTree.h"
#include<iostream>
using namespace std;

class A
{
public:
	virtual void func1()
	{
		cout << "A::func1" << endl;
	}
public:
	int _a;
};

class B :virtual public A
{
public:
	virtual void func1()
	{
		cout << "B:func1" << endl;
	}

	virtual void func2()
	{
		cout << "B::func2" << endl;
	}
public:
	int _b;
};

class C :virtual public A
{
public:
	virtual void func1()
	{
		cout << "C::func1" << endl;
	}

	virtual void func2()
	{
		cout << "C::func2 "<< endl;
	}
public:
	int _c;
};

class D :public B, public C
{
public:
	virtual void func1()
	{
		cout << "D::func1" << endl;
	}

	virtual void func3()
	{
		cout << "D::func3" << endl;
	}
public:
	int _d;
};

//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	return 0;
//}
//
//class Car
//{
//public:
//	inline virtual void Drive() = 0;
//
//	int Func();
//
//};
//
//int Car::Func()
//{
//	int a = 0;
//	int b = 2;
//	return a = b;
//}
//
//class Benz :public Car
//{
//public:
//	inline virtual void Drive()
//	{
//		cout << "Benz-comfortable" << endl;
//	}
//
//};
//
//class BMW :public Car
//{
//public:
//	inline virtual void Drive()
//	{
//		cout << "BMW-operate" << endl;
//	}
//};
//
//class BYD :public Car
//{
//public:
//	inline virtual void Drive()
//	{
//		cout << "BYD-build year dream" << endl;
//	}
//};
//
//void Func(Car* p)
//{
//	p->Drive();
//	p->Func();
//}
//
//int main()
//{
//	Func(new Benz);
//	Func(new BMW);
//	Func(new BYD);
//
//	return 0;
//}

class Car
{
public:
	Car()
		:_a(0)
	{}

	inline virtual void Drive()
	{}

private:
	int _a = 0;
};

class Benz :public Car
{
public:
	inline virtual void Drive()
	{
		cout << "Benz-comfortable" << endl;
	}
};

void Func(Car* p)
{
	p->Drive();
}

int main()
{
	/*TestBSTree1();*/
	key_value::TestBSTree2();

	return 0;
}