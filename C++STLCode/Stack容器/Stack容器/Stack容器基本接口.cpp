#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>
#include<stack>


void test01()
{
	stack<int>s;
	for (int i = 0; i < 10; i++)
	{
		s.push(i);
	}

	//栈不为空查看栈顶，并且执行出栈
	while (!s.empty())
	{
		cout<< "栈顶元素：" << s.top() << endl;

		s.pop();
	}
	cout << "栈的大小：" << s.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}