//#include <iostream>
//#include <string>
//using namespace std;
////��ͨд���Ͷ�̬����ʵ�ּ�����
//
//////��ͨ
////class Calculate
////{
////public:
////	
////	int getResult(string oper)
////	{
////		if (oper=="+")
////		{
////			return m_Num1+m_Num2;
////		}
////		else if (oper=="-")
////		{
////			return m_Num1-m_Num2;
////		}
////		else if (oper=="*")
////		{
////			return m_Num1*m_Num2;
////		}
////	}
////
////	int m_Num1;
////	int m_Num2;
////};
////
////void test01()
////{
////	//��������������
////	Calculate c;
////	c.m_Num1=10;
////	c.m_Num2=10;
////
////	cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
////	cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
////	cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
////
////}
////���ö�̬ʵ�ּ�����
////��̬�ô�
////1����֯�ṹ����
////2���ɶ���ǿ
////3������ǰ�ںͺ�����չ�Լ�ά���Ը�
////ʵ�ּ�����������
//class AbstractCalculate
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���������
//class AddCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1+m_Num2;
//	}
//};
////������������
//class SubCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1-m_Num2;
//	}
//};
////�˷���������
//class MulCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1*m_Num2;
//	}
//};
//
////����������
//class Divide :public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//	
//	//�ӷ�����
//	AbstractCalculate *abc=new AddCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//
//	cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//��������
//	abc=new SubCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//	cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//�˷�����
//	abc=new MulCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//	cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//�������� 
//	abc = new Divide;
//	abc->m_Num1 = 200;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << "/" << abc->m_Num2 << "=" << abc->getResult() << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}