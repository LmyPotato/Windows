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
//3.adjacent_find 查找相邻重复元素
//4.binary_search 二分查找法
//5.count			统计元素个数(1)
//6.count_if		按条件统计元素个数
//*/
//
//void Print(int value)
//{
//	cout << value << " ";
//}
////自定义数据类型
//void tets01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(60);
//
//	int ret=count(v.begin(), v.end(), 40);
//
//	cout << "40个数为：" << ret << endl;
//}
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	bool operator==(const Person &p)
//	{
//		if (this->m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p6("诸葛亮", 35);
//
//	int ret=count(v.begin(), v.end(), p6);
//
//	cout << "和诸葛亮年龄相等的个数为：" << ret << endl;
//}
//
//int main()
//{
//	//tets01();
//	test02();
//
//	system("pause");
//	return 0;
//}