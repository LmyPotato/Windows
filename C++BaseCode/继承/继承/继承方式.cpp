//#include<iostream>
//using namespace std;
//
////�̳з�ʽ
//
//
//
//
////�����̳�
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son1:public Base1
//{
//public:
//
//	void func()
//	{
//		m_A=10;//���๫��������Ҳ�ǹ���
//		m_B=10;//���ౣ��������Ҳ�Ǳ���
//		//m_C=10;//����˽�е�����Ҳ��˽��
//	}
//
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A=100;
//	//s1.m_B=100;//����son1��m_B���ʲ���
//}
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//
//class  Son2:protected Base2
//{
//public:
//	void func()
//	{
//		m_A=100;//���๫����Ա �������б�Ϊ����Ȩ��
//		m_B=100;//���ౣ����Ա �������б�Ϊ����Ȩ��
//		//m_C=100;������˽�г�Ա �����з��ʲ���
//	}
//
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A=100;//��Son2��m_A��Ϊ����Ȩ��
//}
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3:private Base3
//{
//	void func()//���๫���ͱ��������඼��Ϊ˽��
//	{
//		m_A=100;
//		m_B=100;
//		//m_C=100;
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A=1000;//����Son3�б�Ϊ˽�г�Ա��������ʲ���
//}
//class GrandSon3:public Son3
//{
//	void func()
//	{
//		//m_A=100;//����Son3�� M_A��Ϊ˽�У���������ʲ���
//		//m_B=100;
//	}
//};
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}