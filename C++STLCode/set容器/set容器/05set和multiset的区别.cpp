//#include<iostream>
//using namespace std;
//#include<set>
//
//
////set和multiset的区别
//
//
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool>ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int>m;//允许插入重复值
//
//	m.insert(10);
//	m.insert(10);
//
//	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}