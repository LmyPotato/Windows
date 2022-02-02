//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////常用遍历算法 for_each
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(int value)
//	{
//		cout << value+100 << " ";
//	}
//};
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
//	vector<int>vTraget;
//	vTraget.resize(v.size());
//
//	transform(v.begin(), v.end(), vTraget.begin(), Transform());
//
//	for_each(vTraget.begin(), vTraget.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	tets01();
//
//	system("pause");
//	return 0;
//}