#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	//int* p1 = new int;  // �����ʼ��
//	int* p1 = new int(10); // ����һ��int����ʼ��10
//	int* p3 = new int[10]; // ����10��int������
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

// ƥ��ʹ�ã���Ҫ���棬�������ǲ�ȷ��
//int main()
//{
//	// new/delete �� malloc/free��������� new/delete���ڡ��Զ������͡����˿��ռ仹����ù��캯������������
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A(1);
//	free(p1);
//	delete p2;
//
//	// ���������Ǽ�����һ����
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
//	// ʧ�������쳣
//	//int* p1 = (int*)operator new(sizeof(int*));
//
//	//// ʧ�ܷ���nullptr
//	//int* p2 = (int*)malloc(sizeof(int*));
//	//if (p2 == nullptr)
//	//{
//	//	perror("malloc fail");
//	//}
//
//	// ����ռ� operator new -> ��װmalloc
//	// ���ù��캯��
//	A* p5 = new A;
//
//	// �ȵ�����������
//	// ��operator delete p5ָ��Ŀռ�
//	// operator delete -> free
//	delete p5;
//
//	// ����ռ� operator new[] ->perator new-> ��װmalloc
//	// ����10�ι��캯��
//	A* p6 = new A[10];
//	
//	// �ȵ���10����������
//	// ��operator delete[] p6ָ��Ŀռ�
//	delete[] p6;
//
//
//	int* p7 = new int[10];
//	free(p7);  // �����ͷ�
//
//	A* p8 = new A;
//	//free(p8); // �ٵ��õ���������
//	delete p8;
//
//	Stack st;
//
//	Stack* pst = new Stack;
//	//delete pst;
//	free(pst); // �ٵ������������� -- ���ڴ�й©
//
//	// ���ۣ�new/mallocϵ�� �еײ�ʵ�ֻ����й������档��ƥ��ʹ��
//	// ���������⣬����û���⣬������һ��ƥ��ʹ��
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
//	// ��һ�����еĿռ��ʼ�� -- ����new
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

// ���ͱ�� -- ģ��
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
//	// ʵ�δ��ݸ��βΣ��Զ�����ģ������
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//
//	// ��ʾʵ����
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}

// ר�Ŵ���int�ļӷ�����
int Add(int left, int right)
{
	return left + right;
}

// ͨ�üӷ�����
template<class T>
T Add(T left, T right)
{
	return left + right;
}


// ͨ�üӷ�����
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