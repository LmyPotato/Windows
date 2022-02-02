//#include<iostream>
//using namespace std;
//#include<set>
//
//
////查找和统计
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
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	printSet(s);
//
//	set<int>::iterator pos=s.find(30);
//
//	if (pos != s.end())
//	{
//		cout << "找到元素 " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到：" << endl;
//	}
//}
//
//void test02()
//{
//	//统计
//	set<int>s;
//
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//
//	int num = s.count(30);//对于set而言count大于等于1
//	cout << "num= " << num << endl;
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