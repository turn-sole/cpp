#include<iostream>
using namespace std;
//KY111 日期差值

int month[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31},
	{30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31},
};

bool isLeap(int year) 
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
	int n1, y1, m1, d1;
	int n2, y2, m2, d2;

	while (scanf("%d%d", &n1, &n2) != EOF) 
	{
		if (n1 > n2) 
			swap(n1, n2);

		y1 = n1 / 10000, m1 = n1 / 100 % 100, d1 = n1 % 100;
		y2 = n2 / 10000, m2 = n2 / 100 % 100, d2 = n2 % 100;

		int a = 1;
		while (y1 < y2 || m1 < m2 || d1 < d2) 
		{
			++d1;

			if (d1 == month[m1][isLeap(y1)] + 1) 
			{
				++m1;
				d1 = 1;
			}

			if (m1 == 13) 
			{
				++y1;
				m1 = 1;
			}

			a++;
		}

		printf("%d\n", a);
	}

	return 0;
}
//KY222 打印日期
int dayTab[2][13] = {
	 {0,31,28,31,30,31,30,31,31,30,31,30,31},
	 {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool IsLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
	int year, month, day;
	int number = 0;
	while (scanf("%d%d", &year, &number) != EOF)
	{
		month = 0;
		int row = IsLeap(year);
		while (number > dayTab[row][month])
		{
			number -= dayTab[row][month];
			month++;
		}
		day = number;
		printf("%04d-%02d-%02d\n", year, month, day);
	}
	return 0;
}