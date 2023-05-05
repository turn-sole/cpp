#include<assert.h>
#include<iostream>
using namespace std;

class Date

{

public:

	// ��ȡĳ��ĳ�µ�����

	int GetMonthDay(int year, int month)
	{
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (IsLeapyear(year) && month == 2)
		{
			return 29;
		}
		else
		{
			return monthday[month];
		}
	}



	// ȫȱʡ�Ĺ��캯��

	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}



	// �������캯��

  // d2(d1)

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}



	// ��ֵ���������

  // d2 = d3 -> d2.operator=(&d2, d3)

	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}



	// ��������

	~Date()
	{

	};



	// ����+=����

	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetmonthDay(_year, _month))
		{
			_day = _day - GetmonthDay(_year, _month);
			_month += 1;
			if (_month > 12)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}



	// ����+����

	Date operator+(int day)
	{
		Date ret = *this;
		return ret += day;
	}



	// ����-����

	Date operator-(int day)
	{
		Date ret = *this;
		return ret -= day;
	}


	// ����-=����

	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += (-day);
		}

		_day = _day - day;
		while (_day < 1)
		{
			_month -= 1;
			if (_month == 0)
			{
				_month = 12;
				--_year;
			}

			_day += GetmonthDay(_year, _month);
		}

		return *this;
	}



	// ǰ��++

	Date& operator++()
	{
		return *this += 1;
	}



	// ����++

	Date operator++(int)
	{
		Date tmp(*this);
		*this += 1;
		return tmp;
	}



	// ����--

	Date operator--(int)
	{
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}



	// ǰ��--

	Date& operator--()
	{
		return *this -= 1;
	}



	// >���������

	bool operator>(const Date& d)
	{
		if ((_year > d._year)
			|| (_year == d._year && _month > d._month)
			|| (_year == d._year && _month == d._month && _day > d._day))
		{
			return true;
		}
		else
		{
			return false;
		}
	}



	// ==���������

	bool operator==(const Date& d)
	{
		return _year == d._year&& _month == d._month&& _day == d._day;
	}



	// >=���������

	bool operator >= (const Date& d)
	{
		return (*this == d) || (*this > d);
	}



	// <���������

	bool operator < (const Date& d)
	{
		return !(*this >= d);
	}



	// <=���������

	bool operator <= (const Date& d)
	{
		return !(*this > d);
	}



	// !=���������

	bool operator != (const Date& d)
	{
		return !(*this == d);
	}



	// ����-���� ��������

	int operator-(const Date& d)
	{
		Date max = *this;
		Date min = d;
		int a = 1;
		if (*this < d)
		{
			max = d;
			min = *this;
			a = -1;
		}
		int n = 0;
		while (min != max)
		{
			++n;
			++min;
		}
		return n * a;
	}

private:

	int _year;

	int _month;

	int _day;

};