//#include<iostream>
//using namespace std;
//#include <string>
//#include <vector>
//#include<algorithm>//标准算法头文件
//
////vertor容器存放自定义数据类型
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout <<"name:"<<(*it).m_Name<<" age:"<<(*it).m_Age << endl;
//		cout << "name:" << it->m_Name<< " age:" << it->m_Age << endl;
//	}
//
//}
//
//void test02()
//{
//	vector<Person *>v;
//	Person p1("aaa",10);
//	Person p2("bbb",20);
//	Person p3("ccc",30);
//	Person p4("ddd",40);
//	Person p5("eee",50);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "-----------" << endl;
//		cout << (*it)->m_Name << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}