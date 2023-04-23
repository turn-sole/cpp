#include<iostream>
using namespace std;
//int count()
//{
//	static int n = 0;
//	n++;
//	return n;
//}
//int main()
//{
//	int ret = count();
//	return 0;
//}
//int& count()
//{
//	static int n = 0;
//	n++;
//	return n;
//}
//int main()
//{
//	int ret = count();
//	return 0;
//}
#include<assert.h>
//int& count(int x)
//{
//	int n = x;
//	n++;
//	return n;
//}
//struct SeqList
//{
//	int a[100];
//	size_t size;
//};
//int SLGet(SeqList* ps, int pos)
//{
//	assert(pos < 100 && pos >= 0);
//	return ps->a[pos];
//}
//void SLModify(SeqList* ps, int pos, int x)
//{
//	assert(pos < 100 && pos >= 0);
//	ps->a[pos] = x;
//}
//int& SLAT(SeqList* ps, int pos)
//{
//	assert(pos < 100 && pos >= 0);
//	return ps->a[pos];
//}
//int main()
//{
//	int& ret1 = count(10);
//	cout << ret1<<endl;
//
//	count(20);
//	cout << ret1 << endl;
//	SeqList s;
//	SLModify(&s, 0, 1);
//	cout << SLGet(&s, 0) << endl;
//	int ret2 = SLGet(&s, 0);
//	SLModify(&s, 0, ret2 + 5);
//
//	SLAT(&s, 0) = 1;
//	cout << SLAT(&s, 0) << endl;
//	SLAT(&s, 0) += 5;
//	return 0;
//}
//struct SeqList
//{
//	int a[100];
//	size_t size;
//	int& at(int pos)
//	{
//		assert(pos >= 0 && pos < 100);
//		return a[pos];
//	}
//	int& operator[](int pos)
//	{
//		assert(pos >= 0 && pos < 100);
//		return a[pos];
//	}
//};
#include<vector>
//int main()
//{
//	SeqList s;
//	s.at(0) = 0;
//	s.at(0)++;
//	cout << s.at(0) << endl;
//	s[1] = 10;
//	s[1]++;
//	cout << s[1] << endl;
//	vector<int>v;
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i]++;
//	}
//	return 0;
//}
int main()
{
	const int a = 0;
	int& b = a;
	return 0;
}