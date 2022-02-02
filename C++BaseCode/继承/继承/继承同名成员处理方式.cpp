//#include<iostream>
//using namespace std;
//
////继承同名成员处理方式
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A=100;
//	}
//	void func()
//	{
//		cout<<"Base-成员函数调用"<<endl;
//	}
//	void func(int a)
//	{
//		cout<<"Base(int a)-成员函数调用"<<endl;
//	}
//	int m_A;
//
//};
//
//class Son:public Base
//{
//public:
//
//	Son()
//	{
//		m_A=200;
//	}
//	void func()
//	{
//		cout<<"Son成员函数调用"<<endl;
//	}
//	int m_A;
//};
////同名成员属性处理
//void test01()
//{
//	Son s;
//	cout<<"Son 下m_A="<<s.m_A<<endl;
//	cout<<"Base下m_A="<<s.Base::m_A<<endl;
//}
//
////同名成员函数处理
//void test02()
//{
//	Son s;
//	s.func();//直接调用是子类中同名成员函数
//	//调用父类成员函数
//	s.Base::func();
//
//	//如果子类中出现和父类同名成员函数，子类的同名函数会隐藏掉父类中所有同名成员函数
//	//如果想访问到父类中被隐藏的成员函数要加作用域
//	s.Base::func(10);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	cout << "Hello" << endl;
//	system("pause");
//	return 0;
//}