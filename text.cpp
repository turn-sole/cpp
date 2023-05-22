#include<iostream>
#include<string>

using namespace std;

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//class MyQueue
//{
//public:
//	MyQueue()
//		:_size(0)
//	{
//
//	}
//
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		, _popst(capacity)
//		, _size(0)
//	{
//
//	}
//
//private:
//	Stack _pushst;
//	Stack _popst;
//	int _size;
//};
//
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//
//	A(const A&aa)
//		: _a(aa._a)
//	{
//		cout << "A(const A&&aa)" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A aa1(1);
//	A aa2 = 2;
//
//	const A& aa3 = 2;
//	return 0;
//}
//class string
//{
//public:
//	string(const char* str)
//	{
//
//	}
//};

//class list
//{
//public:
//	void push_back(const string&str)
//	{}
//};
//int main()
//{
//	string name1("zhansan");
//	string name2 = "zhansan"; 
//
//	list lt1;
//	string name3("lisi");
//	lt1.push_back(name3);
//	lt1.push_back("lisi");
//
//	return 0;
//}

int _scount = 0;

class A
{
public:
	A() { ++_scount; }
	A(const A& t) { ++_scount; }
	~A() { --_scount; }
	/*static int GetACount() { return _scount; }*/
private:
	/*static int _scount;*/
};

A aa0;

void Func()
{
	static A aa2;
	cout << __LINE__ << ":" << _scount << endl;


	_scount++;
}

int main()
{
	cout <<__LINE__<<":"<< _scount << endl;  // 1
	A aa1;
	
	Func();  // 3
	Func();  // 3

	return 0;
}

class A
{
public:
	A() 
	{
		++_scount;
	}

	A(const A& t) 
	{
		++_scount;
	}

	~A() 
	{ 
		--_scount;
	}


	void Func1()
	{

		GetACount();
	}

	void Func2()
	{
		++_a1;
	}

	static int GetACount() 
	{ 

		return _scount;
	}
private:

	int _a1 = 1;
	int _a2 = 2;

	static int _scount;
};


int A::_scount = 0;

A aa0;

void Func()
{
	static A aa2;
	cout << __LINE__ << ":" << aa2.GetACount() << endl;
}

int main()
{
	cout <<__LINE__<<":"<< A::GetACount() << endl;  // 1
	A aa1;
	
	Func();  // 3
	Func();  // 3

	return 0;
}

 //设计一个类，在类外面只能在栈上创建对象
 //设计一个类，在类外面只能在堆上创建对象
class A
{
public:
	static A GetStackObj()
	{
		A aa;
		return aa;
	}

	static A* GetHeapObj()
	{
		return new A;
	}
private:
	A()
	{}

private:
	int _a1 = 1;
	int _a2 = 2;
};

int main()
{
	static A aa1;   
	A aa2;           
	A* ptr = new A; 
	A::GetStackObj();
	A::GetHeapObj();

	return 0;
}