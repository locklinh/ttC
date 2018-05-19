#include<stdio.h>
#include<conio.h>
int main(){
	
int n, A[50];
FILE *fp;
 fp = fopen("daysothuc.txt","r");
  if (fp==NULL)
    {
    	perror("loi khi doc tep");
    	return 0;
    }
   // printf ("\nnhap vao gia tri n= "); scanf("%d",&n);
    fscanf (fp,"%d",&n);
    
    //printf("\n");
    for(int i=0;i<n;i++){
    	fscanf(fp," %5.2d",&A[i]);
    	 fclose(fp);
    	 printf ("\n %d",n);
    	 for (int i=0;i<n;i++)
    	 {
    	 	printf ("\n %5.2d",A[i]);
    	 }
    	getch();
    return 0; 
    }}
