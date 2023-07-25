#include<iostream>
#include"string.h"
using namespace std;

void test_string1()
{
	st::string s1("hello world");
	cout << s1.c_str() << endl;

	st::string s2;
	cout << s2.c_str() << endl;

	for (size_t i = 0; i < s1.size(); i++)
	{
		s1[i]++;

	}
	cout << endl;

	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	const st::string s3("hello world");
	s3[0];

	/*str::string::const_iterator hit = s3.begin();*/
	auto hit = s3.begin();
	while (hit != s3.end())
	{
		cout << *hit << " ";
		++hit;
	}
	cout << endl;

	st::string::iterator it = s1.begin();
	while (it != s1.end())
	{
		*it += 1;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;
}

void test_string2()
{
	st::string s1("hello world");
	cout << s1.c_str() << endl;

	s1.push_back(' ');
	s1.push_back('#');
	s1.append("hello hyx");
	cout << s1.c_str() << endl;

	st::string s2("hello world");
	cout << s1.c_str() << endl;

	s2+=(' ');
	s2+=('#');
	s2+=("hello hyx");
	cout << s2.c_str() << endl;
}

void test_string3()
{
	st::string s1("hello world");
	cout << s1.c_str() << endl;

	s1.insert(5, 3, '#');
	cout << s1.c_str() << endl;
	s1.insert(0, 3, '#');
	cout << s1.c_str() << endl;

	st::string s2("helloworld");
	s2.insert(5, "######");
	cout << s2.c_str() << endl;
}

void test_string4()
{
	st::string s1("hello world");
	cout << s1.c_str() << endl;

	s1.erase(5, 3);
	cout << s1.c_str() << endl;

	s1.erase(5, 30);
	cout << s1.c_str() << endl;
}

void test_string5()
{
	// 2118
	st::string url = "https://www.bilibili.com/movie/?spm_id_from=333.1007.0.0";

	size_t pos1 = url.find("://");
	if (pos1 != st::string::npos)
	{
		st::string protocol = url.substr(0, pos1);
		cout << protocol.c_str() << endl;
	}

	size_t pos2 = url.find('/', pos1 + 3);
	if (pos2 != st::string::npos)
	{
		st::string domain = url.substr(pos1 + 3, pos2 - (pos1 + 3));
		st::string uri = url.substr(pos2 + 1);

		cout << domain.c_str() << endl;
		cout << uri.c_str() << endl;
	}
}
int main()
{
	/*test_string1();*/
	/*test_string2();*/
	//test_string3();
	/*test_string4();*/
	test_string5();

	return 0;
}
