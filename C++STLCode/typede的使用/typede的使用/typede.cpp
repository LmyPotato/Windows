#include<iostream>
using namespace std;
#include<string>

int main()
{
	char *p1,p2;
	printf("p1的数据类型为 %s\n",typeid(p1).name());
	printf("p2的数据类型为 %s\n",typeid(p2).name());


	system("pause");
	return 0;
}