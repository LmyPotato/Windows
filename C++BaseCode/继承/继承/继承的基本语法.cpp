//#include<iostream>
//using namespace std;
//
////��ͨʵ��ҳ��
//
//
//
//////Javaҳ��
////class Java
////{
////public:
////	void header()
////	{
////		cout<<"��ҳ�������Ρ���½��ע�ᡭ��(����ͷ��)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java��Python��C++����"<<endl;
////	}
////	void content()
////	{
////		cout<<"Javaѧ������"<<endl;
////	}
////};
////
//////Pythonҳ��
////class Python
////{
////public:
////	void header()
////	{
////		cout<<"��ҳ�������Ρ���½��ע�ᡭ��(����ͷ��)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java��Python��C++����"<<endl;
////	}
////	void content()
////	{
////		cout<<"Pythonѧ������"<<endl;
////	}
////};
////
//////Pytjonҳ��
////class CPP
////{
////public:
////	void header()
////	{
////		cout<<"��ҳ�������Ρ���½��ע�ᡭ��(����ͷ��)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java��Python��C++����"<<endl;
////	}
////	void content()
////	{
////		cout<<"C++ѧ������"<<endl;
////	}
////};
//
////�̳�ʵ��ҳ��
//class BasePage
//{
//public:
//	void header()
//	{
//		cout<<"��ҳ�������Ρ���½��ע�ᡭ��(����ͷ��)"<<endl;
//	}
//	void footer()
//	{
//		cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
//	}
//	void left()
//	{
//		cout<<"Java��Python��C++����"<<endl;
//	}
//};
////�̳кô��������ظ�����
////�﷨�� class ���ࣺ�̳з�ʽ ����
////���� Ҳ��Ϊ ������
////���� Ҳ��Ϊ ����
////Javaҳ��
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"JAVA ѧ������"<<endl;
//	}
//};
//
////Pythonҳ��
//class Python:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"Python ѧ������"<<endl;
//	}
//};
////C++ҳ��
//class CPP:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"C++ѧ������"<<endl;
//	}
//};
//
//void test01()
//{
//	Java ja;
//	cout<<"Java��������ҳ������"<<endl;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout<<"----------------------"<<endl;
//	Python py;
//	cout<<"Python��������ҳ������"<<endl;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout<<"----------------------"<<endl;
//	CPP cpp;
//	cout<<"C++��������ҳ������"<<endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}