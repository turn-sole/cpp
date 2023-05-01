#include<iostream>
using namespace std;

//int main()
//{
//	Data d1;
//	Data d2(2023, 1, 1);
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

class Stack
{
public:
	Stack()
	{
		cout << "stack()" << endl;
		_a = (int*)malloc(sizeof(int) * 4);
		if (nullptr == _a)
		{
			perror("malloc failed to apply for space");
			return;
		}

		_capacity = 4;
		_top = 0;
	}

	Stack(int capacity = 4)
	{
		cout << "Stack()" << endl;
		_a = (int*)malloc(sizeof(int) * 4);
		if (nullptr == _a)
		{
			perror("malloc failed to apply for space");
			return;
		}

		_capacity = 4;
		_top = 0;
	}
private:
	int* _a;
	int _top;
	int _capacity;
};

int main()
{
	Stack st1;
	Stack st2(10);

	return 0;
}