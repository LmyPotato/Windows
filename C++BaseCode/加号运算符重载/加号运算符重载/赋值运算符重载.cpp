//#include<iostream>
//
//using namespace std;
//
////赋值运算符重载
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age= new int (age);
//	}
//	~Person()
//	{
//		if (m_Age!=NULL)
//		{
//			delete m_Age;
//			m_Age=NULL;
//		}
//	}
//
//	//重载 赋值运算符
//	Person& operator=(Person &p)
//	{
//		//编译器提供浅拷贝
//		//m_Age=p.m_Age;
//
//		if (m_Age!=NULL)
//		{
//			delete m_Age;
//			m_Age=NULL;
//		}
//
//		m_Age= new int(*p.m_Age);
//		return *this;//返回的是一个指针类型，要想得到数值要解引用*it
//	}
//
//	int *m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//	p3=p2=p1;//赋值操作
//
//
//	cout<<*p1.m_Age<<endl;
//	cout<<*p2.m_Age<<endl;
//	cout<<*p3.m_Age<<endl;
//}
//
//int main()
//{
//	test01();
//
//	//int a=10;
//	//int b=20;
//	//int c=30;
//
//	//c=b=a;
//
//	//cout<<"a="<<a<<endl;
//	//cout<<"b="<<b<<endl;
//	//cout<<"c="<<c<<endl;
//
//	system("pause");
//	return 0;
//}