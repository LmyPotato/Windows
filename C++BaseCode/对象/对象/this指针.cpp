//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向的是被调用成员函数所属的对象
//		this->age=age;
//	}
//
//	Person& PersonAddAge(Person &p)
//	{
//		this->age+=p.age;
//		//this指向p2指针，而*p2指向是p2对象的本身
//		return *this;
//	}
//	int age;
//};
//
////1解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout<<"p1年龄为："<<p1.age<<endl;
//}
////2返回对象本身
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout<<"p2的年龄为："<<p2.age<<endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}