//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//
//	static void func()
//	{
//		m_A=100;
//		//m_B=200;//��̬��Ա�����Է��ʷǾ�̬��Ա
//		cout<<"static void func()�ĵ���"<<endl;
//	}
//
//	static int m_A;
//	int m_B;
//private:
//	static void func2()
//	{
//		cout<<"static void func2()�ĵ���"<<endl;
//	}
//};
//
//int Person::m_A=0;
//
//void test01()
//{
//	//�������
//	Person p;
//	p.func();
//	//��������
//	Person::func();
//
//	//Person::func2();//���ܷ���˽��
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}