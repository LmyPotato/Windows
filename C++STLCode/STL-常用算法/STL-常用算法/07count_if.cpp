#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

//���ò����㷨 
/*
1.find          ����Ԫ��
2.find_if		����������Ԫ��
3.adjacent_find ���������ظ�Ԫ��
4.binary_search ���ֲ��ҷ�
5.count			ͳ��Ԫ�ظ���
6.count_if		������ͳ��Ԫ�ظ���(1)
*/

//�Զ�����������

class Greater20
{
public:
	bool operator ()(int val)
	{
		return val > 20;
	}
};

void tets01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int ret = count_if(v.begin(), v.end(), Greater20());

	cout << "����20�ĸ���Ϊ��" << ret << endl;
}

//�Զ�����������


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	int m_Age;
	string m_Name;
};

class AgeGreater20
{
public:
	bool operator ()(const Person &p)
	{
		return p.m_Age > 20;
	}
};
void test02()
{
	vector<Person>v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 20);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int ret = count_if(v.begin(), v.end(), AgeGreater20());

	cout << "����20��ĸ���Ϊ��" << ret << endl;
}

int main()
{
	//tets01();
	test02();

	system("pause");
	return 0;
}