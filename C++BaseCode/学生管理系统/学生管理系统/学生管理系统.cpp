#include <iostream>
using namespace std;
#include <string>
#define MAX 100//学生数量
//学生信息结构体
struct Student
{
	string m_Name;//学生姓名
	int m_Sex;//学生性别
	int m_Age;//学生年龄
	string m_number;//学生学号
	string m_Add;//学生地址
	string m_Phone;//学生电话
};
//学生管理系统
struct studentSystem 
{
	Student studentArray[MAX];//学生数量数组
	int m_Size;//记录学生数量
};
//添加学生信息
void addStudent(studentSystem *stu)
{
	if (stu->m_Size==MAX)
	{
		cout<<"通讯录已满，无法添加";
		return ;
	} 
	else
	{
		cout<<"请问输入学生姓名"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Name;
		
		cout<<"请输入学生性别"<<endl;
		printf("1--男\n");
		printf("2--女\n");
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
				cout<<"输入有误请重新输入"<<endl;
		}

		cout<<"请输入学生年龄"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Age;

		cout<<"请输入学生学号"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_number;

		cout<<"请输入学生地址"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Add;

		cout<<"请输入学生电话"<<endl;
		cin>>stu->studentArray[stu->m_Size].m_Phone;

		stu->m_Size++;
		cout<<"添加成功！"<<endl;
	}
	system("pause");
	system("cls");
}
//显示所有学生
void showStudent(studentSystem *stu)
{
	if (stu->m_Size==0)
	{
		cout<<"学生信息为空"<<endl;
	}
	else
	{
		for (int i=0;i<stu->m_Size;i++)
		{
			cout<<"学号："<<stu->studentArray[i].m_number<<"\t";
			cout<<"姓名："<<stu->studentArray[i].m_Name<<"\t";
			cout<<"性别："<<(stu->studentArray[i].m_Sex==1?"男 ":"女")<<"\t";
			cout<<"年龄："<<stu->studentArray[i].m_Age<<"\t";
			cout<<"地址："<<stu->studentArray[i].m_Add<<"\t";
			cout<<"电话："<<stu->studentArray[i].m_Phone<<"\t"<<endl;
		}	
	}
	system("pause");
	system("cls");
}
//判断学生信息是否存在
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
//查找学生学号
void findStudent(studentSystem *stu)
{
	cout<<"请输入要查找学生的学号"<<endl;
	string number;
	cin>>number;
	int ret=isExist(stu,number);

	if (ret!=-1)
	{
		cout<<"学号："<<stu->studentArray[ret].m_number<<"\t";
		cout<<"姓名："<<stu->studentArray[ret].m_Name<<"\t";
		cout<<"性别："<<(stu->studentArray[ret].m_Sex==1?"男 ":"女")<<"\t";
		cout<<"年龄："<<stu->studentArray[ret].m_Age<<"\t";
		cout<<"地址："<<stu->studentArray[ret].m_Add<<"\t";
		cout<<"电话："<<stu->studentArray[ret].m_Phone<<endl;
	}
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}
//删除学生信息
void deleteStudent(studentSystem *stu)
{
	cout<<"请输入要删除学生的学号"<<endl;
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
		cout<<"删除成功"<<endl;
	}
	else
	{
		cout<<"没有此人删除失败"<<endl;
	}
	system("pause");
	system("cls");
}
//修改学生信息
void modifyStudent(studentSystem *stu)
{
	cout<<"请输入修改学生的学号"<<endl;
	string number;
	cin>>number;
	int ret=isExist(stu,number);
	if (stu->m_Size==MAX)
	{
		cout<<"通讯录已满，无法添加";
		return ;
	} 
	else
	{
		cout<<"请问输入学生姓名"<<endl;
		cin>>stu->studentArray[ret].m_Name;

		cout<<"请输入学生性别"<<endl;
		printf("1--男\n");
		printf("2--女\n");
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
				cout<<"输入有误请重新输入"<<endl;
		}

		cout<<"请输入学生年龄"<<endl;
		cin>>stu->studentArray[ret].m_Age;

		cout<<"请输入学生学号"<<endl;
		cin>>stu->studentArray[ret].m_number;

		cout<<"请输入学生地址"<<endl;
		cin>>stu->studentArray[ret].m_Add;

		cout<<"请输入学生电话"<<endl;
		cin>>stu->studentArray[ret].m_Phone;

		cout<<"修改成功！"<<endl;
	}
	system("pause");
	system("cls");
}
//清空管理系统
void clearStudent(studentSystem *stu)
{
	stu->m_Size=0;
	cout<<"清空成功"<<endl;
	system("pause");
	system("cls");
}
//显示菜单
void showMenu()
{
	printf("********学生管理系统*******\n");
	printf("***** 1、添加学生信息 *****\n");
	printf("***** 2、删除学生信息 *****\n");
	printf("***** 3、查找学生信息 *****\n");
	printf("***** 4、显示学生信息 *****\n");
	printf("***** 5、修改学生信息 *****\n");
	printf("***** 6、清空学生信息 *****\n");
	printf("***** 0、退出管理系统 *****\n");
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
		case 1://1、添加学生信息
			addStudent(&stu);
			break;
		case 2://2、删除学生信息 
			deleteStudent(&stu);
			break;
		case 3://3、查找学生信息
			findStudent(&stu);
			break;
		case 4://4、显示学生信息
			showStudent(&stu);
			break;
		case 5://5、修改学生信息
			modifyStudent(&stu);
			break;
		case 6://6、清空学生信息
			clearStudent(&stu);
			break;
		case 0://0、退出管理系统
			printf("欢迎下次使用！\n");
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