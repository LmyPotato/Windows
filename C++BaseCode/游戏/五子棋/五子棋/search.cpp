//#include "search.h"
//
//void search(int search_i,int search_j)
//{
//	int search=0;
//	White_Black_Circle WBC[4]={0};
//	//���ϲ���
//	for (search=0;search_i-search>0;search++)
//	{
//		if (wbc[search_i-search][search_j].black==1)
//		{
//			WBC[0].num++;
//		}
//	}
//
//	//���²���
//	for (search=0;search_i+search<Hight;search++)
//	{
//		if (wbc[search_i+search][search_j].black==1)
//		{
//			WBC[0].num++;
//		}
//	}
//
//	//�������
//	for (search=0;search_j-search>0;search++)
//	{
//		if (wbc[search_i][search_j-search].black==1)
//		{
//			WBC[1].num++;
//		}
//	}
//	//���Ҳ���
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
//	White_Black_Circle B_Line[10]={0};//�����¼��ɫ������
//	White_Black_Circle B_Row[10]={0};//�����¼��ɫ������
//	White_Black_Circle B_Bias[10]={0};//�����¼��ɫб������
//
//	White_Black_Circle W_Line[10]={0};//�����¼��ɫ������
//	White_Black_Circle W_Row[10]={0};//�����¼��ɫ������
//	White_Black_Circle W_Bias[10]={0};//�����¼��ɫб������
//
//	for (i=0;i<Hight;i++)
//	{
//		for (j=0;j<Width;j++)
//		{
//			//ͳ�ƺ�ɫ��
//			if (wbc[i][j].black==1)
//			{
//				B_Line[i].num++;
//			}
//			//ͳ�ư�ɫ��
//			if (wbc[i][j].white==1)
//			{
//				W_Line[i].num++;
//			}
//		}
//		//����г���5������ʤ��
//		if (B_Line[i].num>=5)
//		{
//			Black_IsShow=1;
//		}
//		if (W_Line[i].num>=5)
//		{
//			White_IsShow=1;
//		}
//		//ͳ����
//		for (k=0;k<Width;k++)
//		{
//			//��
//			if (wbc[k][i].black==1)
//			{
//				B_Row[i].num++;
//			}
//			//��
//			if (wbc[k][i].white==1)
//			{
//				W_Row[i].num++;
//			}
//		}
//		//����г���5������ʤ��
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
//	//�������ж�б��
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