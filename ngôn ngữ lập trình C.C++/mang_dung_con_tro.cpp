#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Nhap so phan tu cua vector:"); scanf("%d",&n);
	int *A=(int*)malloc(n*sizeof(int)),*B=(int*)malloc(n*sizeof(int)),*C=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\nNhap gia tri phan tu A[%d]=",i); scanf("%d",&A[i]);
		printf("Nhap gia tri phan tu B[%d]=",i); scanf("%d",&B[i]);
	}
	// tinh tong hai vecto
	for(i=0;i<n;i++)
	{
		C[i]=A[i]+B[i];
		
	}
	printf("\n Tong vector A+B la:     C=(");
	
	for(i=0;i<n;i++)
	{
		printf("%d,",C[i]);
}
	printf(")");
// tinh tich vo huong
	for(int j =0;j<n;j++)
	{
		C[j]=A[j]*B[j];
	}
	printf("\n Tich vector A.B la:     C=(");
	for(int j=0;j<n;j++)
	{
		printf("%d,",C[j]);
	}
	printf(")");
	//tinh khoang cach
	float d, s;
	s=0;
for (int i=0;i<n;i++)
{
 s+= ((A[i]-B[i])*(A[i]-B[i]));
}
	d= (float) sqrt(s);
	printf("\n khoang cach giua A va B la :  d= %f",d);
	
	
	
	return 0;
}
