//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<list>
//
//
//list������ת������
//
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
//	
//	��ת
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(40);
//	L1.push_back(50);
//	L1.push_back(30);
//
//	��תǰ
//	printList(L1);
//
//
//	��ת��
//	L1.reverse();
//	printList(L1);
//
//}
//
//bool myCompare(int v1,int v2)
//{
//	���� ���õ�һ�������ڵ�һ����
//	return v1 > v2;
//}
//
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(40);
//	L1.push_back(50);
//	L1.push_back(30);
//
//	����ǰ
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	����
//	L1.sort();
//	cout << "�����:" << endl;
//	printList(L1);
//
//	L1.sort(myCompare);
//	cout << "�����:" << endl;
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}