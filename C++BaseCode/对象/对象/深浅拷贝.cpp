#include <iostream>
using namespace std;
//深浅拷贝
//构造函数的调用规则
class Person
{
public:
	Person()
	{
		cout<<"Person的默认构造函数"<<endl;
	}

	Person (int age,int height)
	{
		m_Age=age;
		m_Height= new int(height);
		cout<<"person的有参构造函数"<<endl;
	}

	Person(const Person &p)
	{
		m_Age=p.m_Age;
		//m_Height=p.m_Height;//编译器默认实现
		m_Height= new int(*p.m_Height);
		cout<<"Person的拷贝函数"<<endl;
	}

	~Person()
	{
		//析构代码，将开辟堆区释放掉
		if (m_Height!=NULL)
		{
			delete m_Height;
			m_Height=NULL;
		}
		cout<<"Person的默认析构函数"<<endl;
	}

	int m_Age;//年龄
	int *m_Height;
};

void test01()
{
	Person p1(18,160);
	cout<<"p1的年龄为："<<p1.m_Age<<" p1的身高为："<<*p1.m_Height<<endl;

	Person p2(p1);
	cout<<"p2的年龄为："<<p2.m_Age<<" p2的身高为："<<*p2.m_Height<<endl;
}

int main()
{
	test01();
	cout << "Hello" << endl;

	system("pause");
	return 0;
}