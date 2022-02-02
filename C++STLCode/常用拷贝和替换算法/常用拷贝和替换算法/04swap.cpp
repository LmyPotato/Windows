#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

/*
copy		容器内指定范围的元素拷贝到一容器中
replace		将容器内指定范围的旧元素修改为新元素
replace_if	容器内指定范围满足条件的元素替换为新元素
swap		互换两个容器的元素(1)
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

	cout << "替换前V1：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	cout << "替换前V2：" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;

	swap(v1, v2);

	cout << "----------------------------" << endl;
	cout << "替换后V1：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	cout << "替换后V2：" << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}