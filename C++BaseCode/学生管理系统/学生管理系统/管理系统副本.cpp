//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100//ѧ������
//
//struct Student//ѧ����Ϣ
//{
//	char m_Name[15];//ѧ������
//	int m_Sex;//ѧ���Ա�
//	int m_Age;//ѧ������
//	char m_number[15];//ѧ��ѧ��
//	char m_Add[15];//ѧ����ַ
//	char m_Phone[15];//ѧ���绰
//};
//
//struct studentSystem //ѧ������ϵͳ
//{
//	Student studentArray[MAX];//ѧ����������
//
//	int m_Size;//��¼ѧ������
//};
//
//void addStudent(studentSystem *stu)
//{
//	if (stu->m_Size==MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return ;
//	} 
//	else
//	{
//		printf("��������ѧ������\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Name);
//
//		printf("������ѧ���Ա�\n");
//		printf("1--��\n");
//		printf("2--Ů\n");
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
//				printf("������������������\n");
//			}
//		}
//
//		printf("������ѧ������\n");
//		scanf("%d",&stu->studentArray[stu->m_Size].m_Age);
//
//		printf("������ѧ��ѧ��\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_number);
//
//		printf("������ѧ����ַ\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Add);
//
//		printf("������ѧ���绰\n");
//		scanf("%s",stu->studentArray[stu->m_Size].m_Phone);
//
//		stu->m_Size++;
//		printf("��ӳɹ���\n"); 
//	}
//	system("pause");
//	system("cls");
//}
////��ʾѧ����Ϣ
//void showStudent(studentSystem *stu)
//{
//	int i=0;
//	if(stu->m_Size==0)
//	{
//		printf("ѧ����ϢΪ��\n");
//		system("pause");
//		system("cls");
//		return;
//	}
//	else
//	{
//		for(i=0;i<stu->m_Size;i++)
//		{
//			printf("ѧ�ţ�%s\t",stu->studentArray[i].m_number);
//			printf("������%s\t",stu->studentArray[i].m_Name);
//			printf("�Ա�%s\t",stu->studentArray[i].m_Sex==1?"��":"Ů");
//			printf("���䣺%d\t",stu->studentArray[i].m_Age);
//			printf("�绰��%s\t",stu->studentArray[i].m_Phone);
//			printf("סַ��%s\t\n",stu->studentArray[i].m_Add);
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
//			return i;//���ص�ǰ�ҵ���λ��
//		}
//		return -1;
//	}
//}
////����ѧ����Ϣ
//void findStudent(studentSystem *stu)
//{
//	char number[15];
//	int ret=0;
//	printf("������Ҫ���ҵ�ѧ��ѧ��\n");
//	scanf("%s",number);
//	ret=isExist(stu,number);
//	if (ret!=-1)
//	{
//		printf("ѧ�ţ�%s\t",stu->studentArray[ret].m_number);
//		printf("������%s\t",stu->studentArray[ret].m_Name);
//		printf("�Ա�%s\t",stu->studentArray[ret].m_Sex==1?"��":"Ů");
//		printf("���䣺%d\t",stu->studentArray[ret].m_Age);
//		printf("�绰��%s\t",stu->studentArray[ret].m_Phone);
//		printf("סַ��%s\t\n",stu->studentArray[ret].m_Add);
//	}
//	else
//	{
//		printf("���޴���\n");
//	}
//	system("pause");
//	system("cls");
//}
//
//void showMenu()
//{
//	printf("********ѧ������ϵͳ*******\n");
//	printf("***** 1�����ѧ����Ϣ *****\n");
//	printf("***** 2��ɾ��ѧ����Ϣ *****\n");
//	printf("***** 3������ѧ����Ϣ *****\n");
//	printf("***** 4����ʾѧ����Ϣ *****\n");
//	printf("***** 5���޸�ѧ����Ϣ *****\n");
//	printf("***** 6�����ѧ����Ϣ *****\n");
//	printf("***** 0���˳�����ϵͳ *****\n");
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
//		case 1://1�����ѧ����Ϣ
//			addStudent(&stu);
//			break;
//		case 2://2��ɾ��ѧ����Ϣ 
//			break;
//		case 3://3������ѧ����Ϣ
//			findStudent(&stu);
//			break;
//		case 4://4����ʾѧ����Ϣ
//			showStudent(&stu);
//			break;
//		case 5://5���޸�ѧ����Ϣ
//			break;
//		case 6://6�����ѧ����Ϣ
//			break;
//		case 0://0���˳�����ϵͳ
//			printf("��ӭ�´�ʹ�ã�\n");
//			system("pause");
//			return 0;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}