#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>
#include<deque>
#include<ctime>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};

void creatPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);

		v.push_back(p);
	}

}

void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		cout << "ѡ�֣� " << it->m_Name << " ��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//����
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		
		int avg = sum / d.size();

		//��ֵ��ѡ��
		it->m_Score = avg;
	}
}

void showScore(vector<Person>v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name: " << it->m_Name << " Score: " << it->m_Score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1����
	vector<Person>v;
	creatPerson(v);
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "name: " << (*it).m_Name << 
	//		" score: " << (*it).m_Score << endl;
	//}
	//���
	setScore(v);
	//��ʾ
	showScore(v);

	system("pause");
	return 0;
}