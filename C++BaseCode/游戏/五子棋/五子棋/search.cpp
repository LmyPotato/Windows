//#include "search.h"
//
//void search(int search_i,int search_j)
//{
//	int search=0;
//	White_Black_Circle WBC[4]={0};
//	//向上查找
//	for (search=0;search_i-search>0;search++)
//	{
//		if (wbc[search_i-search][search_j].black==1)
//		{
//			WBC[0].num++;
//		}
//	}
//
//	//向下查找
//	for (search=0;search_i+search<Hight;search++)
//	{
//		if (wbc[search_i+search][search_j].black==1)
//		{
//			WBC[0].num++;
//		}
//	}
//
//	//向左查找
//	for (search=0;search_j-search>0;search++)
//	{
//		if (wbc[search_i][search_j-search].black==1)
//		{
//			WBC[1].num++;
//		}
//	}
//	//向右查找
//	for (search=0;search_j+search<Width;search++)
//	{
//		if (wbc[search_i][search_j+search].black==1)
//		{
//			WBC[1].num++;
//		}
//	}
//
//	if (WBC[0].num>=5)
//	{
//		IsShow=1;
//	}
//
//}





//void Calculate()
//{
//	int i,j,k,s;
//	White_Black_Circle B_Line[10]={0};//定义记录黑色列棋子
//	White_Black_Circle B_Row[10]={0};//定义记录黑色行棋子
//	White_Black_Circle B_Bias[10]={0};//定义记录黑色斜线棋子
//
//	White_Black_Circle W_Line[10]={0};//定义记录白色列棋子
//	White_Black_Circle W_Row[10]={0};//定义记录白色行棋子
//	White_Black_Circle W_Bias[10]={0};//定义记录白色斜线棋子
//
//	for (i=0;i<Hight;i++)
//	{
//		for (j=0;j<Width;j++)
//		{
//			//统计黑色列
//			if (wbc[i][j].black==1)
//			{
//				B_Line[i].num++;
//			}
//			//统计白色列
//			if (wbc[i][j].white==1)
//			{
//				W_Line[i].num++;
//			}
//		}
//		//如果列超过5个棋子胜利
//		if (B_Line[i].num>=5)
//		{
//			Black_IsShow=1;
//		}
//		if (W_Line[i].num>=5)
//		{
//			White_IsShow=1;
//		}
//		//统计行
//		for (k=0;k<Width;k++)
//		{
//			//黑
//			if (wbc[k][i].black==1)
//			{
//				B_Row[i].num++;
//			}
//			//白
//			if (wbc[k][i].white==1)
//			{
//				W_Row[i].num++;
//			}
//		}
//		//如果行超过5个棋子胜利
//		if (B_Row[i].num>=5)
//		{
//			Black_IsShow=1;
//		}
//		if (W_Row[i].num>=5)
//		{
//			White_IsShow=1;
//		} 
//
//	}
//	//这里是判断斜线
//	for (i=0;i<Hight;i++)
//	{
//		for (k=0;k<=i;k++)
//		{
//			int temp=k;
//			if (wbc[i-k][k+temp].black==1) 
//			{
//				B_Bias[i].num++;
//			}
//		}
//		if (B_Bias[i].num>=5)
//		{
//			Black_IsShow=1;
//		}
//	}
//
//}