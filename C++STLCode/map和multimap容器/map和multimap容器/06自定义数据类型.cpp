//#include<iostream>
//using namespace std;
//#include<string>
//#include<map>
////map容器自定义数据类型
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	int m_Age;
//	string m_Name;
//};
//
//class myCompare
//{
//public:
//	bool operator()(const Person p1, const Person p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void printMap(map<Person, int,myCompare>&m)
//{
//	for (map<Person, int,myCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout <<" 姓名：" <<it->first.m_Name << " 年龄："<<it->first.m_Age << " key值："<<it->second<< endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<Person, int,myCompare>m;
//	Person p1("刘备", 30);
//	Person p2("关羽", 40);
//	Person p3("张飞", 28);
//	m.insert(make_pair(p1, 1));
//	m.insert(make_pair(p2, 2));
//	m.insert(make_pair(p3, 3));
//
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
