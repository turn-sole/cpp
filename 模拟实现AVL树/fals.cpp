#include"AVLTree.h"

int main()
{
	int a[] = { 2.3,4.5,1,52,23,64,42 };
	AVLTree<int, int>t;
	for (auto e : a)
	{
		t.Insert(make_pair(e, e));
		cout << e << "->" << t.IsBalance() << endl;
	}
	return 0;
}