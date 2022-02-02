#define _CRT_SECURE_NO_DEPRECATE//VS������ʹ�ô�ͳ�⺯��
#include<stdio.h>//std ��׼ i input ���� o output ���
#include<stdlib.h>//malloc free
#include<time.h>

/*
1������Arr��0������Arr��1������Ϊkeyֵ������������ֵ�Ƚϣ�
2�����������ң����low��ֵС��high && key>=high��������
3�����������ң����low��ֵС��high && key<=high��������
4��ѭ��һ���low��ֵΪ����ֵ������tmp=low��������ֳ�����
*/

int Partition(int Arr[], int low, int high)
{
	Arr[0] = Arr[low];//����һ��Ԫ�أ���Ϊkeyֵ�������������Ƚ�

	while (low < high)
	{
		while (low < high&&Arr[high] >=Arr[0])
			high--;
		Arr[low] = Arr[high];//�ҵ���һ����Arr��0��ֵС����������
		while (low < high&&Arr[low] <= Arr[0])
			low++;
		Arr[high] = Arr[low];//�ҵ���һ����Arr��0��ֵ�����������
	}
	Arr[low] = Arr[0];
	return low;
}

void qSort(int Arr[], int low, int high)
{
	int tmp;//��������ֵ
	if (low < high)
	{
		tmp = Partition(Arr, low, high);
		qSort(Arr, low, tmp-1);
		qSort(Arr, tmp+1, high);
	}
}

void quickSort(int Arr[], int low, int high)
{
	qSort(Arr, low, high);
}
//�������
int main()
{
	int i = 0;
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	srand((unsigned int)time(0));

	for (i = 1; i < 10; i++)//�������9����
	{
		arr[i] = rand() % 100;
	}
	for (i = 1; i < len; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	printf("----------------------------\n");

	quickSort(arr, 1, len-1);

	for (i = 1; i < len; i++)
	{
		printf("arr[%d]=%d\n",i, arr[i]);
	}

	system("pause");//���������ͣ
	return EXIT_SUCCESS;//���������˳�ֵ
}