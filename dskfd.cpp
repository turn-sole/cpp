stack<int> stack;
/* Ԫ����ջ */
stack.push(1);
stack.push(3);
stack.push(2);
stack.push(5);
stack.push(4);
/* ����ջ��Ԫ�� */
int top = stack.top();
/* Ԫ�س�ջ */
stack.pop();
/* ��ȡջ�ĳ��� */
int size = stack.size();
/* �ж��Ƿ�Ϊ�� */
bool empty = stack.empty();
class LinkedListStack {
private:
	ListNode* stackTop; // ��ͷ�����Ϊջ��
	int stkSize; // ջ�ĳ���
public:
	LinkedListStack() {
		stackTop = nullptr;
		stkSize = 0;
	}
	~LinkedListStack() {
		freeMemoryLinkedList(stackTop);
	}
	/* ��ȡջ�ĳ��� */
	int size() {
		return stkSize;
	}
	/* �ж�ջ�Ƿ�Ϊ�� */
	bool empty() {
		return size() == 0;
	}
	/* ��ջ */
	void push(int num) {
		ListNode* node = new ListNode(num);
		node->next = stackTop;
		stackTop = node;
		stkSize++;
	}
	/* ��ջ */
	void pop() {
		int num = top();
		ListNode* tmp = stackTop;
		stackTop = stackTop->next;
		// �ͷ��ڴ�
		delete tmp;
		stkSize--;
	}
	/* ����ջ��Ԫ�� */
	int top() {
		if (size() == 0)
			throw out_of_range(" ջΪ��");
		return stackTop->val;
	}
	/* �� List ת��Ϊ Array ������ */
	vector<int> toVector() {
		ListNode* node = stackTop;
		vector<int> res(size());
		for (int i = res.size() - 1; i >= 0; i--) {
			res[i] = node->val;
			node = node->next;
		}
		return res;
	}
};
class ArrayStack {
private:
	vector<int> stack;
public:
	/* ��ȡջ�ĳ��� */
	int size() {
		return stack.size();
	}
	/* �ж�ջ�Ƿ�Ϊ�� */
	bool empty() {
		return stack.empty();
	}
	/* ��ջ */
	void push(int num) {
		stack.push_back(num);
	}
	/* ��ջ */
	void pop() {
		int oldTop = top();
		stack.pop_back();
	}
	/* ����ջ��Ԫ�� */
	int top() {
		if (empty())
			throw out_of_range(" ջΪ��");
		return stack.back();
	}
	/* ���� Vector */
	vector<int> toVector() {
		return stack;
	}
};