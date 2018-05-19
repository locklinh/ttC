#include<stdio.h>
#include<math.h>
#include<conio.h>
int NT(int x)
{
	if(x<2)
	{
		return 0 ;
		
	}
	for (int i=0; i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
	
}
void SNTnhohonn(int n )
		{
			for(int i=0;i<=n;i++)
			{
				if(NT(i))
				{
					printf("\n so ngto la %d",i);
				}
			}
		}
	int main()
	{
		int n;
		printf("\n nhap vao n: ");
		scanf("%d",&n);
		SNTnhohonn(n);
	}
	
	
	
	
	
	

