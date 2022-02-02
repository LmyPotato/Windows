//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
////list容器案例
//
//
//
//class Person
//{
//public:
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//void printList(const list<Person>&L)
//{
//	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名: " << (*it).m_Name << " 年龄: " << it->m_Age
//			<< " 身高: " << (*it).m_Height << endl;
//	}
//}
//
//void printLine(int n)//画分割线线
//{
//	while (n--)
//	{
//		printf("-");
//	}
//	printf("\n");
//}
//
//bool comparePerson(Person &p1,Person &p2)
//{
//	//按照年龄升序
//	if (p1.m_Age == p2.m_Age)
//	{
//		//年龄相同
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//}
//
//void test01()
//{
//	list<Person>L;
//
//	Person p1("刘备", 35, 175);
//	Person p2("孙权", 45, 170);
//	Person p3("曹操", 40, 180);
//	Person p4("赵云", 25, 190);
//	Person p5("关羽", 35, 200);
//	Person p6("张飞", 35, 160);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	printList(L);
//
//	printLine(30);
//	cout << "排序后:" << endl;
//	L.sort(comparePerson);
//	printList(L);
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}