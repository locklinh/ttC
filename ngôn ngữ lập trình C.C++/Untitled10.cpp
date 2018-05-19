#include<stdio.h>
#include<math.h>
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
		void SNTnhohonN(int n )
		{
			for(int i=2;i<=n;i++)
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
		scanf("%d",n);
		void SNTnhohonN(int n );
	}
	
	
	
	
	

