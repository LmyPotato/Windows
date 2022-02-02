//#include<iostream>
//
//using namespace std;
//
//template<class T>
//void MySwap(T&a, T&b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void printArr(T arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len;i++)
//	{
//		cout <<arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template <typename T>
//void MySort(T arr[], int len)
//{
//	int i, j;
//	int min;
//	for (i = 0; i < len;i++)
//	{
//		min = i;
//		for (j = i + 1; j < len;j++)
//		{
//			if (arr[j]<arr[min])
//			{
//				min = j;
//			}
//		}
//		if (min!=i)
//		{
//			MySwap(arr[i], arr[min]);
//		}
//	}
//}
//
//void test02()
//{
//	int intArr[] = { 3, 5, 6, 8, 9, 2, 85 };
//	int num=sizeof(intArr)/sizeof(intArr[0]);
//
//	MySort(intArr, num);
//	printArr(intArr, num);
//	cout << endl;
//}
//
//
//void test01()
//{
//	char charArr[] = "bcadfe";
//
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//
//	MySort(charArr, num);
//	printArr(charArr, num);
//
//}
//
//int main()
//{
//	test02();
//	test01();
//
//
//	system("pause");
//	return 0;
//}