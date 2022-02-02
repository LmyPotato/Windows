//#include<iostream>
//
//using namespace std;
////1、函数模板和普通函数都可以实现调用，优先调用普通函数
////2、通过空模板参数列表强制调用 函数模板
////3、函数模板可以发生重载
////4、函数模板可以产生更好的匹配 优先调用函数模板
//
////普通函数模板
//void myPrint(int a, int b)
//{
//	cout << "这是调用普通函数模板" << endl;
//}
////模板函数
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "这是调用函数模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b,T c)
//{
//	cout << "这是调用重载函数模板" << endl;
//}
//void test01()
//{
//	int a = 10, b = 20;
//	//myPrint(a, b);
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//	//myPrint<>(a, b,100);
//
//	//函数模板可以产生更好的模板，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint<>(c1, c2);
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