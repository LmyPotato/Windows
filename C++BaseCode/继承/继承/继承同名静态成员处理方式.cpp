//#include<iostream>
//using namespace std;
//
////�̳�ͬ����̬��Ա����ʽ
//class Base
//{
//public:
//	static void func()
//	{
//		cout<<"Base func"<<endl;
//	}
//	static int m_A;
//};
//
//int Base::m_A=100;
//
//class Son:public Base
//{
//public:
//
//	static void func()
//	{
//		cout<<"Son func"<<endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A=200;
//
////ͬ����̬��Ա����
//
//void test01()
//{
//	//ͨ���������
//	Son s;
//	cout<<"Son �� m_A="<<s.m_A<<endl;
//	cout<<"Base�� m_A="<<s.Base::m_A<<endl;
//
//	//ͨ����������
//	cout<<"ͨ���������ʣ�"<<endl;
//	cout<<"Son m_A="<<Son::m_A<<endl;
//	//��һ����������ͨ������ �ڶ�������������ʸ�����������
//	cout<<"Base m_A="<<Son::Base::m_A<<endl;
//
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//ͨ���������
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//ͨ����������
//	cout<<"ͨ����������"<<endl;
//	Son::func();
//	Son::Base::func();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}