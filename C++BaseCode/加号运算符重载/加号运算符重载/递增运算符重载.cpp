//#include <iostream>
//using namespace std;
//
////重载递增运算符
//
////自定义整形变量
//class MyInteger
//{
//	friend ostream& operator<<(ostream &cout,MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num=0;
//	}
//	//重载前置++运算符
//	MyInteger& operator++()
//	{
//		//先++运算
//		m_Num++;
//		//在将自身返回
//		return *this;
//	}
//	//重载后置++运算符
//	//int代表站位参数用于区分前置和后置递增区分
//	MyInteger operator++(int)
//	{
//		//先 记录当时结果
//		MyInteger temp=*this;
//		//后 递增
//		m_Num++;
//		//最后记录返回结果
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////重载左移运算符
//ostream& operator<<(ostream &cout,MyInteger myint)
//{
//	cout<<myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout<<++(++myint)<<endl;
//	cout<<myint<<endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout<<myint++<<endl;
//	cout<<myint<<endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	//int a=0;
//
//	//cout<<++(++a)<<endl;
//	//cout<<a<<endl;
//
//	system("pause");
//	return 0;
//}