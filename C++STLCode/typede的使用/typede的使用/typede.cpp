#include<iostream>
using namespace std;
#include<string>

int main()
{
	char *p1,p2;
	printf("p1����������Ϊ %s\n",typeid(p1).name());
	printf("p2����������Ϊ %s\n",typeid(p2).name());


	system("pause");
	return 0;
}