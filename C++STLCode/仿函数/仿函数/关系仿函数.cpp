//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<functional>
//
////关系仿函数
////greater 大于
//class MyCompare
//{
//public:
//	bool operator ()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//
//
////大于 greater
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}