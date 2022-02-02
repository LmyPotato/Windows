#include<stdio.h>
#include <stdlib.h>

//打印函数
void print(int *arr,int len)
{
	int i=0;

	for (i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void printBlank(int blank)
{
	if (blank==0||blank<0)
	{
		return;
	}
	while (blank>0)
	{
		printf(" ");
		blank--;
	}
}

void printNum(int num,int Enter)
{
	printf("%d\n",num);
	if (Enter==0||Enter<0)
	{
		return;
	}
	while (Enter>0)
	{
		printf("\n");
		Enter--;
	}
}

//直接插入排序
void inSort(int s[],int n)
{
	int i=0,j=0;
	for (i=2;i<=n;i++)
	{
		s[0]=s[i];
		j=i-1;
		while(s[0]<s[j])
		{
			s[j+1]=s[j];
			j--;
		}
		s[j+1]=s[0];
	}
}

//选择排序
void selectSort(int *arr,int len)
{
	int i=0,j=0;
	int Max=0;
	int temp=0;

	for (i=0;i<len;i++)
	{
		Max=i;
		for (j=i+1;j<len;j++)
		{
			if (arr[Max]>arr[j])
			{
				Max=j;
			}
		}
		if (i!=Max)
		{
			temp=arr[Max];
			arr[Max]=arr[i];
			arr[i]=temp;
		}
	}
}

//冒泡排序
void bubbleSort(int *arr,int len)
{
	int i=0,j=0;
	int temp=0;
	for (i=0;i<len-1;i++)
	{
		for (j=0;j<len-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

//二分查找 
/*
查找成功返回位置
查找失败返回-1
*arr 指针
len 数组长度
key 查找的数
*/
int binarySearch(int *arr,int len,int key)
{
	printf("查找的数为:%d\n",key);
	int count=0;
	int low=0;
	int high=len-1;
	int mid=0;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (key>arr[mid])
		{
			low=mid+1;
		}
		else if (key<arr[mid])
		{
			high=mid-1;
		}
		else if (key==arr[mid])
		{
			count++;
			return mid+1;
		}
	}
	if (count==0)
	{
		printf("查找失败\n");
	}
	return -1;
}

//顺序查找函数
/*
arr[]-传入数组
len-数组长度
key-查找的数
找到-返回该数数组的位置
未找到-返回-1
*/
int search_Seq(int arr[],int len,int key)
{
	printf("查找的数为:%d\n",key);
	int i=0;
	for (i=0;i<len-1;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	//printNum(3,5);
	int a[]={9,3,5,7,8,1,0,6,4,2};
	int len=sizeof(a)/sizeof(a[0]);

	////selectSort(a,len);
	//bubbleSort(a,len);
	//printf("原数组为:");
	//print(a,len);
	//printf("\n");
	//int temp=binarySearch(a,len,11);
	//printf("查找位置在第%d位\n",temp);

	int temp=search_Seq(a,len,100);
	printNum(temp,0);
	system("pause");
	return 0;
}