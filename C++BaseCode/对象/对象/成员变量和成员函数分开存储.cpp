//#include <iostream>
//using namespace std;
//
////成员变量和成员函数分开存储
//class Person
//{
//public:
//	static int m_B;//不属于类的对象上
//	int m_A;//只有非静态成员属于类对象
//
//	void func()//非静态成员函数也不属于类对象上
//	{
//
//	}
//
//	static void func2()//静态成员函数也不属于
//	{
//
//	}
//};
//
//int Person::m_B=0;
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为：1
//	//C++编译器给每个空对象分配1字节，区分空对象占用内存
//	//每个空对象也会有一个独一无二的内存
//	cout<<"sizeof p="<<sizeof(p)<<endl;
//
//}
//
//void test02()
//{
//	Person p;
//	cout<<"sizeof p="<<sizeof(p)<<endl;
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}