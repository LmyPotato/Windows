//#include<iostream>
//#include <string>
//using namespace std;
//
////函数调用运算符重载
////仿函数
//
//class MyPrint
//{
//public:
//	void operator()(string text)
//	{
//		cout<<text<<endl;
//	}
//
//};
//
//class MyAdd
//{
//public:
//	int operator()(int num1,int num2)
//	{
//		return num1+num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int ret=myadd(100,100);
//	cout<<"ret="<<ret<<endl;
//
//	//匿名函数对象
//	cout<<MyAdd()(100,100)<<endl;
//}
//
//void test01()
//{
//	MyPrint myFunc;
//	//由于使用起来像函数调用称其为仿函数
//	myFunc("Hello World!");
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}