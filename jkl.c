#include<stdio.h>
#include<stdlib.h>
//int a = 0;
//
//// 类域
//// 命名空间域
//
//// 局部域
//// 全局域
//int main()
//{
//	int a = 1;
//
//	printf("%d\n", a);
//
//	// ::域作用限定域
//	printf("%d\n",::a);
//
//	return 0;
//}

//int a = 0;
//
//namespace bit
//{
//	int a = 1;
//}
//
//// 局部域->全局域 -> 展开了命名空间域 or 指定访问命名空间域
//int main()
//{
//	int a = 2;
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", bit::a);
//
//
//	return 0;
//}


//int a = 0;
//
//namespace bit
//{
//	int a = 1;
//}
//
//using namespace bit;
//
//// 局部域->全局域 -> 展开了命名空间域 or 指定访问命名空间域
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//namespace bit
//{
//	int rand = 1;
//}
////
////int main()
////{
////	printf("%d\n", bit::rand);
////	printf("%p\n", rand);
////
////	return 0;
////}
//
//namespace N1
//{
//    int a = 0;
//    int b;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//
//    namespace N2
//    {
//        int a = 1;
//        int c;
//        int d;
//        int Sub(int left, int right)
//        {
//            return left - right;
//        }
//    }
//}
//
//int main()
//{
//    printf("%d\n", N1::a);
//    printf("%d\n", N1::N2::a);
//    printf("%d\n", N1::Add(1, 2));
//
//    printf("%d\n", bit::x);
//    printf("%d\n", bit::y);
//    printf("%d\n", bit::rand);
//
//    return 0;
//}

//#include<iostream.h>  // 很老的编译器 VC6.0  没有命名空间

//#include<iostream>
//#include<vector>
//#include<list>
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::list<int> lt;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<list>
//
//using namespace std;
//// 直接展开会有风险，我们定义如果跟库重名，就报错了
//// 建议项目里面不要去展开，建议日常练习可以这么玩
//// 项目建议指定访问，不要轻易展开命名空间
//
//int main()
//{
//	cout << "hello world" << endl;
//	std::cout << "hello world" << std::endl;
//
//	list<int> lt;
//
//	return 0;
//}

#include<iostream>
#include<vector>
#include<list>

// 展开某个：把常用展开
using std::cout;
using std::endl;

//int main()
//{
//	int x = 10;
//	// << 流插入运算符
//	cout << "hello world" << x << '\n' << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//
//	std::list<int> lt;
//
//	return 0;
//}

int main()
{
	int x = 10;
	double d = 11.11;

	// 自动识别类型
	cout << x << " " << d << endl;

	// >> 流提取运算符
	std::cin >> x >> d;
	cout << x << " " << d << endl;
	printf("%d,%.2f\n", x, d);
	cout << x << " " << d << endl;


	return 0;
}