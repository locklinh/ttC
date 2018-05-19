#include<stdio.h>
#include<conio.h>
int main(){
	FILE*f;
	int i,n;
	f= fopen("dayso.txt","wt");
	if (f==NULL)
	{
		perror("loi khi ghi tep");
		return 1;
		
	}
	fprintf(f,"cac dong");
	for (i=0;i<n;i++)
	{
		fprintf(f,"\n dong %2d",i);
	}
	getch();
	fclose(f);
	return 0 ;
}
