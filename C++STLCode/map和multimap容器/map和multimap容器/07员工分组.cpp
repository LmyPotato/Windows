#include<iostream>
using namespace std;
#include<string>
#include<map>
#include<vector>
#include<ctime>

#define CEHUA  0
#define MEISHU 1
#define YANFA  2

//Ա������
class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void creatWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;//10000`19999

		v.push_back(worker);
	}
}

void setWorker(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGourp(multimap<int, Worker>&m)
{
	cout << "�߻����ţ�" << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name 
			 << " ���� ��" << pos->second.m_Salary << endl;
	}

	cout << "------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name
			<< " ���� ��" << pos->second.m_Salary << endl;
	}

	cout << "------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name
			<< " ���� ��" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand(unsigned int(time(0)));
	//1������Ա��
	vector<Worker>vWorker;
	creatWorker(vWorker);

	//2������
	multimap<int, Worker>mWorker;
	setWorker(vWorker,mWorker);

	//3����ʾ
	showWorkerByGourp(mWorker);
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "����;" << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	//}

	system("pause");
	return 0;
}
