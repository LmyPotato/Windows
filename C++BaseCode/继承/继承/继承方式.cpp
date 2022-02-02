//#include<iostream>
//using namespace std;
//
////继承方式
//
//
//
//
////公共继承
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
//		m_A=10;//父类公共到子类也是公共
//		m_B=10;//父类保护到子类也是保护
//		//m_C=10;//父类私有到子类也是私有
//	}
//
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A=100;
//	//s1.m_B=100;//到了son1中m_B访问不到
//}
////保护继承
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
//		m_A=100;//父类公共成员 到子类中变为保护权限
//		m_B=100;//父类保护成员 到子类中变为保护权限
//		//m_C=100;父类中私有成员 子类中访问不了
//	}
//
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A=100;//在Son2中m_A变为保护权限
//}
////私有继承
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
//	void func()//父类公共和保护到子类都变为私有
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
//	//s3.m_A=1000;//到了Son3中变为私有成员。类外访问不到
//}
//class GrandSon3:public Son3
//{
//	void func()
//	{
//		//m_A=100;//到了Son3中 M_A变为私有，孙子类访问不到
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