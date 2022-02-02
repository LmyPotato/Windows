//#include <iostream>
//#include <string>
//using namespace std;
//const double PI=3.14;
////求圆的周长
//class Circle
//{
//	//访问权限
//public:
//
//	//属性
//	int m_r;
//	//行为
//	double calculateZC()
//	{
//		return 2*PI*m_r;
//	}
//};
//
//class Student
//{
//public:
//	//属性
//	string m_name;
//	int m_Id;
//	//行为
//	void showStudent()
//	{
//		cout<<"姓名："<<m_name<<" 学号"<<m_Id<<endl;
//	}
//
//	void setName(string name)
//	{
//		m_name=name;
//	}
//
//	void setId(int id)
//	{
//		m_Id=id;
//	}
//};
//
//
//int main()
//{
//	Circle cl;
//	cl.m_r=10;
//	cout<<"圆的周长为："<<cl.calculateZC()<<endl;
//
//	Student s1;
//	s1.setName("张三");
//	s1.setId(1);
//	s1.showStudent();
//
//	Student s2;
//	s2.m_name="李四";
//	s2.m_Id=2;
//	s2.showStudent();
//	system("pause");
//	return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Passworld;
//
//public:
//	void func()
//	{
//		m_Name="张三";
//		m_Car="拖拉机";
//		m_Passworld=123456;
//	}
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.m_Name="李四";
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name=name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄
//	int getAge()
//	{
//		//m_Age=0;
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age<0||age>150)
//		{
//			m_Age=0;
//			cout<<"你个老妖精！"<<endl;
//			return;
//		}
//		m_Age=age;
//	}
//	//设置情人
//	void setLover(string lover)
//	{
//		m_Love=lover;
//	}
//
//private:
//	//姓名
//	string m_Name;
//	//年龄
//	int m_Age;
//	//情人
//	string m_Love;
//
//};
//
//int main()
//{
//	Person p;
//	p.setName("李四");
//	p.setLover("苍井");
//	p.setAge(18);
//
//	cout<<"年龄："<<p.getAge()<<endl;
//	cout<<"姓名为："<<p.getName()<<endl;
//	//cout<<"年龄为："<<p.getAge()<<endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
////设置立方体类
//class Cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L=l;
//	}
//	//获取长
//	int  getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W=w;
//	}
//	//获取宽
//	int  getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int h)
//	{
//		m_H=h;
//	}
//	//获取高
//	int  getH()
//	{
//		return m_H;
//	}
//
//	//获取面积
//	int calculateS()
//	{
//		return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
//	}
//	//获取体积
//	int calculateV()
//	{
//		return m_L*m_W*m_H;
//	}
//	//
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L==c.getL()&&m_H==c.getH()&&m_W==c.getW())
//		{
//			return true;
//		}
//		return false;
//	}
//
//	//属性
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
//bool isSame(Cube &c1,Cube &c2)
//{
//	if (c1.getL()==c2.getL()&&c1.getW()==c2.getW()&&c1.getH()==c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//
//	cout<<"c1的面积为："<<c1.calculateS()<<endl;
//	cout<<"c1的体积为："<<c1.calculateV()<<endl;
//	
//	Cube c2;
//	c2.setL(10);
//	c2.setH(10);
//	c2.setW(10);
//
//	bool ret=isSame(c1,c2);
//	if (ret)
//	{
//		cout<<"c1和c2是相等的"<<endl;
//	}
//	else
//	{
//		cout<<"c1和c2是不相等的"<<endl;
//	}
//	cout<<"---------------------"<<endl;
//	ret=c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout<<"c1和c2是相等的"<<endl;
//	}
//	else
//	{
//		cout<<"c1和c2是不相等的"<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include "circle.h"
#include "point.h"

using namespace std;
//class Point
//{
//public:
//	//设置x
//	void setX(int x)
//	{
//		m_X=x;
//	}
//	//获取X
//	int getX()
//	{
//		return m_X;
//	}
//	//设置y
//	void setY(int y)
//	{
//		m_Y=y;
//	}
//	//获取Y
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

//点和圆关系案例
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R=r;
//	}
//
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)
//	{
//		m_Center=center;
//	}
//
//	Point getCneter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};

//判断点和圆的关系
void isInCircle(Circle &c,Point &p)
{
	int distance=(c.getCneter().getX()-p.getY())*(c.getCneter().getX()-p.getY())+
		(c.getCneter().getY()-p.getY())*(c.getCneter().getY()-p.getY());

	int rDistance=c.getR()*c.getR();
	if (distance==rDistance)
	{
		cout<<"点在圆上"<<endl;
	}
	else if(distance>rDistance)
	{
		cout<<"点在圆外"<<endl;
	}
	else
	{
		cout<<"点在圆内"<<endl;
	}
}

int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);
	isInCircle(c,p);

	system("pause");
	return 0;
}



