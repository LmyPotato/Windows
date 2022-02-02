//#include <iostream>
//#include <string>
//using namespace std;
////普通写法和多态技术实现计算器
//
//////普通
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
////	//创建计算器对象
////	Calculate c;
////	c.m_Num1=10;
////	c.m_Num2=10;
////
////	cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
////	cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
////	cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
////
////}
////利用多态实现计算器
////多态好处
////1、组织结构清晰
////2、可读性强
////3、对于前期和后期扩展以及维护性高
////实现计算器抽象类
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
////加法计算器类
//class AddCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1+m_Num2;
//	}
//};
////减法计算器类
//class SubCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1-m_Num2;
//	}
//};
////乘法计算器类
//class MulCalculate:public AbstractCalculate
//{
//public:
//	int getResult()
//	{
//		return m_Num1*m_Num2;
//	}
//};
//
////除法计算器
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
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//	
//	//加法运算
//	AbstractCalculate *abc=new AddCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//
//	cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//减法计算
//	abc=new SubCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//	cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//乘法运算
//	abc=new MulCalculate;
//	abc->m_Num1=10;
//	abc->m_Num2=10;
//	cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
//	delete abc;
//
//	//除法运算 
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