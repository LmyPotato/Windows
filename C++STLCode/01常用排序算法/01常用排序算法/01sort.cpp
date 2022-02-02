//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<functional>
//
///*
//1.sort				对容器内元素进行排序(1)
//2.random_shuffle	洗牌 指定范围内的元素随机调整次序  
//3.merge				容器元素合并，并存储到另一容器
//4.reverse			反转指定范围的元素
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
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