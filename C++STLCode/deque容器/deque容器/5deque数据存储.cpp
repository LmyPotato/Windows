//#include<iostream>
//using namespace std;
//#include<string>
//#include<deque> 
//
////deque容器数据存储类似vector
//void PrintDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//} 
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	//[]访问
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//	//at访问
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i)<<" ";
//	}
//	cout << endl;
//
//	cout << "first:" << d1.front() << endl;
//	cout << "end:" << d1.back() << endl;
//	//PrintDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}