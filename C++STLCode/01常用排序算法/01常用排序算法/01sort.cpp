//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<functional>
//
///*
//1.sort				��������Ԫ�ؽ�������(1)
//2.random_shuffle	ϴ�� ָ����Χ�ڵ�Ԫ�������������  
//3.merge				����Ԫ�غϲ������洢����һ����
//4.reverse			��תָ����Χ��Ԫ��
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//����
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//����
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}