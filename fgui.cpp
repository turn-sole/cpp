#include<iostream>
#include<map>
#include<set>

using namespace std;

void test1()
{
	set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);

	if (s.find(3) != s.end())
		cout << "already find" << endl;
	
	if (s.count(3))
		cout << "already find" << endl;

	std::set<int>myset;
	std::set<int>::iterator itlow,itup;
	
	for (int i = 1; i < 10; i++)
	{
		myset.insert(i * 10);
	}

	myset.insert(45);

	//itlow = myset.lower_bound(30);
	//itup = myset.upper_bound(60);

	auto ret = myset.equal_range(30);
	itlow = ret.first;
	itup = ret.second;

	cout << *itlow << endl;
	cout << *itup << endl;

	myset.erase(itlow, itup);
	for (auto e : myset)
	{
		cout << e << " ";
	}
	cout << endl;

}

void test2()
{
	multiset<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(5);
	s.insert(6);
	s.insert(7);

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

	auto pos = s.find(7);
	while (pos != s.end())
	{
		cout << *pos << " ";
		++pos;
	}
	cout << endl;
	
	cout << s.count(7) << endl;

	auto ret = s.equal_range(5);
	auto itlow = ret.first;
	auto itup = ret.second;

	cout << *itlow << endl;
	cout << *itup << endl;

	s.erase(itlow, itup);

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

}

class A
{
public:
	A(int a1,int a2)
		:_a1(a1)
		,_a2(a2)
	{}
private:
	int _a1;
	int _a2;
};

void test3()
{
	map<string, string>dict;

	pair<string, string>kv1("insert", "²åÈë");
	dict.insert(kv1);
	dict.insert(pair<string, string>("sort", "ÅÅĞò"));

	dict.insert(make_pair("find", "²éÕÒ"));

	dict.insert({ "find","²éÕÒ" });

	string str1 = "hello";
	A aa1 = { 1,2 };
	pair<string, string>kv2 = { "find","²éÕÒ" };
}

void test4()
{
	map<string, string> dict;
	dict.insert(make_pair("string", "×Ö·û´®"));
	dict.insert(make_pair("sort", "ÅÅĞò"));
	dict.insert(make_pair("insert", "²åÈë"));

	dict.insert(make_pair("insert", "xxx"));

	auto it = dict.begin();
	while (it != dict.end())
	{
		//it->second = "xxx";
		cout << it->first << ":" << it->second << endl;
		++it;
	}
	cout << endl;

	for (const auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
}

void test5()
{
	string arr[] = { "a","b","c","d","a","a","b","c","d","b" };
	map<string, int>countMap;
	for (auto e : arr)
	{
		countMap[e]++;
	}

	for (const auto& kv : countMap)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
}

void test6()
{
	map<string, string> dict;
	dict.insert(make_pair("string", "×Ö·û´®"));
	dict.insert(make_pair("sort", "ÅÅĞò"));
	dict.insert(make_pair("insert", "²åÈë"));

	cout << dict["sort"] << endl;
	dict["map"];                  
	dict["map"] = "Ó³Éä,µØÍ¼";    
	dict["insert"] = "xxx";       
	dict["set"] = "¼¯ºÏ";         
}

int main()
{
	test6();

	return 0;
}