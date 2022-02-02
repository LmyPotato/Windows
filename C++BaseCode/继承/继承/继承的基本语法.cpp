//#include<iostream>
//using namespace std;
//
////普通实现页面
//
//
//
//////Java页面
////class Java
////{
////public:
////	void header()
////	{
////		cout<<"首页、公开课、登陆、注册……(公共头部)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java、Python、C++……"<<endl;
////	}
////	void content()
////	{
////		cout<<"Java学科视屏"<<endl;
////	}
////};
////
//////Python页面
////class Python
////{
////public:
////	void header()
////	{
////		cout<<"首页、公开课、登陆、注册……(公共头部)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java、Python、C++……"<<endl;
////	}
////	void content()
////	{
////		cout<<"Python学科视屏"<<endl;
////	}
////};
////
//////Pytjon页面
////class CPP
////{
////public:
////	void header()
////	{
////		cout<<"首页、公开课、登陆、注册……(公共头部)"<<endl;
////	}
////	void footer()
////	{
////		cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
////	}
////	void left()
////	{
////		cout<<"Java、Python、C++……"<<endl;
////	}
////	void content()
////	{
////		cout<<"C++学科视屏"<<endl;
////	}
////};
//
////继承实现页面
//class BasePage
//{
//public:
//	void header()
//	{
//		cout<<"首页、公开课、登陆、注册……(公共头部)"<<endl;
//	}
//	void footer()
//	{
//		cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
//	}
//	void left()
//	{
//		cout<<"Java、Python、C++……"<<endl;
//	}
//};
////继承好处：减少重复代码
////语法： class 子类：继承方式 父类
////子类 也称为 派生类
////父类 也称为 基类
////Java页面
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"JAVA 学科视屏"<<endl;
//	}
//};
//
////Python页面
//class Python:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"Python 学科视屏"<<endl;
//	}
//};
////C++页面
//class CPP:public BasePage
//{
//public:
//	void content()
//	{
//		cout<<"C++学科视屏"<<endl;
//	}
//};
//
//void test01()
//{
//	Java ja;
//	cout<<"Java下载视屏页面如下"<<endl;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout<<"----------------------"<<endl;
//	Python py;
//	cout<<"Python下载视屏页面如下"<<endl;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout<<"----------------------"<<endl;
//	CPP cpp;
//	cout<<"C++下载视屏页面如下"<<endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
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