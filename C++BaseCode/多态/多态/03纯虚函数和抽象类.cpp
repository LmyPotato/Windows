//#include<iostream>
//using namespace std;
//
////纯虚函数和抽象类
//class Base
//{
//public:
//	//这是纯虚函数
//	//只要有一个纯虚函数，这个类称为抽象类
//	//抽象类特点
//	//1、无法实例化对象
//	//2、抽象类的子类 必须重写父类中的纯虚函数
//	virtual void func()=0;
//
//};
//
//class Son:public Base
//{
//public:
//	//virtual可以写也可以不写
//	virtual void func()
//	{
//		cout<<"func函数的调用"<<endl;
//
//	}
//};
//
//void test01()
//{
//	//Base b;//抽象类无法实例化对象
//	//new Base;//抽象类无法实例化对象
//	Son s;//子类必须重写父类的纯虚函数
//	Base *base=new Son;
//	base->func();
//
//	//Son s;
//	//s.func();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}