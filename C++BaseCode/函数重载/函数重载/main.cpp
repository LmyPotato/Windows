#include <iostream>

using namespace std;
//函数重载
//
void func()
{
	cout<<"func 的调用"<<endl;
}

void func(int a)
{
	cout<<"func(int a) 函数的调用！"<<endl;
}

void func(double a)
{
	cout<<"func(double a) 函数的调用！"<<endl;
}

int main()
{
	//func();
	//func(10);
	func();

	system("pause");
	return 0;
}