#include <iostream>

using namespace std;
//��������
//
void func()
{
	cout<<"func �ĵ���"<<endl;
}

void func(int a)
{
	cout<<"func(int a) �����ĵ��ã�"<<endl;
}

void func(double a)
{
	cout<<"func(double a) �����ĵ��ã�"<<endl;
}

int main()
{
	//func();
	//func(10);
	func();

	system("pause");
	return 0;
}