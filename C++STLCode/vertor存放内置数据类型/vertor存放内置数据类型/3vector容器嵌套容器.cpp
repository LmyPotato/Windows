#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include<algorithm>//��׼�㷨ͷ�ļ�

//vertor����Ƕ������

void test01()
{
	vector<vector<int>> v;

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 1);
		v3.push_back(i + 1);
		v4.push_back(i + 1);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit<<" ";
		}
		cout <<endl;
	}	
}

int main()
{
	test01();

	system("pause");
	return 0;
}