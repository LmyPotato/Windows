//#include<iostream>
//using namespace std;
//#include<set>
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
//void printLine(int n)//画分割线线
//{
//	while (n--)
//	{
//		printf("-");
//	}
//	printf("\n");
//}
//
//void test01()
//{
//	set<int>s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.insert(i);
//	}
//	//printSet(s);
//
//	if (s.empty())
//	{
//		cout << "set容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		printSet(s);
//		cout << s.size() << endl;
//	}
//
//	set<int>s2;
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(40);
//	
//	cout << "s2=";
//	printSet(s2);
//	s.swap(s2);
//
//	printLine(20);
//	cout << "s=" ;
//	printSet(s);
//	cout << "s2=" ;
//	printSet(s2);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}