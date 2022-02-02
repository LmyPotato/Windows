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
//3.adjacent_find 查找相邻重复元素(1)
//4.binary_search 二分查找法
//5.count			统计元素个数
//6.count_if		按条件统计元素个数
//*/
//
//void Print(int value)
//{
//	cout << value<<" ";
//}
//
//void tets01()
//{
//	vector<int>v;
//
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());
//
//	if (pos == v.end())
//	{
//		cout << "not find" << endl;
//	}
//	else
//	{
//		cout << "find successful" << endl;
//		cout << (*pos) << endl;
//		v.pop_back();
//	}
//
//	for_each(v.begin(), v.end(), Print);
//	cout << endl;
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