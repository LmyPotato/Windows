//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
//
//list容器反转和排序
//
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
//void test01()
//{
//	
//	反转
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(40);
//	L1.push_back(50);
//	L1.push_back(30);
//
//	反转前
//	printList(L1);
//
//
//	反转后
//	L1.reverse();
//	printList(L1);
//
//}
//
//bool myCompare(int v1,int v2)
//{
//	降序 就让第一个数大于第一个数
//	return v1 > v2;
//}
//
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(40);
//	L1.push_back(50);
//	L1.push_back(30);
//
//	排序前
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	排序
//	L1.sort();
//	cout << "排序后:" << endl;
//	printList(L1);
//
//	L1.sort(myCompare);
//	cout << "排序后:" << endl;
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}