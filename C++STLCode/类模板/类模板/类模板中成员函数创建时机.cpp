#include<iostream>
#include<string>
using namespace std;
//��ģ���г�Ա��������ʱ��
//1����ͨ�г�Ա����һ��ʼ�ʹ���
//2����ģ���Ա�������õ�ʱ��Ŵ���
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
	//��ģ���еĳ�Ա����
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