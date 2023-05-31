#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

//int main()
//{
//	string s1;
//	string s2("zhansan");
//	string s3("hello world");
//	string s4(10, '*');
//	string s5(s2);
//
//	string s6(s3, 6, 5);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s3 << endl;
//	cout << s6 << endl;
//
//	cout << (s1 == s2) << endl;
//	cout <<( s1 > s2 )<< endl;
//
//	string s7(s3, 6);
//	cout << s7 << endl;
//
//	string s8(s3, 6, 100);
//	cout << s8 << endl;
//
//	s1 = s2;
//	cout << s1 << endl;
//
//	s1 = "1111";
//	cout << s1 << endl;
//
//	s1 = '2';
//	cout << s1 << endl;
//
//	return 0;
//}

//class string
//{
//private:
//	char* _str;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	//string s1("hello");
//	////s1.push_back(' ');
//	////s1.append("world");
//
//	//s1 += ' ';
//	//s1 += "world";
//
//	//cout << s1 << endl;
//
//	size_t x = 0;
//	cin >> x;
//
//	string xstr;
//	while (x)
//	{
//		size_t val = x % 10;
//		xstr += (val + '0');
//		x /= 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//
//	cout << s1 << endl;
//
//	cout << s1.size() << endl;
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	cout << endl;
//	s1[0]--;
//
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	char s3[] = "hello world";
//	s3[1]++;
//	s1[1]++;
//
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		(*it)--;
//
//		++it;
//	}
//	cout << endl;
//
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto& ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	for (char& ch : s1)
//	{
//		ch++;
//	}
//	cout << endl;
//
//	for (char ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	
//	vector<int>::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(3);
//	lt.push_back(4);
//
//	list<int>::iterator lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//
//	reverse(v.begin(), v.end());
//	reverse(lt.begin(), lt.end());
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end());
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	reverse(v.begin(), v.end());
//	reverse(lt.begin(), lt.end());
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end());
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
void Func(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end())
	{
		// *it += 2;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	//string::const_reverse_iterator rit = s.rbegin();
	auto rit = s.rbegin();
	while (rit != s.rend())
	{
		// (*rit) += 3;

		cout << *rit << " ";
		++rit;
	}
}

int main()
{
	string s1("hello world");
	//string::reverse_iterator rit = s1.rbegin();
	auto rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	cout << s1 << endl;

	std::map<std::string, std::string>::iterator it = m.begin();

	return 0;
}