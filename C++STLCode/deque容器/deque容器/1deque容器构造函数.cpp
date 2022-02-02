//#include<iostream>
//using namespace std;
//#include<string>
//#include<deque>
//
////deque构造函数
//void PrintDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;不可以修改
//		cout << *it<<" ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	PrintDeque(d1);
//
//	deque<int>d2(d1.begin(),d1.end());
//	PrintDeque(d2);
//
//	deque<int>d3(10, 100);
//	PrintDeque(d3);
//
//	deque<int>d4(d3);
//	PrintDeque(d4);
//	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}