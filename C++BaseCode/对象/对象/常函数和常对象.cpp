//#include <iostream>
//using namespace std;
//
//常函数
//class Person
//{
//public:
//	this指针本质 是指针常量 指针指向是不可以修改的
//	const Person *const this
//	在成员函数后+const修饰的this指向不可以修改
//	void showPerson()const
//	{
//		this->m_B=100;
//		this->m_A=100;
//	}
//
//	void func()
//	{
//		m_A=100;
//	}
//	int m_A;
//	mutable int m_B;//特殊变量
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//
//}
//常对象
//
//void test02()
//{
//	const Person p;//对象前加上const，变为常对象
//	p.m_A=100;
//	p.m_B=100;//m_B是特殊值，在常对象下也可以修改
//	常对象只能调用常函数
//	p.showPerson();
//	p.func();//常对象 不可以调用普通成员函数
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}