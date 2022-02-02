//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
//
///*
////有序序列
//1.set_intersection	两容器的交集
//2.set_union			并集
//3.set_difference	差集
//*/
//
//void myPrint(int val)
//{
//	//if (val!=0)
//		cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	vector<int>::iterator itEnd=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint);
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