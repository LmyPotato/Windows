#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
//�ϰ���
class Boos :public Worker
{
public:
	//���캯��
	Boos(int id,string name,int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};
