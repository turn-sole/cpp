#include<iostream>
using namespace std;

struct Stack
{
	int* a;
	int top;
	int capacity;
};

void StackInit(struct Stack* ps,int defaultcapacity)
{
	ps->a = (int*)malloc(sizeof(int) * defaultcapacity);
	if (ps->a == nullptr)
	{
		perror("malloc fail");
		return;
	}
	ps->top = 0;
	ps->capacity = defaultcapacity;
}

