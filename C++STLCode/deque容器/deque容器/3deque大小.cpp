//#include<iostream>
//using namespace std;
//#include<string>
//#include<deque> 
//
////deque������С
//void PrintDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;�������޸�
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	PrintDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "��Ϊ��" << endl;
//		cout << "size=" << d1.size() << endl;
//		//dequeû����������
//	}
//	//d1.resize(15);
//	//PrintDeque(d1);
//	//d1.resize(15,1);
//	//PrintDeque(d1);
//	d1.resize(5);
//	PrintDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}