#include<iostream>

using namespace std;

//int main()
//{
//	//string s1("hello world");
//	//s1.erase(5, 1);
//	//cout << s1 << endl;
//
//	//s1.erase(5);
//	//cout << s1 << endl;
//
//	string s2("hello world");
//	s2.erase(0, 1);
//	cout << s2 << endl;
//
//	s2.erase(s2.begin());
//	cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world ");
//	s1.replace(6, 5, "vlksdxxxxx");
//	cout << s1 << endl;
//
//	s1.replace(6, 10, "vbfjs");
//	cout << s1 << endl;
//
//	string s2("hello world hello china");
//	string s3;
//	for (auto ch : s2)
//	{
//		if (ch != ' ')
//			s3 += ch;
//		else
//			s3 += "20%";
//	}
//
//	s2 = s3;
//	cout << s2 << endl;
//	cout << s2.c_str() << endl;
//
//	string filename = "vlu.cpp";
//	filename += ".zip";
//
//	FILE*fout=fopen(filename.c_str(),"r");
//
//	return 0;
//}

//int main()
//{
//	string s1("https://www.bilibili.com/");
//	size_t pos1 = s1.find("://");
//	string protocol;
//	if (pos1 != string::npos)
//	{
//		protocol = s1.substr(0, pos1);
//	}
//	cout << protocol << endl;
//
//	string domain;
//	size_t pos2 = s1.find('/', pos1 + 3);
//	if (pos2 != string::npos)
//	{
//		domain = s1.substr(pos1 + 3, pos2 - (pos1 + 3));
//	}
//	cout << domain << endl;
//
//	return 0;
//}

int main()
{
	std::string str("Please, replace the vowels in this sentence by asterisks.");
	std::size_t found = str.find_first_of("abc");
	while (found != std::string::npos)
	{
		str[found] = '*';
		found = str.find_first_of("abc", found + 1);
	}

	std::cout << str << '\n';

	return 0;
}

int main()
{
	string stri = to_string(1234);
	string strd = to_string(11.22);

	char str1[] = "abcd";
	char str2[2];
	str2[0] = 98;

	cout << str2[0] << endl;

	char str3[] = "hfajkc";
	cout << sizeof(str3) << endl;
	cout << str3 << endl;


	str3[1]--;
	cout << sizeof(str3) << endl;
	cout << str3 << endl;



	return 0;
}