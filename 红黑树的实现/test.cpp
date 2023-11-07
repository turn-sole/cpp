#include"RBTree.h"
#include<vector>

int main()
{
	const int N = 1000000;
	vector<int>v;
	v.reserve(N);
	srand(time(0));

	for (size_t i = 0; i < N; i++)
	{
		v.push_back(i);
	}

	RBTree<int, int>r;
	for (auto e : v)
	{
		r.Insert(make_pair(e, e));
	}
	cout << r.IsBlance() << endl;
	cout << r.Height() << endl;
	cout << r._rotateCount << endl;
	
	return 0;
}