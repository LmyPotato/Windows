#include<iostream>
using namespace std;
#include<string>
#include<set>

//set自定义数据类型的排序
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class MyCompare
{
public:
	bool operator()(const Person &p1,const Person &p2 )
	{
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	set<Person, MyCompare>s;
	Person p1("刘备", 28);
	Person p2("关羽", 35);
	Person p3("张飞", 33);
	Person p4("赵云", 40);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout <<"name: "<< (*it).m_Name << " age: "<<(*it).m_Age<<endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}
