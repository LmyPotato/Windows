#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<deque> 

//deque容器排序
void PrintDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;

	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(350);

	PrintDeque(d1);
	//从小到大 升序
	sort(d1.begin(), d1.end());
	cout << "sort:" << endl;
	PrintDeque(d1);
}

int main()
{
	test01();

	system("pause");
	return 0;
}