#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();
	//析构函数
	~SpeechManager();

	//初始化
	void initSpeech();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();
	//创建演讲者
	void creatSpeaker();
	//开始比赛
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛分数
	void showScore();

	//保存文件
	void saveRecord();

	//读取记录分数
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空
	void clearRecord();

	//判断文件是否为空
	bool fileIsEmpty;
	//记录往届
	map<int, vector<string>>m_Record;

	//记录12个演讲者
	vector<int>v1;
	//记录第一轮胜出者
	vector<int>v2;
	//记录前三名
	vector<int>vVictory;
	//记录序号和演讲者
	map<int, Speaker>m_Speaker;
	//记录轮数
	int m_Index;
};
