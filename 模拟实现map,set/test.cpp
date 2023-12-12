#include<iostream>
#include<string>
using namespace std;

#include"mymap.h"
#include"myset.h"
void func(const hyx::map<int, int>& m)
{
	hyx::map<int, int>::const_iterator mit = m.begin();
	while (mit != m.end())
	{
		cout << mit->first << ":" << mit->second << endl;
		++mit;
	}
	cout << endl;
}
int main()
{
	hyx::map<int, int>m;
	m.insert(make_pair(1, 1));
	m.insert(make_pair(2, 2));
	m.insert(make_pair(3, 3));

	auto mit = m.begin();
	while (mit != m.end())
	{
		mit->second = 2;

		cout << mit->first << ":" << mit->second << endl;
		++mit;
	}
	cout << endl;

	func(m);

	for (const auto& kv : m)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
	
	hyx::set<int>s;
	s.insert(5);
	s.insert(7);
	s.insert(92);
	s.insert(37);
	s.insert(30);
	s.insert(47);
	s.insert(19);
	s.insert(843);
	hyx::set<int>::iterator it = a.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (const auto& e : s)
	{
		cout << e << " ";
	}
	cout << endl;

	hyx::map<string, string> dict;
	dict.insert(make_pair("sort", "TIM"));
	dict("left");
	
	for (const auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;

	dict("left") = "×ó±ß";
	dict("sort") = "ÅÅÐò";
	dict("right") = "ÓÒ±ß";
	
	for (const auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;

	return 0;
}