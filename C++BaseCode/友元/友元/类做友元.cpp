#include <iostream>
#include <string>
using namespace std;

class Building;
//������Ԫ
class GoodGay
{
public:
	GoodGay();
	void visit();//����Building�е�����

	Building *building;

};

class Building
{
	//GoodGay���Ǳ������Ԫ��
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom="����";
	m_BedRoom="����";
}

GoodGay::GoodGay()
{
	//�������������
	building =new Building;
}

void GoodGay::visit()
{
	cout<<"�û������ڷ���"<<building->m_SittingRoom<<endl;
	cout<<"�û������ڷ���"<<building->m_BedRoom<<endl;
	
}

void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();

	system("pause");
	return 0;
}