#include<stdio.h>
#include <stdlib.h>

/*
��Ų���:
1.��ʾ������-void showMenu(char temp[][10]);
2.�ж��Ƿ�Ϊ����-bool IsLeap(int year);
3.����������-int daySum(int year,int month);
4.��ʾ����-showCalendar(int sum,int year,int month);
*/

//ȫ�ֱ���
char week[7][10]={"����һ","���ڶ�","������","������","������","������","������"};
char month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

//��������
bool IsLeap(int year);//�ж��Ƿ�Ϊ����
int  daySum(int year,int month);//����������
void showMenu(char temp[][10]);//��ʾ����
void showCalendar(int sum,int year,int month);//��ʾ����

int main()
{
	int ret=0;//��¼������
	int year=0,month=0,day=0;

	printf("������һ�������Կո����(��/��):\n");
	scanf("%d %d",&year,&month);

	ret=daySum(year,month);
	printf("����1900��:%d��\n",ret);

	showMenu(week);
	showCalendar(ret,year,month);

	system("pause");
	return 0;
}

//�ж����꣺�ǣ�����1 �񣬷���0
bool IsLeap(int year)
{
	//�ж������������ܱ����������ǲ��ܱ�100���� || �ܱ�400����
	if ((year%4==0&&year%100!=0)||year%400==0)
	{
		return 1;
	}
	return 0;
}

//��ʾ������
void showMenu(char week[][10])
{
	int i;
	printf("**************************������**********************\n\n");
	for (i=0;i<7;i++)//�������
	{
		printf("%s\t",week[i]);
	}
	printf("\n");
}

//�������ں�
int daySum(int year,int month)
{
	int i=0;
	int sum=0;//��¼������
	if (IsLeap(year))
	{
		month_day[1]+=1;
	}

	for (i=1900;i<year;i++)
	{
		int ret=IsLeap(i);
		if (ret==1)
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	//������+�·�(����ǰ�·�)
	for (i=0;i<month-1;i++)
	{
		sum+=month_day[i];
	}
	return sum;
}

//��ʾ����
void showCalendar(int sum,int year,int month)
{
	int remainder=0;//��¼����
	int i=0;

	remainder=sum%7;//����������һ��Ӧ�ÿռ���
	//����һ���пո�ʱ����һ�оͲ���һ��7��Ҫ��ȥ�յļ���
	int temp=7-remainder;

	for (i=0;i<remainder;i++)//����յ�����
	{
		printf("\t");
	}
	//�������
	for (i=1;i<=month_day[month-1];i++)
	{
		printf("%d\t",i);

		if (i==(temp)||(i-temp)%7==0)
		{
			printf("\n");
		}
	}
	printf("\n");
}
