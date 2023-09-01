#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void test_list1()
{
	list<int>lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);

	lt.push_front(10);
	lt.push_front(20);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	auto it = lt.begin();
	for (size_t i = 0; i < 5; i++)
	{
		++it;
	}
	lt.insert(it, 10);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = find(lt.begin(), lt.end(), 3);
	if (it != lt.end())
	{
		lt.insert(it, 30);
		*it *= 100;
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = find(lt.begin(), lt.end(), 2);
	if (it != lt.end())
	{
		lt.erase(it);

		/**it *= 100;*/
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = lt.begin();
	while (it != lt.end())
	{
		if (*it % 2 == 0)
		{
			it = lt.erase(it);
		}
		else
		{
			++it;
		}
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list2()
{
	list<int>lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);

	lt.push_front(10);
	lt.push_front(20);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	reverse(lt.begin(), lt.end());
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.reverse();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//sort(lt.begin(), lt.end());
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//lt.sort();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list3()
{
	int myints[] = { 17,89,7,14 };
	std::list<int> mylist(myints, myints + 4);

	mylist.remove(89);

	for (auto e : mylist)
	{
		cout << e << " ";
	}
	cout << endl;

	std::list<int>mylist1, mylist2;
	std::list<int>::iterator it;

	for (int i = 1; i <= 4; ++i)
	{
		mylist1.push_back(i);
	}

	for (int i = 1; i <= 3; ++i)
	{
		mylist2.push_back(i * 10);
	}

	it = mylist1.begin();
	++it;

	/*mylist1.splice(it, mylist2);*/

	/*mylist1.splice(it, mylist2, ++mylist2.begin());*/
	//mylist1.splice(it, mylist2, ++mylist2.begin(),mylist2.end());

	mylist1.splice(mylist1.begin(),mylist1,++mylist1.begin(),mylist1.end());

	for (auto e : mylist1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto e : mylist2)
	{
		cout << e << " ";
	}
	cout << endl;
}

#include"list.h"
int main()
{
	/*test_list3();*/

	hyx::test_list4();

	return 0;
}