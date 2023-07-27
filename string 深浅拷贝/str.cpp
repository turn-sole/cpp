
#include"string.h"


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
void test_string6()
{
	st::string s("hello world");
	s.resize(8);
	cout << s.c_str() << endl;
	cout << s << endl;

	s.resize(13, 'x');
	cout << s.c_str() << endl;
	cout << s << endl;

	s.resize(20, 'y');
	cout << s.c_str() << endl;
	cout << s << endl;

	st::string ss("hello world");
	ss += '\0';
	ss += "!!!!!!!!!";
	cout << ss.c_str() << endl;
	cout << ss << endl;

	st::string copy(ss);
	cout << ss << endl;
	cout << copy << endl;

	ss += "xxxxxxxxxxxxxxxxxxxx";
	cout << ss << endl;
}

void test_string7()
{
	st::string s;
	cin >> s;
	cout << s << endl;

	cin >> s;
	cout << s << endl;

	//char ah[128];
	//while (size_t i = 0; i < 5; i++)
	//{
	//	cin >> ah[i];
	//}

	//while (size_t i = 0; i < 5; i++)
	//{
	//	cout<< ah[i];
	//}
}

void test_string8()
{
	//string s1("bb");
	//string s2("aaa");
	//cout << (s1 < s2) << endl;

	st::string s1("hello");
	st::string s2("hello");
	cout << (s1 < s2) << endl;
	cout << (s1 > s2) << endl;
	cout << (s1 == s2) << endl << endl;


	st::string s3("hello");
	st::string s4("helloxxx");
	cout << (s3 < s4) << endl;
	cout << (s3 > s4) << endl;
	cout << (s3 == s4) << endl << endl;


	st::string s5("helloxxx");
	st::string s6("hello");
	cout << (s5 < s6) << endl;
	cout << (s5 > s6) << endl;
	cout << (s5 == s6) << endl << endl;
}

void test_string9()
{
	st::string s1("hello");
	st::string s2(s1);

	cout << s1 << endl;
	cout << s2 << endl;

	st::string s3("xxxxxxxxxxxxx");
	s1 = s3;

	cout << s1 << endl;
	cout << s3 << endl;
}
 
int main()
{
	/*test_string1();*/
	/*test_string2();*/
	//test_string3();
	/*test_string4();*/
	//test_string5();
	//test_string6();
	/*test_string7();*/
	test_string8();

	return 0;
}
