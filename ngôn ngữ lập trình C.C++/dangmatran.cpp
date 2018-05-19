#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhap(int A[][30],int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("\n phan tu A[%d][%d] :",i,j);
			scanf("\n %d",&A[i][j]);
		}
	}
}
void xuat (int A[][30],int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf (" %3d",A[i][j]);
}
 printf("\n");
}
}
void chuyenvi(int A[][30],int B[][30],int n, int m)
{
	int i,j ;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
	B[j][i]=A[i][j];
		}		
	}
}
void xuatmatran (int B[][30],int m, int n)
{
	for (int j=0;j<m;j++)
	{
		for (int i=0;i<n;i++)
		{
			printf("%3d",B[j][i]);
		}
		printf("\n");
	}
}
void tinhtong(int A[][30],int n,int m)
{
	int i,j;
	int s;
	s=0;
	for (i=0;i<n;i++) 
	{
		for (j=0;j<m;j++)
		{
			if (i==j)
			{
				s+= A[i][j];
			}
		}
	}
printf ("\n %d",s);
}
void xoahangcot(int A[30][30], int n, int m)
{
	int h,c ;
	printf("\n nhap vao hang can xoa : "); scanf("%d",&h);
	printf ("\n nhap vao cot can xoa : "); scanf("%d",&c);
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++)
	{
		if (i>=h)
		{
		if (j>=c)
		{
			A[i][j]=A[i+1][j+1];
		}
		else 
		A[i][j]=A[i+1][j];
		}
		else
		if (j>=c)
		A[i][j]=A[i][j+1];
	}
	
}
void nhan2matran(int A[][30],int C[][30],int n,int m)
{  ;
	for (int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	 { C[i][j]=0;
	 	for (int h=0;h<m;h++)
	 	{
	 		C[i][j]+=A[i][h]*A[h][j];
	 	}
	 }
}
int main ()
{
	int n,m ;
	int A[30][30];
	int B[30][30];
	int C[30][30];
	printf("\n nhap vao so hang n= "); scanf("\n %d",&n);
printf("\n nhap vao so cot m ="); scanf("\n %d",&m);
	nhap(A,n,m);
	printf("\n ma tran vua nhap la: ");
	printf("\n");
	xuat (A,n,m);
//	inkq (A,n,m);
	printf ("\n tong cac phan tu tren duong cheo chinh :");
	printf("\n");
	tinhtong(A,n,m);
	
	chuyenvi(A,B,n,m);
	printf("\n matran chuyen vi la : ");
	printf("\n");
	//xuatmatran(B,m,n);
	xuat(B,n,m);
	xoahangcot(A,n,m);
	xuat(A,n-1,m-1);
	nhan2matran (A,C,n,m);
	printf ("\n tich hai ma tran A*A la :");
	xuat(C,n,m);
	return 0;
	
	
}
