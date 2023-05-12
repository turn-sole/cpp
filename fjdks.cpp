#include <iostream>
using namespace std;

//HJ73 计算日期到天数转换
int main() {
    int year, month, day;
    int data[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while (cin >> year >> month >> day)
    {
        int sum = 0;
        for (int i = 0; i < month - 1; i++)
        {
            sum = sum + data[i];
        }
        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2)
            sum = sum + 1 + day;
        else
            sum = sum + day;
        cout << sum << endl;
    }

    return 0;
}