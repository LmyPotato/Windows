#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));
	SpeechManager sm;
	int choice = 0;

	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "编号：" << it->first << " 姓名： " << it->second.m_Name << 
	//		" 分数: " << it->second.m_Score[0] << endl;
	//}

	while (true)
	{
		sm.show_Menu();
		cout << "请输入你的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届比赛记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://推出系统
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}