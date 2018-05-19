#include<stdio.h>
#include<conio.h>
void nhap(int A[]){
	int n;
	printf ("\n nhap vao so n= "); scanf("%d",&n);
	if (n<=4||n>=50){
		printf ("\n vui long nhap lai n ");
		 printf ("\n nhap vao so n= ");
		scanf("%d",&n);
		//return 1 ;
	}
	for (int i=0;i<n;i++)
	{
		printf("\n  A[%d] = ",i);scanf("%d",&A[i]);
	}
};
void xuat(int A[])
{ int n,tg;
	for (int i=0;i<n;i++)
	{
		
		printf("%5d",A[i]);}}
		
int main ()
{
int A[50],n,i,B[8][8];
//printf("%d",n);
nhap(A);
xuat(A);
//chuyen(B);
FILE *fp;
 fp = fopen("daysothuc.txt","wt");
  if (fp==NULL)
    {
    	perror("loi khi doc tep");
    	return 1;
    }
    fprintf (fp,"%d",&n);
    
    printf("\n");
    for(i=0;i<n;i++);{
    	fscanf(fp," %5.2d",&A[i]);

	}

 getch();
    return 0; 
}
