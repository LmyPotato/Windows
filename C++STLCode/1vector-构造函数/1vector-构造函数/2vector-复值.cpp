//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//
////vector ������ֵ
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//ֱ�Ӹ�ֵ
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	//v3.assign(v1.begin(), v1.end());
//	v3.assign(v1.begin()+2,v1.end()-2);
//	printVector(v3);
//
//	//n��elem��ʽ��ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
