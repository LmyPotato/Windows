//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
//
////list容器赋值和交换
//
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////赋值
//void test01()
//{
//	list<int>L1;
//
//	for (int i = 0; i < 5; i++)
//	{
//		L1.push_back(i);
//	}
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
//void test02()
//{
//	list<int>L1;
//
//	for (int i = 0; i < 5; i++)
//	{
//		L1.push_back(i);
//	}
//
//	list<int>L2;
//	L2.assign(5, 100);
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	swap(L1, L2);
//
//	cout << "交换后：" << endl;
//	printList(L1);
//	printList(L2);
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}