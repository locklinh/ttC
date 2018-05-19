#include<stdio.h>
#include<math.h>
int main()
{
	int n=1;
	float S;
	S=0;
	while(S<2000)
	{
		S+=(float)exp(n)-1999*(float)log10(n);
		n++;
	}
	printf("\n %d",n-1);
}
