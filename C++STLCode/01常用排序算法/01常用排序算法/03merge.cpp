//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<functional>
//#include<ctime>
//
///*
//1.sort				对容器内元素进行排序
//2.random_shuffle	洗牌 指定范围内的元素随机调整次序
//3.merge				容器元素合并(元素有序)，并存储到另一容器(1)
//4.reverse			反转指定范围的元素
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
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
//		v2.push_back(i + 1);
//	}
//
//	vector<int>vTarget;
//
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(),myPrint);
//	cout << endl;
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