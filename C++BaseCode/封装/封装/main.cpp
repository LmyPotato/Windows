//#include <iostream>
//#include <string>
//using namespace std;
//const double PI=3.14;
////��Բ���ܳ�
//class Circle
//{
//	//����Ȩ��
//public:
//
//	//����
//	int m_r;
//	//��Ϊ
//	double calculateZC()
//	{
//		return 2*PI*m_r;
//	}
//};
//
//class Student
//{
//public:
//	//����
//	string m_name;
//	int m_Id;
//	//��Ϊ
//	void showStudent()
//	{
//		cout<<"������"<<m_name<<" ѧ��"<<m_Id<<endl;
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
//	cout<<"Բ���ܳ�Ϊ��"<<cl.calculateZC()<<endl;
//
//	Student s1;
//	s1.setName("����");
//	s1.setId(1);
//	s1.showStudent();
//
//	Student s2;
//	s2.m_name="����";
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
//		m_Name="����";
//		m_Car="������";
//		m_Passworld=123456;
//	}
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.m_Name="����";
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
//	//��������
//	void setName(string name)
//	{
//		m_Name=name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ����
//	int getAge()
//	{
//		//m_Age=0;
//		return m_Age;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age<0||age>150)
//		{
//			m_Age=0;
//			cout<<"�����������"<<endl;
//			return;
//		}
//		m_Age=age;
//	}
//	//��������
//	void setLover(string lover)
//	{
//		m_Love=lover;
//	}
//
//private:
//	//����
//	string m_Name;
//	//����
//	int m_Age;
//	//����
//	string m_Love;
//
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//	p.setLover("�Ծ�");
//	p.setAge(18);
//
//	cout<<"���䣺"<<p.getAge()<<endl;
//	cout<<"����Ϊ��"<<p.getName()<<endl;
//	//cout<<"����Ϊ��"<<p.getAge()<<endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
////������������
//class Cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L=l;
//	}
//	//��ȡ��
//	int  getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W=w;
//	}
//	//��ȡ��
//	int  getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int h)
//	{
//		m_H=h;
//	}
//	//��ȡ��
//	int  getH()
//	{
//		return m_H;
//	}
//
//	//��ȡ���
//	int calculateS()
//	{
//		return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
//	}
//	//��ȡ���
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
//	//����
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
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
//	cout<<"c1�����Ϊ��"<<c1.calculateS()<<endl;
//	cout<<"c1�����Ϊ��"<<c1.calculateV()<<endl;
//	
//	Cube c2;
//	c2.setL(10);
//	c2.setH(10);
//	c2.setW(10);
//
//	bool ret=isSame(c1,c2);
//	if (ret)
//	{
//		cout<<"c1��c2����ȵ�"<<endl;
//	}
//	else
//	{
//		cout<<"c1��c2�ǲ���ȵ�"<<endl;
//	}
//	cout<<"---------------------"<<endl;
//	ret=c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout<<"c1��c2����ȵ�"<<endl;
//	}
//	else
//	{
//		cout<<"c1��c2�ǲ���ȵ�"<<endl;
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
//	//����x
//	void setX(int x)
//	{
//		m_X=x;
//	}
//	//��ȡX
//	int getX()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y=y;
//	}
//	//��ȡY
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

//���Բ��ϵ����
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

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c,Point &p)
{
	int distance=(c.getCneter().getX()-p.getY())*(c.getCneter().getX()-p.getY())+
		(c.getCneter().getY()-p.getY())*(c.getCneter().getY()-p.getY());

	int rDistance=c.getR()*c.getR();
	if (distance==rDistance)
	{
		cout<<"����Բ��"<<endl;
	}
	else if(distance>rDistance)
	{
		cout<<"����Բ��"<<endl;
	}
	else
	{
		cout<<"����Բ��"<<endl;
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



