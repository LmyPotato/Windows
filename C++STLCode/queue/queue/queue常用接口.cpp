#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>
#include<queue>


//¶ÓÁĞ Queue

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	queue<Person>q;

	Person p1("ÌÆÉ®",30);
	Person p2("ËïÎò¿Õ", 500);
	Person p3("Öí°Ë½ä", 300);
	Person p4("É³É®", 200);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "size:" << q.size() << endl;
	while (!q.empty())
	{
		cout << "front--name: " << q.front().m_Name <<
			" age: " << q.front().m_Age << endl;
		cout << "back--name: "<< q.back().m_Name <<
			" age: " << q.back().m_Age << endl;

		q.pop();
	}
	cout << "SIZE:" << q.size()<<endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}