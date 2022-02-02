//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
//
////listÈÝÆ÷²åÈëÉ¾³ý
//
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//
//	//Î²²å
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	//Í·²å
//	L1.push_front(60);
//	L1.push_front(70);
//	L1.push_front(80);
//
//	printList(L1);
//
//	//Î²É¾
//	L1.pop_back();
//	printList(L1);
//
//	//Í·É¾
//	L1.pop_front();
//	printList(L1);
//
//	//insert
//	list<int>::iterator it = L1.begin();
//	
//	L1.insert(it++, 11);
//	printList(L1);
//
//	//É¾³ý
//	it = L1.begin();
//	L1.erase(it);
//	printList(L1);
//
//	//ÒÆ³ý
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//	printList(L1);
//	L1.remove(10000);
//	printList(L1);
//
//	//Çå¿Õ
//	L1.clear();
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}