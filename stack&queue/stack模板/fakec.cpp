#include<iostream>
#include<vector>
#include<list>
#include<array>

using namespace std;

template<class Container>
void Print(const Container& v)
{
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
	}
	cout << endl;
}

template<class T,size_t N>
class Stack
{
public:
	void func()
	{
		N = 0;
	}
private:
	T _a[N];
	int _top;
};


template<class T>
bool Less(T left, T right)
{
	return left < right;
}

template<class T>
bool Less(T* left, T* right)
{
	return *left < *right;
}

template<class T1, class T2>
class Data
{
public:
	Data() 
	{ 
		cout << "Data<T1, T2>" << endl; 
	}
private:
	T1 _d1;
	T2 _d2;
};

template<>
class Data<int, double>
{
public:
	Data()
	{
		cout << " Data<int,double>" << endl;
	}
private:
};

template<class T1>
class Data<T1, double>
{
public:
	Data() 
	{ 
		cout << "Data<T1, double>" << endl; 
	}
private:
};

template<class T1, class T2>
class Data<T1*, T2*>
{
public:
	Data() 
	{ 
		cout << "Data<T1*, T2*>" << endl; 
	}
private:
};

template<class T1, class T2>
class Data<T1&, T2&>
{
public:
	Data() 
	{ 
		cout << "Data<T1&, T2&>" << endl; 
	}
private:
};

class person
{
public:
	void Print()
	{
		cout << "name:" << _name << endl;
		cout << "age:" << _age << endl;
	}
private:
	string _name = "alien";
	int _age = 20;
};

class student :public person
{
	void func()
	{

	}
protected:
	int _stuid;
};

class Teacher :public person
{
protected:
	int _jobid;
};

//int main()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//}

int main()
{
	student a;
	Teacher b;
	a.Print();
	b.Print();
}