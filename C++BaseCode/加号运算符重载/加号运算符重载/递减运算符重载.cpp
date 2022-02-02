//#include <iostream>
//using namespace std;
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream& cout,MyInterger myint);
//public:
//	MyInterger()
//	{
//		m_A=0;
//	}
//
//	MyInterger& operator--()
//	{
//		m_A--;
//		return *this;
//	}
//
//	MyInterger operator--(int)
//	{
//		MyInterger temp=*this;
//		m_A--;
//		return temp;
//	}
//
//private:
//	int m_A;
//};
//
//
//ostream& operator<<(ostream& cout,MyInterger myint)
//{
//	cout<<myint.m_A;
//	return cout;
//}
//void test01()
//{
//
//	MyInterger myint;
//
//	cout<<myint--<<endl;
//	cout<<myint<<endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}