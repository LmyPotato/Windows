//#include <iostream>
//using namespace std;
//
//������
//class Person
//{
//public:
//	thisָ�뱾�� ��ָ�볣�� ָ��ָ���ǲ������޸ĵ�
//	const Person *const this
//	�ڳ�Ա������+const���ε�thisָ�򲻿����޸�
//	void showPerson()const
//	{
//		this->m_B=100;
//		this->m_A=100;
//	}
//
//	void func()
//	{
//		m_A=100;
//	}
//	int m_A;
//	mutable int m_B;//�������
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//
//}
//������
//
//void test02()
//{
//	const Person p;//����ǰ����const����Ϊ������
//	p.m_A=100;
//	p.m_B=100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//	������ֻ�ܵ��ó�����
//	p.showPerson();
//	p.func();//������ �����Ե�����ͨ��Ա����
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}