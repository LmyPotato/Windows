#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//设置x
	void setX(int x);
	//获取X
	int getX();
	//设置y
	void setY(int y);
	//获取Y
	int getY();
private:
	int m_X;
	int m_Y;
};