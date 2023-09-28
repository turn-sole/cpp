#include<iostream>
using namespace std;

class A
{
public:
	virtual void func(int val = 1)
	{
		cout << "A->" << val << endl;
	}
};

class B:public A
{
public:
	void func(int val = 0)
	{
		cout << "B->" << val << endl;
	}
	virtual void test()
	{
		func();
	}
};

//int main(int arge,char*argv[])
//{
//	B* p = new B;
//	p->test();
//	return 0;
//}

typedef void(*Func_ptr)();

void PrintVFT(Func_ptr* table)
{
	for (size_t i = 0; table[i] != nullptr; i++)
	{
		printf("[%d]:%p->", i, table[i]);
		Func_ptr f = table[i];
		f();
	}
	printf("\n");
}

class person
{
public:
	virtual void BuyTicket()
	{
		cout << "buy ticket-full" << endl;
	}

	virtual void Func1()
	{
		cout << "person::Func1()" << endl;
	}

	virtual void Func2()
	{
		cout << "person::Func2()" << endl;
	}

protected:
	int _a = 0;
};

class student :public person
{
public:
	virtual void BuyTicket()
	{
		cout << "buy ticket-half" << endl;
	}
private:
	virtual void Func3()
	{
		cout << "student::Func3()" << endl;
	}

protected:
	int _b = 1;
};

//int main()
//{
//	person ps;
//	student st;
//
//	int vft1 = *((int*)&ps);
//	PrintVFT((Func_ptr*)vft1);
//
//	int vft2 = *((int*)&st);
//	PrintVFT((Func_ptr*)&vft2);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double d = 1.1;
//	cout << i << endl;
//	cout << d << endl;
//
//	person ps;
//	person* ptr = &ps;
//
//	ps.BuyTicket();
//	ptr->BuyTicket();
//
//	return 0;
//}


class base1
{
public:
	virtual void func1()
	{
		cout << "base1::func1" << endl;
	}

	virtual void func2()
	{
		cout << "base1::func2" << endl;
	}

private:
	int b1;
};

class base2
{
public:
	virtual void func1()
	{
		cout << "base2::func1" << endl;
	}

	virtual void func2()
	{
		cout << "base2::func2" << endl;
	}

private:
	int b2;
};

class Derive :public base1, public base2
{
public:
	virtual void func1()
	{
		cout << "Derive::func1" << endl;
	}

	virtual void func3()
	{
		cout << "Derive::func3" << endl;
	}

private:
	int d1;
};

int main()
{
	Derive d;
	cout << sizeof(d) << endl;

	int vft1 = *((int*)&d);
	base2* ptr = &d;
	int vft2 = *((int*)ptr);

	PrintVFT((Func_ptr*)vft1);
	PrintVFT((Func_ptr*)vft2);

	return 0;
}