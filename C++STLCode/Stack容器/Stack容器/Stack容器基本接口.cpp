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

	//ջ��Ϊ�ղ鿴ջ��������ִ�г�ջ
	while (!s.empty())
	{
		cout<< "ջ��Ԫ�أ�" << s.top() << endl;

		s.pop();
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}