#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
#include<ctime>

/*
1.sort				对容器内元素进行排序
2.random_shuffle	洗牌 指定范围内的元素随机调整次序
3.merge				容器元素合并(元素有序)，并存储到另一容器
4.reverse			反转指定范围的元素(1)
*/

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}