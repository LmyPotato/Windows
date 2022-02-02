#define _CRT_SECURE_NO_DEPRECATE//VS不建议使用传统库函数
#include<stdio.h>//std 标准 i input 输入 o output 输出
#include<stdlib.h>//malloc free
#include<time.h>

/*
1、利用Arr【0】保存Arr【1】，作为key值（用来和其他值比较）
2、从右往左找：如果low的值小于high && key>=high：继续找
3、从左往右找：如果low的值小于high && key<=high：继续找
4、循环一遍后，low的值为枢轴值，利用tmp=low，将数组分成两份
*/

int Partition(int Arr[], int low, int high)
{
	Arr[0] = Arr[low];//将第一个元素，作为key值，来和其他数比较

	while (low < high)
	{
		while (low < high&&Arr[high] >=Arr[0])
			high--;
		Arr[low] = Arr[high];//找到第一个比Arr【0】值小的数，交换
		while (low < high&&Arr[low] <= Arr[0])
			low++;
		Arr[high] = Arr[low];//找到第一个比Arr【0】值大的数，交换
	}
	Arr[low] = Arr[0];
	return low;
}

void qSort(int Arr[], int low, int high)
{
	int tmp;//保存枢轴值
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
//程序入口
int main()
{
	int i = 0;
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	srand((unsigned int)time(0));

	for (i = 1; i < 10; i++)//随机生成9个数
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

	system("pause");//按任意键暂停
	return EXIT_SUCCESS;//返回正常退出值
}