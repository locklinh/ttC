#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{
	int n;
	printf ("\n nhap vao vecto co chieu la n = ");
	scanf("%d",&n);
	int *A;
	A= new int [n];
	int *B;
	B= new int [n];
	
	printf("\n nhap vao vecto A :");
	for(int i=0;i<n;i++)
	{
		printf("A[%d=]",i);
		scanf("%d",&A[i]);
	}
	printf("\n nhap vao vecto B :");
	for(int j=0;j<n;j++)
	{
		printf("B[%d=]",j);
		scanf("%d",&B[j]);
	}
	//for(int i=0;i<n;i++)
	//{
	//	printf("A[%d=] = %d",i,A[i]);
		
	//}
	//for(int j=0;j<n;j++)
	//{
	//	printf("B[%d=]= %d",j,B[j]);
		
//	}
int *C;
C= new int [n];
 int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				C[k]= (A[i]+B[j]);
			printf("\n C[%d]= %d",k,&C[k]);
			k++;
			}
		}
			for(int k=0;k<n;k++)
			{
				printf("%d",C[k]);
			}
			
			}	
			
			
				
	return 0;
	
}
