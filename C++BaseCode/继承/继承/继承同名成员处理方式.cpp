//#include<iostream>
//using namespace std;
//
////�̳�ͬ����Ա����ʽ
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A=100;
//	}
//	void func()
//	{
//		cout<<"Base-��Ա��������"<<endl;
//	}
//	void func(int a)
//	{
//		cout<<"Base(int a)-��Ա��������"<<endl;
//	}
//	int m_A;
//
//};
//
//class Son:public Base
//{
//public:
//
//	Son()
//	{
//		m_A=200;
//	}
//	void func()
//	{
//		cout<<"Son��Ա��������"<<endl;
//	}
//	int m_A;
//};
////ͬ����Ա���Դ���
//void test01()
//{
//	Son s;
//	cout<<"Son ��m_A="<<s.m_A<<endl;
//	cout<<"Base��m_A="<<s.Base::m_A<<endl;
//}
//
////ͬ����Ա��������
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ�����������ͬ����Ա����
//	//���ø����Ա����
//	s.Base::func();
//
//	//��������г��ֺ͸���ͬ����Ա�����������ͬ�����������ص�����������ͬ����Ա����
//	//�������ʵ������б����صĳ�Ա����Ҫ��������
//	s.Base::func(10);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	cout << "Hello" << endl;
//	system("pause");
//	return 0;
//}