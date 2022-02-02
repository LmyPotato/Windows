#include"WorkerManager.h"

WorkerManager::WorkerManager()
{
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//读文件

	if (!ifs.is_open())
	{
		cout<<"文件不存在"<<endl;

		//初始化属性
		this->m_EmpNum=0;
		//初始化数组指针
		this->m_EmpArray=NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty=true;
		ifs.close();
		return;
	}

	//2.文件存在 数据为空
	char ch;
	ifs>>ch;
	if (ifs.eof())
	{
		//代表文件为空
		cout<<"文件为空"<<endl;
		//初始化属性
		this->m_EmpNum=0;
		//初始化数组指针
		this->m_EmpArray=NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty=true;
		ifs.close();
		return;
	}

	//3.当文件存在 且有数据
	int num=this->get_EmpNum();
	cout<<"职工人数为："<<num<<endl;
	this->m_EmpNum=num;

	//将记录判断置为假
	this->m_FileIsEmpty=false;

	//开辟空间
	this->m_EmpArray=new Worker *[this->m_EmpNum];
	//将文件中的数据存到数组中
	this->init_Emp();

	////测试代码
	//for (int i=0;i<this->m_EmpNum;i++)
	//{
	//	cout<<"职工编号："<<this->m_EmpArray[i]->m_Id
	//		<<" 姓名："<<this->m_EmpArray[i]->m_Name
	//		<<" 部门编号："<<this->m_EmpArray[i]->m_DeptId<<endl;
	//}
}

//展示菜单
void WorkerManager::Show_Menu()
{
	cout<<"**************************************"<<endl;
	cout<<"******** 欢迎使用职工管理系统！*******"<<endl;
	cout<<"*********** 0.退出管理程序 ***********"<<endl;
	cout<<"*********** 1.增加职工信息 ***********"<<endl;
	cout<<"*********** 2.显示职工信息 ***********"<<endl;
	cout<<"*********** 3.删除离职职工 ***********"<<endl;
	cout<<"*********** 4.修改职工信息 ***********"<<endl;
	cout<<"*********** 5.查找职工信息 ***********"<<endl;
	cout<<"*********** 6.按照编号排序 ***********"<<endl;
	cout<<"*********** 7.清空所有文档 ***********"<<endl;
	cout<<"**************************************"<<endl;
	cout<<endl;
}
//退出系统
void WorkerManager::ExitSystem()
{
	cout<<"欢迎下次使用"<<endl;
	system("pause");
	exit(0);//退出程序
}

void WorkerManager::Add_Emp()
{
	cout<<"请输入添加职工数量"<<endl;

	int addNum=0;//保存用户输入的数量
	cin>>addNum;

	if (addNum>0)
	{
		//添加新的空间大小
		int newSize=this->m_EmpNum+addNum;//新空间人数

		//开辟新空间
		Worker **newSpace=new Worker*[newSize];

		//将原来空间下数据拷贝到新空间下
		if (this->m_EmpArray!=NULL)
		{
			for (int i=0;i<this->m_EmpNum;i++)
			{
				newSpace[i]=this->m_EmpArray[i];
			}
		}
		//批量添加
		for (int i=0;i<addNum;i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dSelect;//部门选择

			cout<<"请输入第"<<i+1<<"个新职工编号："<<endl;
			cin>>id;

			cout<<"请输入第"<<i+1<<"个新职工姓名："<<endl;
			cin>>name;

			cout<<"请选择该职工岗位"<<endl;
			cout<<"1、普通职工"<<endl;
			cout<<"2、经理"<<endl;
			cout<<"3、老板"<<endl;
			cin>>dSelect;

			Worker *worker=NULL;
			switch(dSelect)
			{
			case 1:
				worker=new Employee(id,name,1);
				break;
			case 2:
				worker=new Manager(id,name,2);
				break;
			case 3:
				worker=new Boos(id,name,3);
				break;
			default:
				break;
			}
			//将创建职工 保存到数组
			newSpace[this->m_EmpNum+i]=worker;

		}
		//释放原有的空间
		delete[]this->m_EmpArray;

		//更改新空间指向
		this->m_EmpArray=newSpace;

		//更新新职工人数
		this->m_EmpNum=newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty=false;

		//提示添加成功
		cout<<"添加成功"<<addNum<<"名新职工"<<endl;

		//保存数据
		this->save();
	}
	else
	{
		cout<<"输入有误"<<endl;
	}
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);//用输入的方式打开文件

	//将每个人的数据写入文件中
	for (int i=0;i<this->m_EmpNum;i++)
	{
		ofs<<this->m_EmpArray[i]->m_Id<<" "
			<<this->m_EmpArray[i]->m_Name<<" "
			<<this->m_EmpArray[i]->m_DeptId<<endl;
	}
	//关闭文件
	ofs.close();
}

//统计文件人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//打开文件

	int id;
	string name;
	int dId;

	int num=0;
	while (ifs>>id&&ifs>>name&&ifs>>dId)
	{
		//统计人数变量
		num++;
	}
	return num;
}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int index=0;
	while (ifs>>id && ifs>>name && ifs>>dId)
	{
		Worker *worker=NULL;

		if (dId==1)//普通员工
		{
			worker=new Employee(id,name,dId);
		}
		else if(dId==2)//经理
		{
			worker=new Manager(id,name,dId);
		}
		else//老板
		{
			worker=new Boos(id,name,dId);
		}
		this->m_EmpArray[index]=worker;
		index++;
	}
	//关闭文件
	ifs.close();
}

//显示职工
void WorkerManager::Show_Emp()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout<<"文件不存在，或者记录为空!"<<endl;
	}
	else
	{
		for (int i=0;i<m_EmpNum;i++)
		{
			//利用多态调用数组
			this->m_EmpArray[i]->showInfo();
		}
	}
	//按任意键清屏
	system("pause");
	system("cls");
}

//判断职工是否存在
int WorkerManager::IsExist(int id)
{
	int index=-1;
	for (int i=0;i<this->m_EmpNum;i++)
	{
		if (this->m_EmpArray[i]->m_Id==id)
		{
			//找到职工
			index=i;
			break;
		}
	}
	return index;
}

//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout<<"文件不存在或者记录为空"<<endl;
	}
	else
	{
		cout<<"请输入删除职工的编号:"<<endl;
		int id=0;
		cin>>id;

		int index=this->IsExist(id);

		if (index!=-1)//职工存在，并且要删除
		{
			//数据前移
			for (int i=index;i<this->m_EmpNum-1;i++)
			{
				this->m_EmpArray[i]=this->m_EmpArray[i+1];
			}
			this->m_EmpNum--;//更新数组记录人员人数
			this->save();
			cout<<"删除成功"<<endl;
		}
		else
		{
			cout<<"删除失败，未找到职工"<<endl;
		}
	}
	//按任意键清屏
	system("pause");
	system("cls");
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout<<"文件不存在或者记录为空"<<endl;
	}
	else
	{
		cout<<"请输入修改的职工编号："<<endl;
		int id;
		cin>>id;

		int ret=this->IsExist(id);
		if (ret!=-1)
		{
			//查找编号成功
			delete this->m_EmpArray[ret];

			int newId=0;
			string newname="";
			int dSelect=0;

			cout<<"查到："<<id<<"号职工，请输入新职工编号："<<endl;
			cin>>newId;

			cout<<"请输入新的姓名："<<endl;
			cin>>newname;

			cout<<"请输入岗位："<<endl;
			cout<<"1.普通职工"<<endl;
			cout<<"2.经理"<<endl;
			cout<<"3.老板"<<endl;

			cin>>dSelect;

			Worker *worker=NULL;

			switch (dSelect)
			{
			case 1:
				worker=new Employee(newId,newname,dSelect);
				break;
			case 2:
				worker=new Manager(newId,newname,dSelect);
				break;
			case 3:
				worker=new Boos(newId,newname,dSelect);
				break;
			default:
				break;
			}
			//更新到数组中
			this->m_EmpArray[ret]=worker;

			cout<<"修改成功"<<endl;
			//保存到文件中
			this->save();
		}
		else
		{
			cout<<"修改失败"<<endl;
		}
	}
	//按任意键继续
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout<<"文件或者记录为空"<<endl;
	}
	else
	{
		cout<<"输入查找方式："<<endl;
		cout<<"1.按照职工编号查找："<<endl;
		cout<<"2.按照职工姓名查找："<<endl;

		int select=0;
		cin>>select;
		if (select==1)
		{
			//按照编号查
			int id;
			cout<<"请输入职工编号："<<endl;
			cin>>id;

			int ret=this->IsExist(id);
			if (ret!=-1)
			{
				//找到职工
				cout<<"查找成功！该职工信息如下："<<endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout<<"查找失败，查无此人"<<endl;
			}
		}
		else if(select==2)
		{
			//按照姓名
			string name;
			cout<<"请输入查找职工姓名"<<endl;
			cin>>name;

			//加入一个判断查找标志
			bool flag=false;//默认未找到

			for (int i=0;i<this->m_EmpNum;i++)
			{
				if (this->m_EmpArray[i]->m_Name==name)
				{
					cout<<"查找成功，职工编号为："
						<<this->m_EmpArray[i]->m_Id
						<<"号职工信息如下："<<endl;

					flag=true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag==false)
			{
				cout<<"查找失败，查无此人"<<endl;
			}
		}
		else
		{
			cout<<"输入选项有误，请重新输入"<<endl;
		}
	}
	//按任意键继续
	system("pause");
	system("cls");
}

//排序函数
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout<<"文件不存在或者记录为空"<<endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout<<"请选择排序方式："<<endl;
		cout<<"1.按照职工号进行升序"<<endl;
		cout<<"2.按照职工号进行降序"<<endl;

		int select=0;
		cin>>select;
		for (int i=0;i<m_EmpNum;i++)
		{
			int minOrMax=i;//声明最小值和最大值的下标
			for (int j=i+1;j<this->m_EmpNum;j++)
			{
				if (select==1)//升序
				{
					if (this->m_EmpArray[minOrMax]->m_Id>this->m_EmpArray[j]->m_Id)
					{
						minOrMax=j;
					}
				}
				else//降序
				{
					if (this->m_EmpArray[minOrMax]->m_Id<this->m_EmpArray[j]->m_Id)
					{
						minOrMax=j;
					}
				}
			}
			//判断一开始认定 最小值或者最大值 是不是计算的最小值或者最大值
			//如果不是交换数据
			if (i!=minOrMax)
			{
				Worker *temp=this->m_EmpArray[i];
				this->m_EmpArray[i]=this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax]=temp;
			}
		}
	cout<<"排序成功！排序后的结果为："<<endl;
	this->save();//排序后结果保存到文件中
	this->Show_Emp();
	}
}

//清空数据
void WorkerManager::Clean_File()
{
	cout<<"确定清空吗？"<<endl;
	cout<<"1.确定"<<endl;
	cout<<"2.返回"<<endl;

	int select=0;
	cin>>select;

	if (select==1)
	{
		//清空文件
		ofstream ofs(FILENAME,ios::trunc);//删除文件后重新创建
		ofs.close();

		if (this->m_EmpArray!=NULL)
		{
			//删除堆区的每个职工对象
			for (int i=0;i<this->m_EmpNum;i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i]=NULL;
			}
			//删除堆区数组指针
			delete[]this->m_EmpArray;
			this->m_EmpArray=NULL;
			this->m_EmpNum=0;
			this->m_FileIsEmpty=true;

		}
		cout<<"清空成功"<<endl;
	}

	system("pause");
	system("cls");
}

//析构函数
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray!=NULL)
	{
		for (int i=0;i<this->m_EmpNum;i++)
		{
			if (this->m_EmpArray[i]!=NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[]this->m_EmpArray;
		this->m_EmpArray=NULL;
	}
}