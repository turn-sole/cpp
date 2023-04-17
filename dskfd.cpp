stack<int> stack;
/* 元素入栈 */
stack.push(1);
stack.push(3);
stack.push(2);
stack.push(5);
stack.push(4);
/* 访问栈顶元素 */
int top = stack.top();
/* 元素出栈 */
stack.pop();
/* 获取栈的长度 */
int size = stack.size();
/* 判断是否为空 */
bool empty = stack.empty();
class LinkedListStack {
private:
	ListNode* stackTop; // 将头结点作为栈顶
	int stkSize; // 栈的长度
public:
	LinkedListStack() {
		stackTop = nullptr;
		stkSize = 0;
	}
	~LinkedListStack() {
		freeMemoryLinkedList(stackTop);
	}
	/* 获取栈的长度 */
	int size() {
		return stkSize;
	}
	/* 判断栈是否为空 */
	bool empty() {
		return size() == 0;
	}
	/* 入栈 */
	void push(int num) {
		ListNode* node = new ListNode(num);
		node->next = stackTop;
		stackTop = node;
		stkSize++;
	}
	/* 出栈 */
	void pop() {
		int num = top();
		ListNode* tmp = stackTop;
		stackTop = stackTop->next;
		// 释放内存
		delete tmp;
		stkSize--;
	}
	/* 访问栈顶元素 */
	int top() {
		if (size() == 0)
			throw out_of_range(" 栈为空");
		return stackTop->val;
	}
	/* 将 List 转化为 Array 并返回 */
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
	/* 获取栈的长度 */
	int size() {
		return stack.size();
	}
	/* 判断栈是否为空 */
	bool empty() {
		return stack.empty();
	}
	/* 入栈 */
	void push(int num) {
		stack.push_back(num);
	}
	/* 出栈 */
	void pop() {
		int oldTop = top();
		stack.pop_back();
	}
	/* 访问栈顶元素 */
	int top() {
		if (empty())
			throw out_of_range(" 栈为空");
		return stack.back();
	}
	/* 返回 Vector */
	vector<int> toVector() {
		return stack;
	}
};