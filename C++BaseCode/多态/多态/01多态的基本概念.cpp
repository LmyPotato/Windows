//#include <iostream>
//using namespace std;
//
////��̬
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout<<"������˵��"<<endl;
//	}
//};
//
////è��
//class Cat:public Animal
//{
//public:
//	 void speak()
//	{
//		cout<<"Сè��˵��"<<endl;
//	}
//};
////����
//class Dog:public Animal
//{
//public:
//	void speak()
//	{
//		cout<<"С����˵��"<<endl;
//	}
//};
////��̬��̬��������
////�м̳й�ϵ
////����Ҫ��д������麯��
//
////��̬��̬ʹ��
////�����ָ��������� ָ���������
//
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ��è˵����Ҫ��ַ���
////��ʽһ
//void dospeak(Animal &animal)
//{
//	animal.speak();
//}
////��ʽ��
////void dospeak(Animal *a)
////{
////	a->speak();
////}
//
//void test01()
//{
//	Cat cat;
//	dospeak(cat);
//
//	Dog dog;
//	dospeak(dog);
//}
//
//void test02()
//{
//	cout<<"sizeof Animal="<<sizeof(Animal)<<endl;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}