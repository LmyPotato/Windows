//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100//学生数量
//
//struct Student//学生信息
//{
//	char m_Name[15];//学生姓名
//	int m_Sex;//学生性别
//	int m_Age;//学生年龄
//	char m_number[15];//学生学号
//	char m_Add[15];//学生地址
//	char m_Phone[15];//学生电话
//};
//
//struct studentSystem //学生管理系统
//{
//	Student studentArray[MAX];//学生数量数组
//
//	int m_Size;//记录学生数量
//};
//
//void addStudent(studentSystem *stu)
//{
//	if (stu->m_Size==MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return ;
//	} 
//	else
//	{
//		printf("请问输入学生姓名\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Name);
//
//		printf("请输入学生性别\n");
//		printf("1--男\n");
//		printf("2--女\n");
//		int sex=0;
//		while(true)
//		{
//			scanf("%d",&sex);
//			if (sex==1||sex==2)
//			{
//				stu->studentArray[stu->m_Size].m_Sex=sex;
//				break;
//			}
//			else
//			{
//				printf("输入有误请重新输入\n");
//			}
//		}
//
//		printf("请输入学生年龄\n");
//		scanf("%d",&stu->studentArray[stu->m_Size].m_Age);
//
//		printf("请输入学生学号\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_number);
//
//		printf("请输入学生地址\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Add);
//
//		printf("请输入学生电话\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Phone);
//
//		stu->m_Size++;
//		printf("添加成功！\n"); 
//	}
//	system("pause");
//	system("cls");
//}
////显示学生信息
//void showStudent(studentSystem *stu)
//{
//	int i=0;
//	if(stu->m_Size==0)
//	{
//		printf("学生信息为空\n");
//		system("pause");
//		system("cls");
//		return;
//	}
//	else
//	{
//		for(i=0;i<stu->m_Size;i++)
//		{
//			printf("学号：%s\t",stu->studentArray[i].m_number);
//			printf("姓名：%s\t",stu->studentArray[i].m_Name);
//			printf("性别：%s\t",stu->studentArray[i].m_Sex==1?"男":"女");
//			printf("年龄：%d\t",stu->studentArray[i].m_Age);
//			printf("电话：%s\t",stu->studentArray[i].m_Phone);
//			printf("住址：%s\t\n",stu->studentArray[i].m_Add);
//		}
//		system("pause");
//		system("cls");		
//	}
//}
//
//int isExist(studentSystem *stu,char number[15])
//{
//	int i=0;
//	for (i=0;i<stu->m_Size;i++)
//	{
//		if (stu->studentArray[i].m_number==number)
//		{
//			return i;//返回当前找到的位置
//		}
//		return -1;
//	}
//}
////查找学生信息
//void findStudent(studentSystem *stu)
//{
//	char number[15];
//	int ret=0;
//	printf("请输入要查找的学生学号\n");
//	scanf("%s",number);
//	ret=isExist(stu,number);
//	if (ret!=-1)
//	{
//		printf("学号：%s\t",stu->studentArray[ret].m_number);
//		printf("姓名：%s\t",stu->studentArray[ret].m_Name);
//		printf("性别：%s\t",stu->studentArray[ret].m_Sex==1?"男":"女");
//		printf("年龄：%d\t",stu->studentArray[ret].m_Age);
//		printf("电话：%s\t",stu->studentArray[ret].m_Phone);
//		printf("住址：%s\t\n",stu->studentArray[ret].m_Add);
//	}
//	else
//	{
//		printf("查无此人\n");
//	}
//	system("pause");
//	system("cls");
//}
//
//void showMenu()
//{
//	printf("********学生管理系统*******\n");
//	printf("***** 1、添加学生信息 *****\n");
//	printf("***** 2、删除学生信息 *****\n");
//	printf("***** 3、查找学生信息 *****\n");
//	printf("***** 4、显示学生信息 *****\n");
//	printf("***** 5、修改学生信息 *****\n");
//	printf("***** 6、清空学生信息 *****\n");
//	printf("***** 0、退出管理系统 *****\n");
//}
//
//int main()
//{
//	studentSystem stu;
//	stu.m_Size=0;
//
//	int select=0;
//	while (true)
//	{
//		showMenu();
//		scanf("%d",&select);
//		switch (select)
//		{
//		case 1://1、添加学生信息
//			addStudent(&stu);
//			break;
//		case 2://2、删除学生信息 
//			break;
//		case 3://3、查找学生信息
//			findStudent(&stu);
//			break;
//		case 4://4、显示学生信息
//			showStudent(&stu);
//			break;
//		case 5://5、修改学生信息
//			break;
//		case 6://6、清空学生信息
//			break;
//		case 0://0、退出管理系统
//			printf("欢迎下次使用！\n");
//			system("pause");
//			return 0;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}