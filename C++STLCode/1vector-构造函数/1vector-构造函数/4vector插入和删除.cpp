//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//
////vector 容器插入和大小
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//尾插法
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
////	//遍历
////	printVector(v1);
////
////	//尾删
////	v1.pop_back();
////	v1.pop_back();
////	printVector(v1);
////
////	//插入 第一个参数是迭代器
////	v1.insert(v1.begin(), 100);
////	printVector(v1);
////
////	v1.insert(v1.begin(), 3, 1000);
////	printVector(v1);
////
////	//删除 参数也是迭代器
////	v1.erase(v1.begin());
////	printVector(v1);
//
//	v1.erase(v1.begin(), v1.begin()+1);
//	//v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
