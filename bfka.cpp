#include<iostream>
#include<string>

using namespace std;

//template<class T>
//template<typename T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//template<typename T1,typename T2>
//void Func(const T1&x,const T2&y)
//{
//	cout << x << " " << y << endl;
//}
//int main()
//{
//	int a = 0, b = 1;
//	Swap(a, b);
//
//	double c = 1.1, d = 2.2;
//	Swap(c, d);
//
//	Func(1, 2);
//	Func(1, 2.2);
//
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//template<class T>
//T* Alloc(int n)
//{
//	return new T[n];
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d2) << endl;
//
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	double*p1=Alloc<double>(10);
//
//	return 0;
//}

typedef int DataType;
class StackInt
{
public:
	StackInt(size_t capacity = 3)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}

		_capacity = capacity;
		_size = 0;
	}

	void Push(DataType data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	// 其他方法...

	~StackInt()
	{
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	DataType* _array;
	int _capacity;
	int _size;
};

typedef double DataType;
class StackDouble
{
public:
	StackDouble(size_t capacity = 3)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}

		_capacity = capacity;
		_size = 0;
	}

	void Push(DataType data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	// 其他方法...

	~StackDouble()
	{
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	DataType* _array;
	int _capacity;
	int _size;
};

int main()
{
	StackInt s1; 
	StackDouble s2; 

	return 0;
}

template<class T>
class Stack
{
public:
	Stack(size_t capacity = 3);

	void Push(const T& data);

	// 其他方法...

	~Stack()
	{
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	T* _array;
	int _capacity;
	int _size;
};


template<class T>
Stack<T>::Stack(size_t capacity)
{
	/*_array = (T*)malloc(sizeof(T) * capacity);
	if (NULL == _array)
	{
		perror("malloc申请空间失败!!!");
		return;
	}*/
	_array = new T[capacity];

	_capacity = capacity;
	_size = 0;
}

template<class T>
void Stack<T>::Push(const T& data)
{
	// CheckCapacity();
	_array[_size] = data;
	_size++;
}

int main()
{
	string s1;
	std::string s2;

	std::string name("fdsjf");
	name = "zflkds";

	return 0;
}