#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	//int* p1 = new int;  // 不会初始化
//	int* p1 = new int(10); // 申请一个int，初始化10
//	int* p3 = new int[10]; // 申请10个int的数组
//	int* p4 = new int[10] {1, 2, 3, 4};
//
//	int* p2 = (int*)malloc(sizeof(int));
//	if (p2 == nullptr)
//	{
//		perror("malloc fail");
//	}
//
//	return 0;
//}

class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

//class Stack
//{
//public:
//	Stack()
//	{
//		cout << "Stack()" << endl;
//		_a = new int[4];
//		_top = 0;
//		_capacity = 4;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete[] _a;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};

// 匹配使用，不要交叉，否则结果是不确定
//int main()
//{
//	// new/delete 和 malloc/free最大区别是 new/delete对于【自定义类型】除了开空间还会调用构造函数和析构函数
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A(1);
//	free(p1);
//	delete p2;
//
//	// 内置类型是几乎是一样的
//	int* p3 = (int*)malloc(sizeof(int)); // C
//	int* p4 = new int;
//	free(p3);
//	delete p4;
//	//delete p3;
//	//free(p4);
//
//	A* p5 = (A*)malloc(sizeof(A)* 10);
//	A* p6 = new A[10];
//	delete p5;
//	delete[] p6;
//
//	return 0;
//}

//int main()
//{
//	// 失败了抛异常
//	//int* p1 = (int*)operator new(sizeof(int*));
//
//	//// 失败返回nullptr
//	//int* p2 = (int*)malloc(sizeof(int*));
//	//if (p2 == nullptr)
//	//{
//	//	perror("malloc fail");
//	//}
//
//	// 申请空间 operator new -> 封装malloc
//	// 调用构造函数
//	A* p5 = new A;
//
//	// 先调用析构函数
//	// 再operator delete p5指向的空间
//	// operator delete -> free
//	delete p5;
//
//	// 申请空间 operator new[] ->perator new-> 封装malloc
//	// 调用10次构造函数
//	A* p6 = new A[10];
//	
//	// 先调用10次析构函数
//	// 再operator delete[] p6指向的空间
//	delete[] p6;
//
//
//	int* p7 = new int[10];
//	free(p7);  // 正常释放
//
//	A* p8 = new A;
//	//free(p8); // 少调用的析构函数
//	delete p8;
//
//	Stack st;
//
//	Stack* pst = new Stack;
//	//delete pst;
//	free(pst); // 少调用了析构函数 -- 有内存泄漏
//
//	// 结论：new/malloc系列 有底层实现机制有关联交叉。不匹配使用
//	// 可能有问题，可能没问题，建议大家一定匹配使用
//
//	A* p9 = new A[10];
//	//free(p9);
//	//delete p9;
//	delete[] p9;
//
//	return 0;
//}

//int main()
//{
//	size_t size = 0;
//	while (1)
//	{
//		int* p1 = (int*)malloc(1024 * 1024 * 4);
//		if (p1 == nullptr)
//		{
//			break;
//		}
//
//		size += 1024 * 1024 * 4;
//		cout << p1 << endl;
//	}
//
//	cout << size << endl;
//	cout << size / 1024 / 1024 << "MB" << endl;
//
//
//	return 0;
//}


//int main()
//{
//	size_t size = 0;
//
//	try
//	{
//		while (1)
//		{
//			int* p1 = new int[1024 * 1024 * 4];
//			size += 1024 * 1024 * 4;
//			cout << p1 << endl;
//		}
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	cout << size << endl;
//	cout << size / 1024 / 1024 << "MB" << endl;
//
//
//	return 0;
//}

//int main()
//{
//	A aa;
//
//	A* p1 = (A*)malloc(sizeof(A));
//	if (p1 == nullptr)
//	{
//		perror("malloc fail");
//	}
//
//	// 对一块已有的空间初始化 -- 定义new
//	//new(p1)A;
//	new(p1)A(1);
//
//	A* p2 = new A;
//
//	p1->~A();
//	free(p1);
//
//	delete p2;
//
//
//	return 0;
//}

//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}

// 泛型编程 -- 模板
//template<class T>
//template<typename T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//template<class X, class Y>
//void Func()
//{
//
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	//Swap(a, b);
//	swap(a, b);
//
//	double c = 1.1, d = 2.22;
//	//Swap(a, b);
//	swap(c, d);
//
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.11, d2 = 20.22;
//	// 实参传递给形参，自动推演模板类型
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//
//	// 显示实例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}

// 专门处理int的加法函数
int Add(int left, int right)
{
	return left + right;
}

// 通用加法函数
template<class T>
T Add(T left, T right)
{
	return left + right;
}


// 通用加法函数
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//	return left + right;
//}

//int main()
//{
//	int a = 1, b = 2;
//	Add(a, b);
//
//	Add<int>(a, b);
//
//	Add(1, 2.2);
//
//	return 0;
//}

//typedef double STDataType;
//class Stackint
//{
//private:
//	STDataType* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//int main()
//{
//	Stack st1; // int
//	Stack st2; // double
//
//
//	return 0;
//}

template<class T>
class Stack
{
public:
	Stack(int capaicty = 4)
	{
		_a = new T[capaicty];
		_top = 0;
		_capacity = capaicty;
	}

	~Stack()
	{
		delete[] _a;
		_capacity = _top = 0;
	}

private:
	T* _a;
	size_t _top;
	size_t _capacity;
};

int main()
{
	Stack<int> st1; // int
	Stack<double> st2; // double

	vector<int> v;
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}