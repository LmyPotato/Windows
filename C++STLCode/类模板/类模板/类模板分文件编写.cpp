//#include<iostream>
//#include "person.hpp"
//1����#include "person.h"��Ϊ#include "person.cpp"
//2����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
//using namespace std;
//#include<string>
//
//��ģ����ļ���д�������Լ����
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
//	cout << "name��" << this->m_Name << " age:" << this->m_Age << endl;
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