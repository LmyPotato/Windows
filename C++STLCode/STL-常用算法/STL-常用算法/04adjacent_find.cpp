//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
////���ò����㷨 
///*
//1.find          ����Ԫ��
//2.find_if		����������Ԫ��
//3.adjacent_find ���������ظ�Ԫ��(1)
//4.binary_search ���ֲ��ҷ�
//5.count			ͳ��Ԫ�ظ���
//6.count_if		������ͳ��Ԫ�ظ���
//*/
//
//void Print(int value)
//{
//	cout << value<<" ";
//}
//
//void tets01()
//{
//	vector<int>v;
//
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());
//
//	if (pos == v.end())
//	{
//		cout << "not find" << endl;
//	}
//	else
//	{
//		cout << "find successful" << endl;
//		cout << (*pos) << endl;
//		v.pop_back();
//	}
//
//	for_each(v.begin(), v.end(), Print);
//	cout << endl;
//
//}
//
//int main()
//{
//	tets01();
//
//
//	system("pause");
//	return 0;
//}