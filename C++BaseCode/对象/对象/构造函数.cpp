//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout<<"���캯���ĵ���"<<endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout<<"person��������������"<<endl;
//	}
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main()
//{
//	test01();
//	//Person p;
//
//
//
//
//	system("pause");
//	return 0;
//}


//
//#include <iostream>
//using namespace std;
////���캯���ķ����Լ�����
////����
////�в������޲���
////��������-��ͨ�Ϳ���
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout<<"�޲ι��캯���ĵ���"<<endl;
//	}
//	Person(int a)
//	{
//		age=a;
//		cout<<"�вι��캯���ĵ���"<<endl;
//	}
//	//�������캯��
//	Person(const Person &p)
//	{
//		cout<<"�������캯��"<<endl;
//		age=p.age;
//	}
//	//��������
//	~Person()
//	{
//		cout<<"person��������������"<<endl;
//	}
//
//	int age;
//};
////����
//void test01()
//{
//	//1.���ŷ�
//	//Person p1;//Ĭ��
//	//Person p2(10);//�вι��캯��
//	//Person p3(p2);//�������캯��
//
//	//cout<<"p2������Ϊ:"<<p2.age<<endl;
//	//cout<<"p3������Ϊ��"<<p3.age<<endl;
//	//2.��ʾ��
//	//Person p1;
//	//Person p2=Person(10);//�вι���
//	//Person p3=Person(p2);//��������
//
//	//Person(10);//�������� �ص㣺��ǰ��ִ�к�ϵͳ�����ͷ�
//
//	//3.��ʽת����
//	Person p4=10;//�൱��д��Person p4=Person(10)
//	Person p5=p4;//����
//} 
//
//int main()
//{
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
// 
////�������캯������ʱ��
//
//class Person
//{
//public:
//	Person()
//	{
//		cout<<"PersonĬ�Ϲ��캯��"<<endl;
//	}
//
//	Person(int age)
//	{
//		cout<<"�вκ�������"<<endl;
//		m_Age=age;
//	}
//
//	Person(const Person &p)
//	{
//		cout<<"�������캯������"<<endl;
//		m_Age=p.m_Age;
//	}
//	~Person()
//	{
//		cout<<"Person������������"<<endl;
//	}
//
//	int m_Age;
//};
//
//
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout<<"p2������"<<p2.m_Age<<endl;
//}
////ֵ���ݷ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p=doWork2();
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}