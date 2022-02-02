//#include<iostream>
//using namespace std;
//#include<string>
//
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string str)
//	{
//		cout << str << endl;
//		count++;
//	}
//	int count;
//};
//
//void doPrint(MyPrint &mp, string s)
//{
//	mp(s);
//}
//
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 20) << endl;
//}
//
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("Hello World!");
//	myPrint("Hello World!");
//	myPrint("Hello World!");
//	myPrint("Hello World!");
//
//	cout << "myPrint调用次数：" << myPrint.count << endl;
//
//	doPrint(myPrint, "Hello C++");
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}