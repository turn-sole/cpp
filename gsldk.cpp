#include<iostream>

using namespace std;
int main()
{
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamcosts[3] = { 20,30,5 };
	cout << "Total yams=";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with" << yams[1] << "yams cost";
	cout << yamcosts[1] << "cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is" << total << "cents.\n";

	cout << "\nSize of yams array=" << sizeof yams;
	cout << "bytes.\n";
	cout << "Size of one element=" << sizeof yams[0];
	cout << "bytes.\n";

	return 0;
}

void Swap(int& a, int& b)
{
	auto tmp = a;
	a = b;
	b = tmp;
}

void Swap(double& a, double& b)
{
	auto tmp = a;
	a = b;
	b = tmp;
}

void Swap(char& a, char& b)
{
	auto tmp = a;
	a = b;
	b = tmp;
}

template<class T>
T Add(T a, T b)
{
	return  a + b;
}
void Test()
{
	int a = 10;
	int b = 100;
	cout << Add(a, b) << endl;
}

template<class T>
class Stack
{
public:
	//...
private:
	T* _a;
	size_t _size;
	size_t _capacity;
};

const int N = 5e5 + 10;
typedef long long LL;
typedef pair<LL, int> PII;
LL cnt[N];
int pre[N], ne[N];
int n, k;
void solve()
{
	priority_queue<PII, vector<PII>, greater<PII>>q;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		LL v;
		cin >> v;
		q.push({ v,i });
		pre[i] = i - 1;
		ne[i] = i + 1;
	}
	int g = n - k;
	while (q.size() > g)
	{
		auto p = q.top();
		q.pop();
		LL v = p.first, i = p.second;
		if (cnt[i])
		{
			q.push({ v + cnt[i],i });
			cnt[i] = 0;
		}
		else
		{
			int l = pre[i], r = ne[i];
			cnt[l] += v;
			cnt[r] += v;
			pre[r] = l;
			ne[l] = r;
		}
	}
	vector<LL> a(n + 1);
	for (int i = 0; i < g; i++)
	{
		auto p = q.top();
		q.pop();
		a[p.second] = p.first + cnt[p.second];
	}
	for (int i = 1; i <= n; i++)
		if (a[i])
			cout << a[i] << " ";
}
int main()
{
	solve();
	return 0;
}

