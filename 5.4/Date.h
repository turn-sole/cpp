#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	Date(const Date& d)   // ����д�������뱨������������ݹ�
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	bool operator<(const Date& x);
	bool operator==(const Date& x);
	bool operator<=(const Date& x);
	bool operator>(const Date& x);
	bool operator>=(const Date& x);
	bool operator!=(const Date& x);

	int GetMonthDay(int year, int month);

	// d1 + 100
	Date& operator+=(int day);
	Date operator+(int day);

	Date& operator++();
	Date operator++(int);
private:
	int _year;
	int _month;
	int _day;
};