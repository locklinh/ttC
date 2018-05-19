#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int cu()
{
	return 15;
}
int main()
{
	int m,n;
	int **A;
	printf("nhap m:"); scanf("%d",&m);
	printf("\n nhap n:"); scanf("%d",&n);
	A=(int**)malloc(m*sizeof(int));
	for (int i=0;i<m;i++)
	{
		A[i]=(int*)malloc(n*sizeof(int));
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\nNhap phan tu A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("  %d",A[i][j]);
		}
		printf("\n");
		
	}
	int x=cu();
	printf("%dcm",x);
}
