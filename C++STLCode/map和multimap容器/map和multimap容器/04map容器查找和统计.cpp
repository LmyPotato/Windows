//#include<iostream>
//using namespace std;
//#include<string>
//#include<map>
////map����ͳ�ƺͲ���
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key= " << it->first << " value= " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//
//	//����-���ص�����
//	map<int, int>::iterator pos = m.find(5);
//	if (pos != m.end())
//	{
//		cout << "�鵽Ԫ��key=" << (*pos).first << " value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "not find!" << endl;
//	}
//
//	//ͳ�Ƴ���0����1
//	//map�����������ͬ��key
//	//multimap��countͳ�ƿ��ܴ���1
//	int num=m.count(3);
//	cout << "num= " << num << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}