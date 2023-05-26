#include<iostream>

using namespace std;

//int globalvar = 1;
//static int staticvar = 1;
//void Test()
//{
//	static int staticvar = 1;
//	int localvar = 1;
//
//	int num[10] = { 1,2,3,4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4,sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2,sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//
//}

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//
//	int* p2 = new int;
//	delete p2;
//
//	int* p3 = (int*)malloc(sizeof(int) * 10);
//	free(p3);
//
//	int* p4 = new int[10];
//	delete[]p4;
//
//	int* p5 = new int(10);
//	delete p5;
//
//	int* p6 = new int[10] {1, 2, 3};
//	delete[]p6;
//
//	return 0;
//}

struct ListNode
{
	int _val;
	struct ListNode* _next;
	ListNode(int x)
		:_val(x)
	    ,_next(NULL)
	{}
};

struct ListNode* BuyListNode(int x)
{
	struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
	newnode->_next = NULL;
	newnode->_val = x;

	return newnode;
}


int main()
{
	struct ListNode* n1 = BuyListNode(1);
	struct ListNode* n2 = BuyListNode(2);
	struct ListNode* n3 = BuyListNode(3);

	ListNode* nn1 = new ListNode(1);
	ListNode* nn2 = new ListNode(2);
	ListNode* nn3 = new ListNode(3);

	return 0;
}