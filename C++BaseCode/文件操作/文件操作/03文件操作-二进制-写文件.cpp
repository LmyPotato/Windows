//#include<iostream>
//#include <fstream>
//#include <string>
//using namespace std;
////�������ļ� д�ļ�
//class Person
//{
//public:
//	char m_Name[64];//����
//	int m_Age;//����
//};
//
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ofstream ofs;
//
//	//3.���ļ�
//	ofs.open("Person.txt",ios::out|ios::binary);
//
//	//4.д�ļ�
//	Person p={"����",18};
//	Person p1 = { "lisi", 21 };
//	ofs.write((const char *)&p,sizeof(Person));
//	ofs.write((const char *)&p1, sizeof(Person));
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}