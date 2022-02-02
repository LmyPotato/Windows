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
		string name = "选手";
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
		cout << "选手： " << it->m_Name << " 打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//排序
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		
		int avg = sum / d.size();

		//赋值给选手
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
	//1创建
	vector<Person>v;
	creatPerson(v);
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "name: " << (*it).m_Name << 
	//		" score: " << (*it).m_Score << endl;
	//}
	//打分
	setScore(v);
	//显示
	showScore(v);

	system("pause");
	return 0;
}