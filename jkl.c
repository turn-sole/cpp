#include<stdio.h>
#include<stdlib.h>
//int a = 0;
//
//// ����
//// �����ռ���
//
//// �ֲ���
//// ȫ����
//int main()
//{
//	int a = 1;
//
//	printf("%d\n", a);
//
//	// ::�������޶���
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
//// �ֲ���->ȫ���� -> չ���������ռ��� or ָ�����������ռ���
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
//// �ֲ���->ȫ���� -> չ���������ռ��� or ָ�����������ռ���
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

//#include<iostream.h>  // ���ϵı����� VC6.0  û�������ռ�

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
//// ֱ��չ�����з��գ����Ƕ�����������������ͱ�����
//// ������Ŀ���治Ҫȥչ���������ճ���ϰ������ô��
//// ��Ŀ����ָ�����ʣ���Ҫ����չ�������ռ�
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

// չ��ĳ�����ѳ���չ��
using std::cout;
using std::endl;

//int main()
//{
//	int x = 10;
//	// << �����������
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

	// �Զ�ʶ������
	cout << x << " " << d << endl;

	// >> ����ȡ�����
	std::cin >> x >> d;
	cout << x << " " << d << endl;
	printf("%d,%.2f\n", x, d);
	cout << x << " " << d << endl;


	return 0;
}