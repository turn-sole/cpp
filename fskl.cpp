#include<iostream>
#include<cmath>
//int main()
//{
//	using namespace std;
//	double area;
//	cout << "Enter the floor area,in square feet,of your home:";
//	cin >> area;
//	double side;
//	side = sqrt(area);
//	cout << "That's the equivalent of a square" << side
//		<< "feet to the side." << endl;
//	cout << "How facinating!" << endl;
//	return 0;
//}
void simon(int);
int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an inteqer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes" << n << "time." << endl;
}