//#include<iostream>
//using namespace std;
//#include<string>
//#include<deque> 
//
////deque容器大小
//void PrintDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;不可以修改
//		cout << *it << " ";
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
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "不为空" << endl;
//		cout << "size=" << d1.size() << endl;
//		//deque没有容量概念
//	}
//	//d1.resize(15);
//	//PrintDeque(d1);
//	//d1.resize(15,1);
//	//PrintDeque(d1);
//	d1.resize(5);
//	PrintDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}