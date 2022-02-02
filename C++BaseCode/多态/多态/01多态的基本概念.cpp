//#include <iostream>
//using namespace std;
//
////多态
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout<<"动物在说话"<<endl;
//	}
//};
//
////猫类
//class Cat:public Animal
//{
//public:
//	 void speak()
//	{
//		cout<<"小猫在说话"<<endl;
//	}
//};
////狗类
//class Dog:public Animal
//{
//public:
//	void speak()
//	{
//		cout<<"小狗在说话"<<endl;
//	}
//};
////动态多态满足条件
////有继承关系
////子类要重写父类的虚函数
//
////动态多态使用
////父类的指针或者引用 指向子类对象
//
////地址早绑定 在编译阶段确定函数地址
////如果想执行猫说话需要地址晚绑定
////方式一
//void dospeak(Animal &animal)
//{
//	animal.speak();
//}
////方式二
////void dospeak(Animal *a)
////{
////	a->speak();
////}
//
//void test01()
//{
//	Cat cat;
//	dospeak(cat);
//
//	Dog dog;
//	dospeak(dog);
//}
//
//void test02()
//{
//	cout<<"sizeof Animal="<<sizeof(Animal)<<endl;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}