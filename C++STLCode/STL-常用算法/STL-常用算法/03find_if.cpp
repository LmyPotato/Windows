//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////���ò����㷨 
///*
//1.find          ����Ԫ��
//2.find_if		����������Ԫ��(1)
//3.adjacent_find ���������ظ�Ԫ��
//4.binary_search ���ֲ��ҷ�
//5.count			ͳ��Ԫ�ظ���
//6.count_if		������ͳ��Ԫ�ظ���
//*/
//
//class GreaterFive
//{
//public:
//	bool operator ()(int value)
//	{
//		return value > 5;
//	}
//};
////������������
//void tets01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "not find" << endl;
//	}
//	else
//	{
//		cout << "success find" << endl;
//		cout << (*it) << endl;
//	}
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator ()(Person &p)
//	{
//		return p.m_Age > 20;
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//class Greater20
//{
//public:
//	bool operator ()(Person &p)
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it= find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "not find" << endl;
//	} 
//	else
//	{
//		cout << "success find" << endl;
//		cout << "name:" << (*it).m_Name << " age:" << (*it).m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	//tets01();
//	test02();
//
//	system("pause");
//	return 0;
//}