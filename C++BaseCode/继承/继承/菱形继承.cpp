#include <iostream>
using namespace std;

//���μ̳�
//������
class Animal1
{
public:
	int m_Age;

};
//������̳� ������μ̳�����
//�̳�ǰ ���Ϲؼ��� virtual��Ϊ��̳�
//����
class Sheep:virtual public Animal1
{

};
//����
class Tuo:virtual public Animal1
{

};
//������
class SheepTuo:public Sheep,public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age=100;
	st.Tuo::m_Age=28;
	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������
	cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
	cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
	cout<<"st.m_Age"<<st.m_Age<<endl;
	//�������ֻ��һ�ݾͿ�����


}

int main()
{
	test01();

	system("pause");
	return 0;
}