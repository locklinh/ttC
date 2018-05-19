#include<stdio.h>
#include<string.h>
void nhap(char a[])
{
	
	printf("nhap xau:");
	fflush(stdin);
	gets(a);
}
void timgiua(char a[],char b[])
{
	int h=0,i,j,kt;
	
	for(  i=0;i<strlen(a)-1;i++)
	{
		
		for(  j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])
			{
				kt=1;
				
			for(int k=i+1;k<j;k++ )
			{
			b[h]=a[k];
			h++;	
				}
				
				break;
				
			}
		
		
		}
				if(a[i]==a[j]) break;
	}

	printf("xau o giua la:");
	for( i=0;i<strlen(b);i++)
	{
		printf("%c",b[i]);
			}
		
	

}

main()
{
	char a[100];
	char b[100]={};
	nhap(a);
	timgiua(a,b);

}
