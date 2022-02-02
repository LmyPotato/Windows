//#include<iostream>
//using namespace std;
//#include <vector>
//#include<algorithm>//标准算法头文件
//
////vertor容器存放内置数据类型
//void myPrint(int value)
//{
//	cout << value << endl;
//}
//
//void test01()
//{
//	//创建一个vector容器，数组
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin();//起始迭代器-第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器
//
//	//while (itBegin!=itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	for_each(v.begin(),v.end(),myPrint);
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