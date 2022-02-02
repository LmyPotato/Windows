//#include <iostream>
//#include <string>
//using namespace std;
//
//class Building;
//
////成员函数做友元
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//访问Building中的私有成员
//	void visit2();//不可以访问私有成员
//
//	Building *building;
//};
//
//class Building
//{
//	//GoodGay类下可以访问私有成员函数
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom="客厅";
//	m_BedRoom="卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建建筑物对象
//	building =new Building;
//}
//
//void GoodGay::visit()
//{
//	cout<<"visit函数正在访问"<<building->m_SittingRoom<<endl;
//	cout<<"visit函数正在访问"<<building->m_BedRoom<<endl;
//}
//
//void GoodGay::visit2()
//{
//	cout<<"visit2函数正在访问"<<building->m_SittingRoom<<endl;
//	//cout<<"visit2好基友正在访问"<<building->m_BedRoom<<endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}