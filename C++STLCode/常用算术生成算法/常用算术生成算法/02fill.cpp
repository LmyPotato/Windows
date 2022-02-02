#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

#include<numeric>

/*
1.accumulate	计算容器元素累计总和
2.fill			向容器中添加元素
*/
void myPrint(int val)
{
	cout << val<<" ";
}

void test01()
{

	vector<int>v;

	v.resize(10);

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}