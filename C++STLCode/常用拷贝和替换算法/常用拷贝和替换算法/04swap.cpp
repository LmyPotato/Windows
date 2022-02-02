#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

/*
copy		������ָ����Χ��Ԫ�ؿ�����һ������
replace		��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
replace_if	������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
swap		��������������Ԫ��(1)
*/

void myPrint(int val)
{
	cout << val << " ";
}

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "�滻ǰV1��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	cout << "�滻ǰV2��" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;

	swap(v1, v2);

	cout << "----------------------------" << endl;
	cout << "�滻��V1��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	cout << "�滻��V2��" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}