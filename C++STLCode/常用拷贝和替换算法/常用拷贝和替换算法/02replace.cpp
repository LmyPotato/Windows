//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
///*
//copy		������ָ����Χ��Ԫ�ؿ�����һ������
//replace		��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��(1)
//replace_if	������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap		��������������Ԫ��
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(60);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	cout << "�滻��" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}