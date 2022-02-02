#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>


/*
//有序序列
1.set_intersection	两容器的交集
2.set_union			并集
3.set_difference	差集
v1 0 1 2 3 4 5 6 7 8 9
v2 5 6 7 8 9 10 11 12 13 14 
v1和v2的差值：0 1 2 3 4
v2和v1的差值：10 11 12 13 14
*/

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{

	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;

	vTarget.resize(max(v1.size(),v2.size()));
	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}