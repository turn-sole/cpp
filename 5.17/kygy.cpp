#include"Date.h"


bool Date::operator<(const Date& x) const
{
	if (_year < x._year)
	{
		return true;
	}
	else if (_year == x._year && _month < x._month)
	{
		return true;
	}
	else if (_year == x._year && _month == x._month && _day < x._day)
	{
		return true;
	}

	return false;
}

bool Date::operator==(const Date& x) const
{
	return _year == x._year
		&& _month == x._month
		&& _day == x._day;
}

// ¸´ÓÃ
// d1 <= d2
bool Date::operator<=(const Date& x) const
{
	return *this < x || *this == x;
}

bool Date::operator>(const Date& x) const
{
	return !(*this <= x);
}

bool Date::operator>=(const Date& x) const
{
	return !(*this < x);
}

bool Date::operator!=(const Date& x) const
{
	return !(*this == x);
}

int GetMonthDay(int year, int month)
{
	static int daysArr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))&&month==2)
	{
		return 29;
	}
	else
	{
		return daysArr[month];
	}
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}

	return *this;
}

Date Date::operator+(int day)
{
	Date tmp(*this);

	tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		++tmp._month;
		if (tmp._month == 13)
		{
			++tmp._year;
			tmp._month = 1;
		}
	}

	return tmp;
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;

	return tmp;
}
