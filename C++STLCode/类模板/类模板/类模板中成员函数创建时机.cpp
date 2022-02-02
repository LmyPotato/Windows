#include<iostream>
#include<string>
using namespace std;
//类模板中成员函数创建时机
//1、普通中成员函数一开始就创建
//2、类模板成员函数调用的时候才创建
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2" << endl;
	}
};

template < class T >
class MyClass
{
public:
	T obj;
	//类模板中的成员函数
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1>m;
	m.fun1();
	//m.fun2();
}

int main()
{
	test01();

	system("pause");
	return 0;
}