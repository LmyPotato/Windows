//#include<iostream>
//using namespace std;
//
////���麯���ͳ�����
//class Base
//{
//public:
//	//���Ǵ��麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص�
//	//1���޷�ʵ��������
//	//2������������� ������д�����еĴ��麯��
//	virtual void func()=0;
//
//};
//
//class Son:public Base
//{
//public:
//	//virtual����дҲ���Բ�д
//	virtual void func()
//	{
//		cout<<"func�����ĵ���"<<endl;
//
//	}
//};
//
//void test01()
//{
//	//Base b;//�������޷�ʵ��������
//	//new Base;//�������޷�ʵ��������
//	Son s;//���������д����Ĵ��麯��
//	Base *base=new Son;
//	base->func();
//
//	//Son s;
//	//s.func();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}