#include <graphics.h>
#include <conio.h>

#define Block_Size 40//每个格子的大小
#define Hight 10//画布高度-HEIGHT*BLOCK_SIZE
#define Width 10 //画布宽度--WIDTH*BLOCK_SIZE
#define R 10//定义棋子的半径

bool Black_IsShow;//黑棋显示标志位 1：显示 0：不显示
bool White_IsShow;//白棋显示标志位 1：显示 0：不显示
//白棋和黑棋结构体
struct White_Black_Circle
{
	//是否画圆操作  1-有 -1-无
	bool white;//白色
	bool black;//黑色
	int num;
};

TCHAR str[50]={0};

White_Black_Circle wbc[Hight][Width];//白棋和黑棋数组

void whiteSearch(int search_i,int search_j);//查找白棋
void blackSearch(int search_i,int search_j);//查找黑棋
//初始化函数
void startup()
{
	initgraph(Width*Block_Size,Hight*Block_Size+40);//生成画布
	setlinecolor(RGB(200,200,200));//设置画线颜色

	Black_IsShow=0;//初始化黑棋不显示胜利
	White_IsShow=0;//初始化白棋不显示胜利

	BeginBatchDraw();//批量修改图片
}

//生成黑白棋
void Draw_White_Black()
{
	int i,j;
	for (i=0;i<Hight;i++)
	{
		for (j=0;j<Width;j++)
		{
			//生成白棋
			if (wbc[i][j].white==1)
			{
				setfillcolor(WHITE);
				fillcircle(i*Block_Size,j*Block_Size,R);
			}
			//生成黑棋
			else if (wbc[i][j].black==1)
			{
				setfillcolor(BLACK);
				fillcircle(i*Block_Size,j*Block_Size,R);
			}
		}
	}
}

//绘制函数
void show()
{
	cleardevice();//清屏
	int i,j;
	for (i=0;i<Hight;i++)
	{
		for (j=0;j<Width;j++)
		{
			setfillcolor(RGB(255,228,181));//棕色比例
			setlinecolor(BLACK);
			fillrectangle(i*Block_Size,j*Block_Size,(i+1)*Block_Size,(j+1)*Block_Size);//生成棋盘
		}
	}

	//设置最下面边框
	setfillcolor(RGB(255,228,181));//设置填充颜色
	fillrectangle(0,Hight*Block_Size,Width*Block_Size,(Hight+1)*Block_Size);//设置填充矩形颜色

	Draw_White_Black();

	settextstyle(30,0,_T("宋体"));//设置字体为30号字体为宋体
	outtextxy(0,Width*Block_Size,_T("游戏结果："));

	if (Black_IsShow==1)
	{
		settextstyle(30,0,_T("宋体"));
		outtextxy(150,Width*Block_Size,_T("黑棋胜利"));
	}
	if (White_IsShow==1)
	{
		settextstyle(30,0,_T("宋体"));
		outtextxy(150,Width*Block_Size,_T("白棋胜利"));
	}
	FlushBatchDraw();
}

//与输入无关的更新
void updateWithoutInput()
{

}

//与输入有关的更新
void updateWithInput()
{
	MOUSEMSG m;		// 定义鼠标结构体消息
	while (MouseHit())  //这个函数用于检测当前是否有鼠标消息
	{
		m=GetMouseMsg();//获取鼠标信息
		int clicked_i=int(m.x+5)/Block_Size;
		int clicked_j=int(m.y+5)/Block_Size;

		if (m.uMsg==WM_RBUTTONDOWN)//鼠标右键按下 生成白棋
		{
			wbc[clicked_i][clicked_j].white=1;
			whiteSearch(clicked_i,clicked_j);
		}

		if (m.uMsg==WM_LBUTTONDOWN)//鼠标左键按下 生成黑棋
		{
			wbc[clicked_i][clicked_j].black=1;
			blackSearch(clicked_i,clicked_j);
		}
		Draw_White_Black();//画黑白棋
	}
}

void whiteSearch(int search_i,int search_j)
{
	int search=0;
	int count=0;//记录查找的棋子最大为5
	White_Black_Circle wc[4]={0};//记录行和列
	White_Black_Circle bw[4]={0};//记录斜线

	//----------------这里是白棋的判断---------------------------------------------
	//向上查找
	for (count=0,search=0;search_i-search>0&&count++<5;search++)
	{
		if(wbc[search_i-search][search_j].white==1)
			wc[0].num++;//记录记录查找棋子的上五个
		else
			break;
	}
	//向右查找
	for (count=0,search=0;search_j+search<Width&&count++<5;search++)
	{
		if (wbc[search_i][search_j+search].white==1)
			wc[3].num++;//向右查找五个
		else
			break;
	}
	//这里是白棋对角线判断
	for (count=0,search=0;search<Width&&count++<5;search++)
	{
		if (wbc[search_i+search][search_j+search].white==1)
			bw[0].num++;
		else
			break;
	}
	for (count=0,search=0;search<Width&&count++<5;search++)
	{
		if (wbc[search_i+search][search_j-search].white==1)
			bw[1].num++;
		else
			break;
	}

	if (wc[0].num>=5||wc[1].num>=5||wc[2].num>=5||wc[3].num>=5
		||bw[0].num>=5||bw[1].num>=5)
		White_IsShow=1;
}

void blackSearch(int search_i,int search_j)
{
	int search=0;
	int count=0;//记录查找的棋子最大为5
	White_Black_Circle bc[4]={0};//记录行和列
	White_Black_Circle bb[4]={0};//记录斜线

	//向上查找
	for (count=0,search=0;search_i-search>0&&count++<5;search++)
	{
		if(wbc[search_i-search][search_j].black==1)
			bc[0].num++;
		else
			break;
	}
	//向右查找
	for (count=0,search=0;search_j+search<Width&&count++<5;search++)
	{
		if (wbc[search_i][search_j+search].black==1)
		{
			bc[3].num++;
		}
		else
			break;
	}
	
	//这里是黑棋对角线判断
	for (count=0,search=0;search<Width&&count++<5;search++)
	{
		if (wbc[search_i+search][search_j+search].black==1)
		{
			bb[0].num++;
		}
		else
			break;
	}
	for (count=0,search=0;search<Width&&count++<5;search++)
	{
		if (wbc[search_i+search][search_j-search].black==1)
		{
			bb[1].num++;
		}
		else
			break;
	}

	//这里是判断黑棋连续的是否为5，如果是，显示置一
	if (bc[0].num>=5||bc[1].num>=5||bc[2].num>=5||bc[3].num>=5
		||bb[0].num>=5||bb[1].num>=5)
	{
		Black_IsShow=1;
	}
}

int main()//主函数
{
	startup();//初始化函数，仅执行一次
	while (1)//一直循环
	{
		show();//进行绘制
		updateWithoutInput();//和输入无关的更新
		updateWithInput();//和输入有关的更新
	}
	_getch();
	closegraph();
	return 0;
}