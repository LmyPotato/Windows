#include<iostream>
using namespace std;
//抽象的CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate()=0;
};

//抽象的显卡
class VideoCard
{
public:
	virtual void display()=0;
};

//抽象内存条
class Memory
{
public:
	//抽象存储函数
	virtual void storage()=0;
};
//电脑类
class Computer
{
public:
	Computer(CPU *cpu,VideoCard *vc,Memory *mem)
	{
		m_cpu=cpu;
		m_vc=vc;
		m_mem=mem;
	}
	//提供工作函数
	void work()
	{
		//让零件工作起来
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	//提供析构函数 释放3个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu=NULL;
		}
		//释放显卡零件
		if (m_vc!=NULL)
		{
			delete m_vc;
			m_vc=NULL;
		}
		//释放内存条零件
		if (m_mem!=NULL)
		{
			delete m_mem;
			m_mem=NULL;
		}
	}

private:
	CPU *m_cpu;//CPU
	VideoCard *m_vc;//显卡
	Memory *m_mem;//内存条
};
//具体厂商
//Intel
class IntelCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout<<"Intel的CPU开始计算了！"<<endl;
	}
};

class IntelViodeoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Intel的显卡开始显示了！"<<endl;
	}
};

class IntelMemory:public Memory
{
public:
	virtual void storage()
	{
		cout<<"Intel的内存条开始存储！"<<endl;
	}
};

//Lenovo厂商
class LenovoCPU:public CPU
{
public:
	virtual void calculate()
	{
		cout<<"Lenovo的CPU开始计算了！"<<endl;
	}
};

class LenovoViodeoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout<<"Lenovo的显卡开始显示了！"<<endl;
	}
};

class LenovoMemory:public Memory
{
public:
	virtual void storage()
	{
		cout<<"Lenovo的内存条开始存储！"<<endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU *intelCpu=new IntelCPU;
	VideoCard *intelCard=new IntelViodeoCard;
	Memory *intelMem=new IntelMemory;

	//创建第一台电脑
	Computer *computer1=new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;

	cout<<"------------------------"<<endl;
	cout<<"第二台电脑开始工作"<<endl;
	//第二台电脑组装
	Computer *computer2=new Computer(new LenovoCPU,new LenovoViodeoCard,new LenovoMemory);
	computer2->work();
	delete computer2;

	cout<<"------------------------"<<endl;
	cout<<"第三台电脑开始工作"<<endl;
	//第三台电脑组装
	Computer *computer3=new Computer(new LenovoCPU,new IntelViodeoCard,new LenovoMemory);
	computer3->work();
	delete computer3;

}

int main()
{
	test01();

	system("pause");
	return 0;
}