//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////常用查找算法 
///*
//1.find          查找元素
//2.find_if		按条件查找元素
//3.adjacent_find 查找相邻重复元素
//4.binary_search 二分查找法(1)
//5.count			统计元素个数
//6.count_if		按条件统计元素个数
//*/
//
//void Print(int value)
//{
//	cout << value << " ";
//}
//
//void tets01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), Print);
//	cout << endl;
//
//	bool ret=binary_search(v.begin(), v.end(), 9);
//
//	if (ret)
//	{
//		cout << "find successful" << endl;
//	}
//	else
//	{
//		cout << "not find" << endl;
//	}
//
//}
//
//int main()
//{
//	tets01();
//
//
//	system("pause");
//	return 0;
//}