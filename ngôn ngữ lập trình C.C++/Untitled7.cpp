#include<stdio.h>
#include<conio.h>
int giaithua(int n)
{
	int i,gt=1;
	for(i=1;i<=n;i++)
	{
		gt*=i;
	}
	return gt ;
}
int main()
{
	int a;
	a=giaithua(5);
	printf("%d",a);
}
