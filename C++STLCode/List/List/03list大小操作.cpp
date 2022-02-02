//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
//
////list容器大小操作
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
//
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
//	if (L1.empty())
//	{
//		cout << "L1 is empty" << endl;
//	}
//	else
//	{
//		cout << "size: " << L1.size() << endl;
//	}
//	
//	//重新指定大小
//	//L1.resize(10);
//	//printList(L1);
//
//	L1.resize(10,1000);
//	printList(L1);
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