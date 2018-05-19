#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *A,n;
	do{
			printf("nhap n:");scanf("%d",&n);
	}while(n<10||n>30);
	A=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("\nPhan tu A[%d]:",i);scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("\n %d",A[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf ("\nday so chan A[%d]", i ); scanf ("%d",A);
	}
	return 0;
}
