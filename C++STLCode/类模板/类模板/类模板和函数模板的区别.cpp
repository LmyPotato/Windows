//#include<iostream>
//#include<string>
//using namespace std;
////��ģ��ͺ���ģ�������
//
//
//template < class NameType, class AgeType=int >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	//1����ģ��û���Զ��Ƶ�ʹ�÷�ʽ
//	//Person p("wukong", 1000);//���� �޷�ʹ���Զ������Ƶ�
//	Person<string, int>p("�����", 1000);
//	p.showPerson();
//}
////2����ģ����ģ������б������Ĭ�ϲ���
//void test02()
//{
//	Person<string> p("��˽�", 999);
//	p.showPerson();
//
//}
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}