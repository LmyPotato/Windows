//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////常用遍历算法 for_each
//
//void Print(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int value)
//	{
//		cout << value << " ";
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
//	for_each(v.begin(), v.end(), Print);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//}
//
//int main()
//{
//	tets01();
//
//	system("pause");
//	return 0;
//}