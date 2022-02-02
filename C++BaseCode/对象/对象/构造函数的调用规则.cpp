//#include <iostream>
//using namespace std;
//
////构造函数的调用规则
//class Person
//{
//public:
//	Person()
//	{
//		cout<<"person的默认构造函数"<<endl;
//	}
//
//	Person (int age)
//	{
//		m_Age=age;
//		cout<<"person的有参构造函数"<<endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_Age=p.m_Age;
//		cout<<"Person的拷贝函数"<<endl;
//	}
//
//	~Person()
//	{
//		cout<<"Person的默认析构函数"<<endl;
//	}
//
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person p;
//	p.m_Age=18;
//
//	Person p2(p);
//
//	cout<<"p2的年龄为："<<p2.m_Age<<endl;
//}
//
//void test02()
//{
//	Person p1(20);
//
//	Person p2(p1);
//	cout<<"p2的年龄为："<<p2.m_Age<<endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}