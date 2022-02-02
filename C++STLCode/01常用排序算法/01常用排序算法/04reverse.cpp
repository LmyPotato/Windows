#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
#include<ctime>

/*
1.sort				��������Ԫ�ؽ�������
2.random_shuffle	ϴ�� ָ����Χ�ڵ�Ԫ�������������
3.merge				����Ԫ�غϲ�(Ԫ������)�����洢����һ����
4.reverse			��תָ����Χ��Ԫ��(1)
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