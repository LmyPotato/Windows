#include<iostream>
#include "workerManager.h"
using namespace std;


int main()
{
	//Worker *worker=NULL;
	//worker=new Employee(1,"张三",1);
	//worker->showInfo();
	//delete worker;

	//worker=new Manager(2,"李四",2);
	//worker->showInfo();
	//delete worker;

	//worker=new Boos(3,"王五",3);
	//worker->showInfo();
	//delete worker;

	//实例化管理者类
	WorkerManager wm;
	int choice=0;//用来存储用户的选项

	while (true)
	{
		//显示菜单
		wm.Show_Menu();

		cout<<"请输入你的选择:"<<endl;
		cin>>choice;

		switch(choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.Show_Emp();
			break;
		case 3://删除职工
			wm.Del_Emp();
				break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空职工
			wm.Clean_File();
			break;
		default:
			system("cls");
		}
	}
	system("pause");
	return 0;
}


