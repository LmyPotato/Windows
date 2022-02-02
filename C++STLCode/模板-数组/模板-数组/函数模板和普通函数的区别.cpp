//#include<iostream>
//
//using namespace std;
//
////普通函数模板
//int myAdd01(int a,int b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << myAdd01(a, b) << endl;
//}
//
////模板函数
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//自动推导
//	//cout << myAdd02(a, c)<<endl;
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test02();
//	//test01();
//
//
//	system("pause");
//	return 0;
//}