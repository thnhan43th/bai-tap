#include<stdio.h>
#define MAX 100

void NhapMang (int a[MAX][MAX], int D, int C);
void XuatMang (int a[MAX][MAX],int D, int C);
int tinhTong (int a[MAX][MAX],int D, int C);
void inTongTrenCacCot (int a[MAX][MAX],int D, int C);
void inTongTrenCacHang (int a[MAX][MAX],int D, int C);
void inCacSoAm (int a[MAX][MAX],int D, int C);
void soLuongAmTrenCot (int a[MAX][MAX],int D, int C);
void soLuongAmTrenCot (int a[MAX][MAX],int D, int C);
int timMaxAm (int a[MAX][MAX], int D, int C);

int main()
{
	int a[MAX][MAX], D, C;
	int kiemTraSoHoanHao(int n);
	
	printf(" nhap So dong cho mang 2 chieu:");
	scanf ("%d", &D);
	printf("\n nhap so cot cho mang 2 chieu:");
	scanf ("%d", &C);
	
	NhapMang ( a, D, C);
	printf ("\nmang vua nhap la:");
	XuatMang (a, D, C);
	
	int tong=tinhTong (a, D, C);
	printf ("\ntong cac phan tu trong mang la: %d", tong);
	
	printf ("\ntong tren tung cot la:");
	inTongTrenCacCot ( a, D, C);
	
	printf ("\ntong tren tung hang  la:");
	inTongTrenCacHang (a, D, C);
	
	printf ("\nso am trong mang la:") ;
	inCacSoAm (a, D, C);
	
	printf ("\n am tren tung cot la:");
	soLuongAmTrenCot (a, D,  C);
	
	int kqMaxAm=timMaxAm (a, D, C);
	printf ("\nso am lon nhat trong mang la: %d", kqMaxAm);
	
	return 0;
}

void NhapMang (int a[MAX][MAX], int D, int C)
{
	for (int i=0; i<D; i++)
		for (int j=0; j<C; j++)
		{
			printf("nhap a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
}

void XuatMang (int a[MAX][MAX],int D, int C)
{
	for (int i=0; i< D; i++)
		{
			printf("\n");
			for (int j=0;j<C; j++)
			printf ("\t%d", a[i][j]);
		}
}

int tinhTong (int a[MAX][MAX],int D, int C)
{
	int tong=0;
		for (int i=0;i<D; i++)
			for (int j=0;j < C; j++)	
			{
				tong+=a[i][j];
			}	
	return tong;		
}

void inTongTrenCacCot (int a[MAX][MAX],int D, int C)
{
	for (int j=0;j < C; j++)
	{
		int tong =0;
		for (int i =0; i<D; i++)
			tong= tong +a[i][j];
		printf ("\n tong cot %d:%d",j, tong);
	}
		
		
}

void inTongTrenCacHang (int a[MAX][MAX],int D, int C)
{
	for (int i =0; i<D; i++)
	{
		int tong =0;
		for (int j=0;j < C; j++)
			tong= tong +a[i][j];
		printf ("\n tong cot %d:%d",i, tong);
	}		
}

void inCacSoAm (int a[MAX][MAX],int D, int C)
{
	for (int i=0; i<D;i++)
	{
		for (int j=0;j < C; j++)
			if (a[i][j]<0)
				printf ("\t%d",a[i][j]);
	}
}

void soLuongAmTrenCot (int a[MAX][MAX],int D, int C)
{
	for (int j=0;j < C; j++)
	{
		int  soLuongAm = 0;
		for (int i =0; i<D; i++)
			if (a[i][j]<0)
			soLuongAm= soLuongAm+1;
		printf ("\n tong cot %d:%d",j,soLuongAm );
	}
}

int timMaxAm (int a[MAX][MAX], int D, int C)
{
	int kqMaxAm =0;
	for (int i=0; i<D;i++)
		for (int j=0;j < C; j++)
		{
		
			if (a[i][j]<0)
			kqMaxAm=a[i][j];
			if(kqMaxAm >a[i][j])
			kqMaxAm=a[i][j];
			
		}
	return kqMaxAm;
}
