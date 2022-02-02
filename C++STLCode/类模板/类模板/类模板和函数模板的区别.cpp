//#include<iostream>
//#include<string>
//using namespace std;
////类模板和函数模板的区别
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
//	//1、类模板没有自动推导使用方式
//	//Person p("wukong", 1000);//错误 无法使用自动类型推导
//	Person<string, int>p("孙悟空", 1000);
//	p.showPerson();
//}
////2、类模板在模板参数列表可以有默认参数
//void test02()
//{
//	Person<string> p("猪八戒", 999);
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