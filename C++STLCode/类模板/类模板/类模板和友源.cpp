//#include<iostream>
//#include<string>
//
//using namespace std;
////ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
//
////��ǰ�ñ�����֪��
//template<class T1, class T2>
//class Person;
//
////ȫ�ֺ�������ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ��name:" << p.m_Name << " age:" << p.m_Age << endl;
//}
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ���
//	friend void printPerson(Person<T1,T2> p)
//	{
//		cout << "name:" << p.m_Name << " age:" << p.m_Age << endl;
//	}
//	//��һ���յĲ���ģ���б�
//	//���ȫ�ֺ��� ������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
////ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("Tom", 20);
//	printPerson(p);
//}
//
//
//void test02()
//{
//	Person<string, int>p("Jerry", 20);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}