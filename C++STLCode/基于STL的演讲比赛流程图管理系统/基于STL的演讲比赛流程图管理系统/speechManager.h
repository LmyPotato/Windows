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

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();
	//��������
	~SpeechManager();

	//��ʼ��
	void initSpeech();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();
	//�����ݽ���
	void creatSpeaker();
	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ��������
	void showScore();

	//�����ļ�
	void saveRecord();

	//��ȡ��¼����
	void loadRecord();

	//��ʾ�����¼
	void showRecord();

	//���
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��¼����
	map<int, vector<string>>m_Record;

	//��¼12���ݽ���
	vector<int>v1;
	//��¼��һ��ʤ����
	vector<int>v2;
	//��¼ǰ����
	vector<int>vVictory;
	//��¼��ź��ݽ���
	map<int, Speaker>m_Speaker;
	//��¼����
	int m_Index;
};
