//#include<iostream>
//#include<string>
//using namespace std;
////��ģ����̳�
////1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
////2.�����ָ�����������޷�����������ڴ�
//
//
//template<class T>
//class Base
//{
//	T m;
//};
//
////���󣬱���Ҫ֪��������T�����ͣ����ܼ̳и�����
//class Son :public Base<int>
//
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
////3.��������ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template<class T1,class T2>
//class Son2 :public Base <T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>S2;
//
//}
//int main()
//{
//	test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}