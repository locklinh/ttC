#include<stdio.h>
#include<string.h>
#include<conio.h>
 
 int main()
 { int n;
 char *st[100];
 	printf("\n nhap vao so xau :"); scanf("%d",&n);
 	fflush(stdin);
 	for(int i=0;i<n;i++){
 		printf("\n nhap vao xau thu %d :",i); scanf("%d",&st[i]);
 	}
 	for(int i=0;i<n;i++){
 		printf("%d \n",st[i]);
 	}
 	getch();
 	return 0;
 }
