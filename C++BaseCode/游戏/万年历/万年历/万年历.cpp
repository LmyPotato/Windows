#include<stdio.h>
#include <stdlib.h>

/*
大概步骤:
1.显示主界面-void showMenu(char temp[][10]);
2.判断是否为闰年-bool IsLeap(int year);
3.计算总天数-int daySum(int year,int month);
4.显示日历-showCalendar(int sum,int year,int month);
*/

//全局变量
char week[7][10]={"星期一","星期二","星期三","星期四","星期五","星期六","星期天"};
char month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

//函数变量
bool IsLeap(int year);//判断是否为闰年
int  daySum(int year,int month);//计算总天数
void showMenu(char temp[][10]);//显示画面
void showCalendar(int sum,int year,int month);//显示日历

int main()
{
	int ret=0;//记录总天数
	int year=0,month=0,day=0;

	printf("请输入一个日期以空格相隔(年/月):\n");
	scanf("%d %d",&year,&month);

	ret=daySum(year,month);
	printf("距离1900年:%d天\n",ret);

	showMenu(week);
	showCalendar(ret,year,month);

	system("pause");
	return 0;
}

//判断闰年：是，返回1 否，返回0
bool IsLeap(int year)
{
	//判断润年条件：能被四整除但是不能被100整除 || 能被400整除
	if ((year%4==0&&year%100!=0)||year%400==0)
	{
		return 1;
	}
	return 0;
}

//显示主界面
void showMenu(char week[][10])
{
	int i;
	printf("**************************万年历**********************\n\n");
	for (i=0;i<7;i++)//输出星期
	{
		printf("%s\t",week[i]);
	}
	printf("\n");
}

//计算日期和
int daySum(int year,int month)
{
	int i=0;
	int sum=0;//记录总天数
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
	//总天数+月份(除当前月份)
	for (i=0;i<month-1;i++)
	{
		sum+=month_day[i];
	}
	return sum;
}

//显示日历
void showCalendar(int sum,int year,int month)
{
	int remainder=0;//记录余数
	int i=0;

	remainder=sum%7;//计算日历第一行应该空几天
	//当第一行有空格时，第一行就不是一行7天要减去空的几天
	int temp=7-remainder;

	for (i=0;i<remainder;i++)//输出空的天数
	{
		printf("\t");
	}
	//输出日历
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
