#include<string>
#include<iostream>
using namespace std;

//string �Ӵ�

void test01()
{
	string str = "abcdefg";
	string subStr = str.substr(2,2);

	cout << "subStr="<<subStr << endl;
}
//ʵ�ò���
void test02()
{
	string email = "limingyang@sina.com";

	int pos=email.find("@");
	cout << "pos=" << pos << endl;

	string userName = email.substr(0,pos);
	cout << "userName=" << userName << endl;
}

int main()
{
	test01();
	//test02();

	system("pause");
	return 0;
}
