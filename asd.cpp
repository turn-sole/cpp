#include<iostream>

using namespace std;

//class person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age" << _age << endl;
//	}
//private:
//	string _name = "alien";
//	int _age = 20;
//};
//
//class Student :public person
//{
//protected:
//	int _stuid;
//};
//
//class Teacher :public person
//{
//protected:
//	int _jobid;
//};
//
////int main()
////{
////	int i = 0;
////	double d = i;
////	//double& d = i;
////	const double& d = i;
////
////	person p;
////	Student s;
////
////	p = s;
////	person p1 = s;
////	person& p2 = s;
////	/*p2._name="azbnf"*/
////
////	person* ptr = &s;
////	/*ptr->_name="askjv"*/
////
////	return 0;
////}
//
//class person
//{
//public:
//	person(const char* name)
//		:_name(name)
//	{
//		cout << "person()" << endl;
//	}
//
//	person(const person& p)
//		:_name(p._name)
//	{
//		cout << "person(const person&p)" << endl;
//	}
//
//	person& operator=(const person& p)
//	{
//		cout << "person operator=(const person&p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//
//	~person()
//	{
//		cout << "~person()" << endl;
//		delete _ptr;
//	}
//	
//protected:
//	string _name;
//
//	string* _ptr = new string("1111");
//};
//
//class student :public person
//{
//public:
//	student(const char*name="zkf",int id=0)
//		:person(name)
//		,_id(0)
//	{}
//
//	student(const student&s)
//		:person(s)
//		,_id(s._id)
//	{}
//	student& operator=(const student& s)
//	{
//		if (this != &s)
//		{
//			person::operator=(s);
//			_id = s._id;
//		}
//
//		return *this;
//	}
//
//	~student()
//	{
//		/*person::~person();*/
//		cout << *_ptr << endl;
//		delete _ptr;
//	}
//
//protected:
//	int _id;
//	int* _ptr = new int;
//};

//
//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; 
//};
//
//class Student : public Person
//{
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; 
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
//void main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//}

class person
{
public:
	person()
	{
		++_count;
	}
protected:
	string _name;
public:
	static int _count;
};

int person::_count = 0;

class student :public person
{
protected:
	int _stdNum;
};

class graduate :public student
{
protected:
	string _seminarCourse;
};

class Person
{
public:
	string _name; 
	int _age;
};

class Student : virtual public Person
{
protected:
	int _num; 
};

class Teacher : virtual public Person
{
protected:
	int _id; 
};

class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; 
};

//int main()
//{
//	Assistant as;
//	as.Student::_age = 18;
//	as.Teacher::_age = 30;
//	as._age = 19;
//
//	return 0;
//}


class A
{
public:
	int _a;
};

class B : virtual public A
{
public:
	int _b;
};

class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};

int main()
{
	D d;
	d._a = 1;

	B b;
	b._a = 2;
	b._b = 3;

	B* ptr = &b;
	ptr->_a++;

	ptr = &d;
	ptr->_a++;

	return 0;
}