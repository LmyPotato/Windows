//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout<<"构造函数的调用"<<endl;
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout<<"person的析构函数调用"<<endl;
//	}
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main()
//{
//	test01();
//	//Person p;
//
//
//
//
//	system("pause");
//	return 0;
//}


//
//#include <iostream>
//using namespace std;
////构造函数的分类以及调用
////分类
////有参数和无参数
////按照类型-普通和拷贝
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout<<"无参构造函数的调用"<<endl;
//	}
//	Person(int a)
//	{
//		age=a;
//		cout<<"有参构造函数的调用"<<endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		cout<<"拷贝构造函数"<<endl;
//		age=p.age;
//	}
//	//析构函数
//	~Person()
//	{
//		cout<<"person的析构函数调用"<<endl;
//	}
//
//	int age;
//};
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//
//	//cout<<"p2的年龄为:"<<p2.age<<endl;
//	//cout<<"p3的年龄为："<<p3.age<<endl;
//	//2.显示法
//	//Person p1;
//	//Person p2=Person(10);//有参构造
//	//Person p3=Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象 特点：当前行执行后，系统回收释放
//
//	//3.隐式转换法
//	Person p4=10;//相当于写了Person p4=Person(10)
//	Person p5=p4;//拷贝
//} 
//
//int main()
//{
//
//	test01();
//
//
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
// 
////拷贝构造函数调用时机
//
//class Person
//{
//public:
//	Person()
//	{
//		cout<<"Person默认构造函数"<<endl;
//	}
//
//	Person(int age)
//	{
//		cout<<"有参函数调用"<<endl;
//		m_Age=age;
//	}
//
//	Person(const Person &p)
//	{
//		cout<<"拷贝构造函数调用"<<endl;
//		m_Age=p.m_Age;
//	}
//	~Person()
//	{
//		cout<<"Person析构函数调用"<<endl;
//	}
//
//	int m_Age;
//};
//
//
////使用一个已经创建完毕的对象来初始化一个对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout<<"p2的年龄"<<p2.m_Age<<endl;
//}
////值传递方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p=doWork2();
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}