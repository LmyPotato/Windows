#include<string>
#include<iostream>
using namespace std;

//string ²åÈëºÍÉ¾³ı

void test01()
{
	string str = "hello";

	str.insert(1,"111");
	cout << "str=" << str << endl;

	str.erase(1, 3);
	cout << "str=" << str << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
