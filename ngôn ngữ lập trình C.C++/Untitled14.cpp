#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{
	int  n ,i,j ;
	
	printf("\n nhap vao gia tri n= ");	scanf("%d",&n);
	int **A;
	
	A= (int**)malloc(n* sizeof (int));
//	printf("\n nhap vao gia tri m= "); scanf("%d",&m);
	for (i=0;i<n;i++)
	
	{
		for (j=0;j<6;j++)
		{
		printf(" nhap vao phan tu A[%d][%d]=",i,j);
		scanf("%d",&A[i][j]);
	}
}
	for (i=0;i<n;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",A[i][j]);
		
		}
		printf("\n");
	}
	//tinh trung binh tung hang va in ra man hinh
	float s, s1;
	s=0; s1=0;
	for (i=0;i<n;i++)
	{
	s=0;
		for(j=0;j<6;j++)
		
		{
			
			s+=A[i][j];
		}
		s1=s/6;

		printf("\n tong s cua hang thu %d ",i);
		printf(":");
		printf(" %f ",s1);
		
		}
	// tinh do chenh lech nhiet do  giua 12h vs 0h in ra do chenh max
	 int max=0;
	 int k,tg;
	for(i=0;i<n;i++)
	{
		
		for (j=0;j<6;j++)
		{
			max=A[1][3]-A[0][0];
			k= A[j][3]-A[i][1];
			if(k>max)
			{
				max=tg;
				tg=k;
				k=max;
			}
		}
		printf(" do chenh lech max giua 0h va 12h la %d",max);
	}
	
			return 0 ;
	}
	
	



	
	
	
	
	
	
	
	


