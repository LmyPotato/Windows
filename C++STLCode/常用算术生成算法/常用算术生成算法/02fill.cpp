#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

#include<numeric>

/*
1.accumulate	��������Ԫ���ۼ��ܺ�
2.fill			�����������Ԫ��
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