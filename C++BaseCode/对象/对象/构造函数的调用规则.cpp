//#include <iostream>
//using namespace std;
//
////���캯���ĵ��ù���
//class Person
//{
//public:
//	Person()
//	{
//		cout<<"person��Ĭ�Ϲ��캯��"<<endl;
//	}
//
//	Person (int age)
//	{
//		m_Age=age;
//		cout<<"person���вι��캯��"<<endl;
//	}
//
//	Person(const Person &p)
//	{
//		m_Age=p.m_Age;
//		cout<<"Person�Ŀ�������"<<endl;
//	}
//
//	~Person()
//	{
//		cout<<"Person��Ĭ����������"<<endl;
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
//	cout<<"p2������Ϊ��"<<p2.m_Age<<endl;
//}
//
//void test02()
//{
//	Person p1(20);
//
//	Person p2(p1);
//	cout<<"p2������Ϊ��"<<p2.m_Age<<endl;
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