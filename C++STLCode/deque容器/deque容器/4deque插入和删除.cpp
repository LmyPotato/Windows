//#include<iostream>
//using namespace std;
//#include<string>
//#include<deque> 
//
////deque容器插入和删除
//void PrintDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;不可以修改
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////两端操作
//void test01()
//{
//	deque<int>d1;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	d1.push_back(i);
//	//}
//	//PrintDeque(d1);
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	PrintDeque(d1);
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	PrintDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	PrintDeque(d1);
//
//	//头删
//	d1.pop_front();
//	PrintDeque(d1);
//}
//
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	PrintDeque(d1);
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	PrintDeque(d1);
//
//
//	d1.insert(d1.begin(), 2, 688);
//	PrintDeque(d1);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	PrintDeque(d1);
//
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	PrintDeque(d1);
//
//	//按区间删除
//	d1.erase(d1.begin(), d1.end());
//	PrintDeque(d1);
//
//	//清空
//	d1.clear();
//	PrintDeque(d1);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}