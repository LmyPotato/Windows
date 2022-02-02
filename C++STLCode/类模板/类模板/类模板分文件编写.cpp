//#include<iostream>
//#include "person.hpp"
//1、把#include "person.h"改为#include "person.cpp"
//2、把.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
//using namespace std;
//#include<string>
//
//类模板分文件编写的问题以及解决
//template < class T1, class T2 >
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name：" << this->m_Name << " age:" << this->m_Age << endl;
//
//}
//
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//void test01()
//{
//	Person<string, int>p("Tom", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}