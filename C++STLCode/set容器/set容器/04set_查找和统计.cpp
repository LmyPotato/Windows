//#include<iostream>
//using namespace std;
//#include<set>
//
//
////���Һ�ͳ��
//
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s;
//	
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	printSet(s);
//
//	set<int>::iterator pos=s.find(30);
//
//	if (pos != s.end())
//	{
//		cout << "�ҵ�Ԫ�� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//}
//
//void test02()
//{
//	//ͳ��
//	set<int>s;
//
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//
//	int num = s.count(30);//����set����count���ڵ���1
//	cout << "num= " << num << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}