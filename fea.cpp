#include<iostream>
#include<string>

using namespace std;

//class Sum
//{
//public:
//	Sum()
//	{
//		_ret += _i;
//		++_i;
//	}
//
//	static int GetRet()
//	{
//		return _ret;
//	}
//private:
//	static int _i;
//	static int _ret;
//};
//
//int Sum::_i = 1;
//int Sum::_ret = 0;
//
//class Solution
//{
//public:
//	int Sum_Solution(int n)
//	{
//		Sum a[n];
//		return Sum::GetRet();
//	}
//};

//class A
//{
//public:
//	static A GetStackObj()
//	{
//		A aa;
//		return aa;
//	}
//
//	static A* GetHeapObj()
//	{
//		return new A;
//	}
//private:
//	A()
//	{}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//int main()
//{
//	//static A aa1;
//	//A aa2;
//	//A* ptr = new A;
//
//	A::GetStackObj();
//	A::GetHeapObj();
//
//	return 0;
//}

//class Date
//{
// friend ostream & operator<<(ostream & _cout, const Date & d);
// friend istream& operator>>(istream& _cin, Date& d);
//public:
// Date(int year = 1900, int month = 1, int day = 1)
// : _year(year)
// , _month(month)
// , _day(day)
// {}
//private:
// int _year;
// int _month;
// int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//}
//int main()
//{
//	Date d;
//	cin >> d;
//	cout << d << endl;
//	return 0;
//}

//class Time
//{
//    friend class Date;  
//public:
//    Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {}
//
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//
//    void SetTimeOfDate(int hour, int minute, int second)
//    {
//        _t._hour = hour;
//        _t._minute = minute;
//        _t._second = second;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//    Time _t;
//};

//class A
//{
//private:
//    static int k;
//    int h;
//public:
//    class B 
//    {
//    public:
//        void foo(const A& a)
//        {
//            cout << k << endl;
//            cout << a.h << endl;
//        }
//    };
//};
//int A::k = 1;
//int main()
//{
//    A::B b;
//    b.foo(A());
//
//    return 0;
//}

//class A
//{
//public:
//    A(int a = 0)
//        :_a(a)
//    {
//        cout << "A(int a)" << endl;
//    }
//
//    ~A()
//    {
//        cout << "~A()" << endl;
//    }
//private:
//    int _a;
//};
//
//class Solution {
//public:
//    int Sum_Solution(int n) 
//    {
//        cout << "Sum_Solution" << endl;
//        return n;
//    }
//};
//
//
//void push_back(const string& s)
//{
//    cout << "push_back:" << s << endl;
//}
//
//int main()
//{
//    A aa(1); 
//    A(2);    
//
//    Solution sl;
//    sl.Sum_Solution(10);
//
//    Solution().Sum_Solution(20);
//
//    //A& ra = A(1); 
//    const A& ra = A(1);
//    A(10);
//
//    Solution().Sum_Solution(20);
//
//    string str("11111");
//    push_back(str);
//
//    push_back(string("222222"));
//
//    push_back("222222");
//
//    return 0;
//}

class A
{
public:
    A(int a = 0)
        :_a(a)
    {
        cout << "A(int a)" << endl;
    }

    A(const A& aa)
        :_a(aa._a)
    {
        cout << "A(const A& aa)" << endl;
    }

    A& operator=(const A& aa)
    {
        cout << "A& operator=(const A& aa)" << endl;

        if (this != &aa)
        {
            _a = aa._a;
        }

        return *this;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }
private:
    int _a;
};

void Func1(A aa)
{

}

void Func2(const A& aa)
{

}

A Func3()
{
    A aa;
    return aa;
}

A& Func4()
{
    static A aa;
    return aa;
}

int main()
{
   /* A a1;
    Func1(a1);
    Func2(a1);*/

    //Func3();
    Func4();


    return 0;
}