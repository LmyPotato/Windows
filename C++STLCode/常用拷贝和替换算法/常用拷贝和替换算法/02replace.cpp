//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
///*
//copy		容器内指定范围的元素拷贝到一容器中
//replace		将容器内指定范围的旧元素修改为新元素(1)
//replace_if	容器内指定范围满足条件的元素替换为新元素
//swap		互换两个容器的元素
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(60);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	cout << "替换后：" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint);
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