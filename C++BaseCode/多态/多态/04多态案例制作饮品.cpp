//#include<iostream>
//using namespace std;
//
//
////��̬����2-������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()=0;
//
//	//����
//	virtual void Brew()=0;
//
//	//���뱭��
//	virtual void PourInCup()=0;
//
//	//��������
//	virtual void PutSomething()=0;
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee:public AbstractDrinking
//{
//	//��ˮ
//	virtual void Boil()
//	{
//		cout<<"��ũ��ˮ"<<endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout<<"���ݿ���"<<endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout<<"���뱭��"<<endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout<<"�����Ǻ�ţ��"<<endl;
//	}
//};
//
////������Ҷ
//class Tea:public AbstractDrinking
//{
//	//��ˮ
//	virtual void Boil()
//	{
//		cout<<"��ˮ"<<endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout<<"���ݲ�Ҷ"<<endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout<<"���뱭��"<<endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout<<"��������"<<endl;
//	}
//};
////��������
//void doWork(AbstractDrinking *abs)
//{
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//	cout<<"------------"<<endl;
//	//������Ҷ
//	doWork(new Tea);
//	cout<<"------------"<<endl;
//	Tea tea;
//	tea.makeDrink();
//	cout<<"--------------"<<endl;
//	Coffee coffee;
//	coffee.makeDrink();
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