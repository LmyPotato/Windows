#include<string>
#include<iostream>
using namespace std;

//string ���Һ��滻

//1������
void test01()
{
	string str1 = "abcdefgde";
	int pos= str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
	//rfind
	//rfind��find����
	//rfind����������� find�������Ҳ���
	pos = str1.rfind("de");
	cout << "rfind_pos1=" << pos << endl;
}
//2���滻
void test02()
{
	string str1 = "abcdefg";
	//��2��λ�ÿ�ʼ3���ַ� �滻��1111
	str1.replace(1, 3, "1111");
	cout << "str1=" << str1 << endl;

}



int main()
{
	test01();
	//test02();

	system("pause");
	return 0;
}
