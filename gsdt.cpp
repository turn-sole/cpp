#include<iostream>

using namespace std;

//class A
//{
//public:
//	int _a;
//};
//
//class B :virtual public A
//{
//public:
//	int _b;
//};
//
//class C :virtual public A
//{
//public:
//	int _c;
//};
//
//class D :public B, public C
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.B::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	cout << sizeof(D) << endl;
//
//	return 0;
//}
//
//class Base1
//{
//public:
//	int _b1;
//};
//
//class Base2
//{
//public:
//	int _b2;
//};
//
//class Derive :public Base2, public Base1
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	return 0;
//}

//class A
//{
//public:
//	A(const char* s)
//	{
//		cout << s << endl;
//	}
//	~A()
//	{
//
//	}
//};
//
//class B :virtual public A
//{
//public:
//	B(const char* sa, const char* sb) 
//		:A(sa) 
//	{
//		cout << sb << endl;
//	}
//};
//
//class C :virtual public A
//{
//public:
//	C(const char* sa, const char* sb)
//		:A(sa)
//	{
//		cout << sb << endl;
//	}
//};
//
//class D :public B, public C
//{
//public:
//	D(const char* sa, const char* sb, const char* sc, const char* sd)
//		:B(sa, sb)
//		, C(sa, sc)
//		, A(sa)
//	{
//		cout << sb << endl;
//	}
//};
//
//int main()
//{
//	D* p = new D("class A", "class B", "class C", "class D");
//	delete p;
//
//	B b{ "class A","class B" };
//
//	return 0;
//}
//
//class car
//{
//public:
//	virtual void Drive()
//	{}
//};
//
//class benz :public car
//{
//public:
//	void Drive(int i)
//	{
//		cout << "Benz-comfortable" << endl;
//	}
//};

//class A
//{
//public:
//	static A Createobj()
//	{
//		return A();
//	}
//
//private:
//	A()
//	{}
//};
//
//class B:public A
//{};
//
//int main()
//{
//	/*B bb;*/
//	A::Createobj();
//
//	return 0;
//}

//class A
//{
//public:
//private:
//	~A()
//	{}
//};
//
//class B:public A
//{};
//
//int main()
//{
//	A* p = new A;
//
//	return 0;
//}

class A final
{
public:
private:
};

class B :public A
{};

int main()
{
	return 0;
}

class Base
{
public:
	virtual void Func1()
	{
		cout << "Func1()" << endl;
	}

	virtual void Func2()
	{
		cout << "Func1()" << endl;
	}

	void Func1()
	{
		cout << "Func1()" << endl;
	}

private:
	char _b = 1;
};

int main()
{
	cout << sizeof(Base) << endl;
	Base b1;

	return 0;
}

class person
{
public:
	virtual void BuyTicket()
	{
		cout << "buy ticket-full" << endl;
	}
	int _a = 1;
};

class student :public person
{
public:
	virtual void BuyTicker()
	{
		cout << "buy ticket-half" << endl;
	}
	int _b = 1;
};

void Func(person& p)
{
	p.BuyTicket();
}

int main()
{
	person Mike;
	Func(Mike);

	student JOH;
	Func(JOH);

	return 0;
}