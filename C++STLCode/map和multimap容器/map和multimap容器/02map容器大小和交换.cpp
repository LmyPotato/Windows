//#include<iostream>
//using namespace std;
//#include<string>
//#include<map>
////map容器的大小和交换
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout<<"key= " << it->first << " value= " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//
//	m.insert(pair<int,int>(1,10));
//	m.insert(pair<int,int>(2,20));
//	m.insert(pair<int,int>(3,30));
//	m.insert(pair<int,int>(4,40));
//	m.insert(pair<int,int>(5,50));
//
//	printMap(m);
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m.size=" << m.size()<<endl;
//	}
//}
//
//void test02()
//{
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	cout << "交换前：" << endl;
//	cout << "m="<<endl;
//	printMap(m);
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(6, 60));
//	m2.insert(pair<int, int>(7, 70));
//	m2.insert(pair<int, int>(8, 80));
//	m2.insert(pair<int, int>(9, 90));
//	m2.insert(pair<int, int>(10, 100));
//	cout << endl << "m2="<<endl;
//	printMap(m2);
//
//	cout << "交换后：" << endl;
//	m.swap(m2);
//	cout << "m="<<endl;
//	printMap(m);
//
//	cout <<endl<< "m2="<<endl;
//	printMap(m2);
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}