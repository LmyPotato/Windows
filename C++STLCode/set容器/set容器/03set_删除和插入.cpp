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
//void printLine(int n)//���ָ�����
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
//		//����-
//		s.insert(i);
//	}
//	printSet(s);
//
//	//ɾ��
//	s.erase(s.begin());
//	printSet(s);
//
//	//ɾ�������ذ汾
//	s.erase(5);
//	printSet(s);
//
//
//	//���
//	//s.erase(s.begin(), s.end());
//	//printSet(s);
//	s.clear();
//	printSet(s);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}