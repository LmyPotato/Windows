//#include<iostream>
//#include <string>
//using namespace std;
//
////�����������������
////�º���
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
//	//������������
//	cout<<MyAdd()(100,100)<<endl;
//}
//
//void test01()
//{
//	MyPrint myFunc;
//	//����ʹ�������������ó���Ϊ�º���
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