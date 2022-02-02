#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>
#include<list>


//list容器构造函数
void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	list<int>L1;

	for (int i = 0; i < 5; i++)
	{
		L1.push_back(i);
	}
	
	printList(L1);

	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);

	//n个elem
	list<int>L4(5, 1000);
	printList(L4);
}
int main()
{
	test01();




	system("pause");
	return 0;
}