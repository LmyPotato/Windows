#include <graphics.h>
#include <conio.h>

#define Block_Size 40//ÿ�����ӵĴ�С
#define Hight 10//�����߶�-HEIGHT*BLOCK_SIZE
#define Width 10 //�������--WIDTH*BLOCK_SIZE
#define R 10//�������ӵİ뾶

bool Black_IsShow;//������ʾ��־λ 1����ʾ 0������ʾ
bool White_IsShow;//������ʾ��־λ 1����ʾ 0������ʾ
//����ͺ���ṹ��
struct White_Black_Circle
{
	//�Ƿ�Բ����  1-�� -1-��
	bool white;//��ɫ
	bool black;//��ɫ
	int num;
};

TCHAR str[50]={0};

White_Black_Circle wbc[Hight][Width];//����ͺ�������

void whiteSearch(int search_i,int search_j);//���Ұ���
void blackSearch(int search_i,int search_j);//���Һ���
//��ʼ������
void startup()
{
	initgraph(Width*Block_Size,Hight*Block_Size+40);//���ɻ���
	setlinecolor(RGB(200,200,200));//���û�����ɫ

	Black_IsShow=0;//��ʼ�����岻��ʾʤ��
	White_IsShow=0;//��ʼ�����岻��ʾʤ��

	BeginBatchDraw();//�����޸�ͼƬ
}

//���ɺڰ���
void Draw_White_Black()
{
	int i,j;
	for (i=0;i<Hight;i++)
	{
		for (j=0;j<Width;j++)
		{
			//���ɰ���
			if (wbc[i][j].white==1)
			{
				setfillcolor(WHITE);
				fillcircle(i*Block_Size,j*Block_Size,R);
			}
			//���ɺ���
			else if (wbc[i][j].black==1)
			{
				setfillcolor(BLACK);
				fillcircle(i*Block_Size,j*Block_Size,R);
			}
		}
	}
}

//���ƺ���
void show()
{
	cleardevice();//����
	int i,j;
	for (i=0;i<Hight;i++)
	{
		for (j=0;j<Width;j++)
		{
			setfillcolor(RGB(255,228,181));//��ɫ����
			setlinecolor(BLACK);
			fillrectangle(i*Block_Size,j*Block_Size,(i+1)*Block_Size,(j+1)*Block_Size);//��������
		}
	}

	//����������߿�
	setfillcolor(RGB(255,228,181));//���������ɫ
	fillrectangle(0,Hight*Block_Size,Width*Block_Size,(Hight+1)*Block_Size);//������������ɫ

	Draw_White_Black();

	settextstyle(30,0,_T("����"));//��������Ϊ30������Ϊ����
	outtextxy(0,Width*Block_Size,_T("��Ϸ�����"));

	if (Black_IsShow==1)
	{
		settextstyle(30,0,_T("����"));
		outtextxy(150,Width*Block_Size,_T("����ʤ��"));
	}
	if (White_IsShow==1)
	{
		settextstyle(30,0,_T("����"));
		outtextxy(150,Width*Block_Size,_T("����ʤ��"));
	}
	FlushBatchDraw();
}

//�������޹صĸ���
void updateWithoutInput()
{

}

//�������йصĸ���
void updateWithInput()
{
	MOUSEMSG m;		// �������ṹ����Ϣ
	while (MouseHit())  //����������ڼ�⵱ǰ�Ƿ��������Ϣ
	{
		m=GetMouseMsg();//��ȡ�����Ϣ
		int clicked_i=int(m.x+5)/Block_Size;
		int clicked_j=int(m.y+5)/Block_Size;

		if (m.uMsg==WM_RBUTTONDOWN)//����Ҽ����� ���ɰ���
		{
			wbc[clicked_i][clicked_j].white=1;
			whiteSearch(clicked_i,clicked_j);
		}

		if (m.uMsg==WM_LBUTTONDOWN)//���������� ���ɺ���
		{
			wbc[clicked_i][clicked_j].black=1;
			blackSearch(clicked_i,clicked_j);
		}
		Draw_White_Black();//���ڰ���
	}
}

void whiteSearch(int search_i,int search_j)
{
	int search=0;
	int count=0;//��¼���ҵ��������Ϊ5
	White_Black_Circle wc[4]={0};//��¼�к���
	White_Black_Circle bw[4]={0};//��¼б��

	//----------------�����ǰ�����ж�---------------------------------------------
	//���ϲ���
	for (count=0,search=0;search_i-search>0&&count++<5;search++)
	{
		if(wbc[search_i-search][search_j].white==1)
			wc[0].num++;//��¼��¼�������ӵ������
		else
			break;
	}
	//���Ҳ���
	for (count=0,search=0;search_j+search<Width&&count++<5;search++)
	{
		if (wbc[search_i][search_j+search].white==1)
			wc[3].num++;//���Ҳ������
		else
			break;
	}
	//�����ǰ���Խ����ж�
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
	int count=0;//��¼���ҵ��������Ϊ5
	White_Black_Circle bc[4]={0};//��¼�к���
	White_Black_Circle bb[4]={0};//��¼б��

	//���ϲ���
	for (count=0,search=0;search_i-search>0&&count++<5;search++)
	{
		if(wbc[search_i-search][search_j].black==1)
			bc[0].num++;
		else
			break;
	}
	//���Ҳ���
	for (count=0,search=0;search_j+search<Width&&count++<5;search++)
	{
		if (wbc[search_i][search_j+search].black==1)
		{
			bc[3].num++;
		}
		else
			break;
	}
	
	//�����Ǻ���Խ����ж�
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

	//�������жϺ����������Ƿ�Ϊ5������ǣ���ʾ��һ
	if (bc[0].num>=5||bc[1].num>=5||bc[2].num>=5||bc[3].num>=5
		||bb[0].num>=5||bb[1].num>=5)
	{
		Black_IsShow=1;
	}
}

int main()//������
{
	startup();//��ʼ����������ִ��һ��
	while (1)//һֱѭ��
	{
		show();//���л���
		updateWithoutInput();//�������޹صĸ���
		updateWithInput();//�������йصĸ���
	}
	_getch();
	closegraph();
	return 0;
}