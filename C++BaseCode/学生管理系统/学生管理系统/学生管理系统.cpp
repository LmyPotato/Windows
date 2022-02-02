#include <iostream>
using namespace std;
#include <string>
#define MAX 100//ѧ������
//ѧ����Ϣ�ṹ��
struct Student
{
	string m_Name;//ѧ������
	int m_Sex;//ѧ���Ա�
	int m_Age;//ѧ������
	string m_number;//ѧ��ѧ��
	string m_Add;//ѧ����ַ
	string m_Phone;//ѧ���绰
};
//ѧ������ϵͳ
struct studentSystem 
{
	Student studentArray[MAX];//ѧ����������
	int m_Size;//��¼ѧ������
};
//���ѧ����Ϣ
void addStudent(studentSystem *stu)
{
	if (stu->m_Size==MAX)
	{
		cout<<"ͨѶ¼�������޷����";
		return ;
	} 
	else
	{
		cout<<"��������ѧ������"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Name;
		
		cout<<"������ѧ���Ա�"<<endl;
		printf("1--��\n");
		printf("2--Ů\n");
		int sex=0;
		while(true)
		{
			cin>>sex;
			if (sex==1||sex==2)
			{
				stu->studentArray[stu->m_Size].m_Sex=sex;
				break;
			}
			else
				cout<<"������������������"<<endl;
		}

		cout<<"������ѧ������"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Age;

		cout<<"������ѧ��ѧ��"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_number;

		cout<<"������ѧ����ַ"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Add;

		cout<<"������ѧ���绰"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Phone;

		stu->m_Size++;
		cout<<"��ӳɹ���"<<endl;
	}
	system("pause");
	system("cls");
}
//��ʾ����ѧ��
void showStudent(studentSystem *stu)
{
	if (stu->m_Size==0)
	{
		cout<<"ѧ����ϢΪ��"<<endl;
	}
	else
	{
		for (int i=0;i<stu->m_Size;i++)
		{
			cout<<"ѧ�ţ�"<<stu->studentArray[i].m_number<<"\t";
			cout<<"������"<<stu->studentArray[i].m_Name<<"\t";
			cout<<"�Ա�"<<(stu->studentArray[i].m_Sex==1?"�� ":"Ů")<<"\t";
			cout<<"���䣺"<<stu->studentArray[i].m_Age<<"\t";
			cout<<"��ַ��"<<stu->studentArray[i].m_Add<<"\t";
			cout<<"�绰��"<<stu->studentArray[i].m_Phone<<"\t"<<endl;
		}	
	}
	system("pause");
	system("cls");
}
//�ж�ѧ����Ϣ�Ƿ����
int isExist(studentSystem *stu,string number)
{
	for (int i=0;i<stu->m_Size;i++)
	{
		if (stu->studentArray[i].m_number==number)
		{
			return i;
		}	
	}
	return -1;
}
//����ѧ��ѧ��
void findStudent(studentSystem *stu)
{
	cout<<"������Ҫ����ѧ����ѧ��"<<endl;
	string number;
	cin>>number;
	int ret=isExist(stu,number);

	if (ret!=-1)
	{
		cout<<"ѧ�ţ�"<<stu->studentArray[ret].m_number<<"\t";
		cout<<"������"<<stu->studentArray[ret].m_Name<<"\t";
		cout<<"�Ա�"<<(stu->studentArray[ret].m_Sex==1?"�� ":"Ů")<<"\t";
		cout<<"���䣺"<<stu->studentArray[ret].m_Age<<"\t";
		cout<<"��ַ��"<<stu->studentArray[ret].m_Add<<"\t";
		cout<<"�绰��"<<stu->studentArray[ret].m_Phone<<endl;
	}
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}
//ɾ��ѧ����Ϣ
void deleteStudent(studentSystem *stu)
{
	cout<<"������Ҫɾ��ѧ����ѧ��"<<endl;
	string number;
	cin>>number;
	int ret=0;
	ret=isExist(stu,number);
	if (ret!=-1)
	{
		for (int i=ret;i<stu->m_Size;i++)
		{
			stu->studentArray[i]=stu->studentArray[i+1];
		}
		stu->m_Size--;
		cout<<"ɾ���ɹ�"<<endl;
	}
	else
	{
		cout<<"û�д���ɾ��ʧ��"<<endl;
	}
	system("pause");
	system("cls");
}
//�޸�ѧ����Ϣ
void modifyStudent(studentSystem *stu)
{
	cout<<"�������޸�ѧ����ѧ��"<<endl;
	string number;
	cin>>number;
	int ret=isExist(stu,number);
	if (stu->m_Size==MAX)
	{
		cout<<"ͨѶ¼�������޷����";
		return ;
	} 
	else
	{
		cout<<"��������ѧ������"<<endl;
		cin>>stu->studentArray[ret].m_Name;

		cout<<"������ѧ���Ա�"<<endl;
		printf("1--��\n");
		printf("2--Ů\n");
		int sex=0;
		while(true)
		{
			cin>>sex;
			if (sex==1||sex==2)
			{
				stu->studentArray[ret].m_Sex=sex;
				break;
			}
			else
				cout<<"������������������"<<endl;
		}

		cout<<"������ѧ������"<<endl;
		cin>>stu->studentArray[ret].m_Age;

		cout<<"������ѧ��ѧ��"<<endl;
		cin>>stu->studentArray[ret].m_number;

		cout<<"������ѧ����ַ"<<endl;
		cin>>stu->studentArray[ret].m_Add;

		cout<<"������ѧ���绰"<<endl;
		cin>>stu->studentArray[ret].m_Phone;

		cout<<"�޸ĳɹ���"<<endl;
	}
	system("pause");
	system("cls");
}
//��չ���ϵͳ
void clearStudent(studentSystem *stu)
{
	stu->m_Size=0;
	cout<<"��ճɹ�"<<endl;
	system("pause");
	system("cls");
}
//��ʾ�˵�
void showMenu()
{
	printf("********ѧ������ϵͳ*******\n");
	printf("***** 1�����ѧ����Ϣ *****\n");
	printf("***** 2��ɾ��ѧ����Ϣ *****\n");
	printf("***** 3������ѧ����Ϣ *****\n");
	printf("***** 4����ʾѧ����Ϣ *****\n");
	printf("***** 5���޸�ѧ����Ϣ *****\n");
	printf("***** 6�����ѧ����Ϣ *****\n");
	printf("***** 0���˳�����ϵͳ *****\n");
}

int main()
{
	studentSystem stu;
	stu.m_Size=0;

	int select=0;
	while (true)
	{
		showMenu();
		cin>>select;
		switch (select)
		{
		case 1://1�����ѧ����Ϣ
			addStudent(&stu);
			break;
		case 2://2��ɾ��ѧ����Ϣ 
			deleteStudent(&stu);
			break;
		case 3://3������ѧ����Ϣ
			findStudent(&stu);
			break;
		case 4://4����ʾѧ����Ϣ
			showStudent(&stu);
			break;
		case 5://5���޸�ѧ����Ϣ
			modifyStudent(&stu);
			break;
		case 6://6�����ѧ����Ϣ
			clearStudent(&stu);
			break;
		case 0://0���˳�����ϵͳ
			printf("��ӭ�´�ʹ�ã�\n");
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}