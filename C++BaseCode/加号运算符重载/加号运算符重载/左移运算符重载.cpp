#include <iostream>
using namespace std;

//左移运算符重载

class Person
{

	friend ostream& operator<<(ostream &cout,Person p);
public:Person(int a,int b)
	   {
		   m_A=a;
		   m_B=b;
	   }
	//利用成员函数重载左移运算符
	//不会利用成员函数重载
	//void  operator<<(cout)
	//{

	//}
private:
	int m_A;
	int m_B;
};
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream &cout,Person p)//简化operator(cout,p)简化cout<<p
{
	cout<<"m_A="<<p.m_A<<" m_B="<<p.m_B;
	return cout;
}
void test01()
{
	Person p(30,03);

	cout<<p<<endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}