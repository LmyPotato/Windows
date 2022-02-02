#include <iostream>
using namespace std;

//菱形继承
//动物类
class Animal1
{
public:
	int m_Age;

};
//利用虚继承 解决菱形继承问题
//继承前 加上关键字 virtual变为虚继承
//羊类
class Sheep:virtual public Animal1
{

};
//驼类
class Tuo:virtual public Animal1
{

};
//羊驼类
class SheepTuo:public Sheep,public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age=100;
	st.Tuo::m_Age=28;
	//当菱形继承，两个父类拥有相同数据，需要加作用域
	cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
	cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
	cout<<"st.m_Age"<<st.m_Age<<endl;
	//这份数据只有一份就可以了


}

int main()
{
	test01();

	system("pause");
	return 0;
}