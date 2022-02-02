//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//
//	static void func()
//	{
//		m_A=100;
//		//m_B=200;//静态成员不可以访问非静态成员
//		cout<<"static void func()的调用"<<endl;
//	}
//
//	static int m_A;
//	int m_B;
//private:
//	static void func2()
//	{
//		cout<<"static void func2()的调用"<<endl;
//	}
//};
//
//int Person::m_A=0;
//
//void test01()
//{
//	//对象访问
//	Person p;
//	p.func();
//	//类名访问
//	Person::func();
//
//	//Person::func2();//不能访问私有
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}