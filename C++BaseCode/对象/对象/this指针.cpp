//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ����Ǳ����ó�Ա���������Ķ���
//		this->age=age;
//	}
//
//	Person& PersonAddAge(Person &p)
//	{
//		this->age+=p.age;
//		//thisָ��p2ָ�룬��*p2ָ����p2����ı���
//		return *this;
//	}
//	int age;
//};
//
////1������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout<<"p1����Ϊ��"<<p1.age<<endl;
//}
////2���ض�����
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout<<"p2������Ϊ��"<<p2.age<<endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}