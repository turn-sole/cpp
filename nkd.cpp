#include<iostream>

using namespace std;

//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//
//	s.clear();
//	cout << "capacity changed: " << sz << '\n';
//
//	s.reserve(10);
//	sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//}
//int main()
//{
//	TestPushBackReserve();
//	return 0;
//}

int main()
{
	string s1("hello world");

	s1.reserve(100);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;


	//s1.resize(100);
	s1.resize(100, 'x');
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	return 0;
}



int main()
{
	try {
		string s1("hello world");
		s1.at(0) = 'x';
		cout << s1 << endl;
		//s1[15];  // 暴力处理
		s1.at(15); // 温和的错误处理
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

int main()
{
	string s1("hello world");
	s1.append("ssssss");
	cout << s1 << endl;

	s1.assign("111111111");
	cout << s1 << endl;

	s1.insert(0, "hello");
	cout << s1 << endl;

	s1.insert(5, "world");
	cout << s1 << endl;

	s1.insert(0, 10, 'x');
	cout << s1 << endl;

	s1.insert(s1.begin()+10, 10, 'y');
	cout << s1 << endl;

	return 0;
}