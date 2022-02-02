//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////常用查找算法 
///*
//1.find          查找元素(1)
//2.find_if		按条件查找元素
//3.adjacent_find 查找相邻重复元素
//4.binary_search 二分查找法
//5.count			统计元素个数
//6.count_if		按条件统计元素个数
//*/
//
//void tets01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it= find(v.begin(), v.end(), 50);
//
//	if (it == v.end())
//	{
//		cout << "not find" << endl;
//	}
//	else
//	{
//		cout << "successful find:" << (*it) << endl;
//	}
//}
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	//重载==底层find知道如何对比person数据类型
//	bool operator==(const Person&p)
//	{
//		if (p.m_Name == this->m_Name&&p.m_Age == this->m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("bbb", 20);
//	 
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//
//
//	if (it == v.end())
//	{
//		cout << "not find" << endl;
//	} 
//	else
//	{
//		cout << "success find" << endl;
//		cout << "name:" << (*it).m_Name << " age:" << (*it).m_Age << endl;
//	}
//
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