//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////���ò����㷨 
///*
//1.find          ����Ԫ��
//2.find_if		����������Ԫ��
//3.adjacent_find ���������ظ�Ԫ��
//4.binary_search ���ֲ��ҷ�
//5.count			ͳ��Ԫ�ظ���(1)
//6.count_if		������ͳ��Ԫ�ظ���
//*/
//
//void Print(int value)
//{
//	cout << value << " ";
//}
////�Զ�����������
//void tets01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(60);
//
//	int ret=count(v.begin(), v.end(), 40);
//
//	cout << "40����Ϊ��" << ret << endl;
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	bool operator==(const Person &p)
//	{
//		if (this->m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p6("�����", 35);
//
//	int ret=count(v.begin(), v.end(), p6);
//
//	cout << "�������������ȵĸ���Ϊ��" << ret << endl;
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