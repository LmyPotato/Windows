//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
///*
//copy		������ָ����Χ��Ԫ�ؿ�����һ������
//replace		��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if	������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��(1)
//swap		��������������Ԫ��
//*/
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(100);
//	v.push_back(60);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(), Greater30(), 3000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}