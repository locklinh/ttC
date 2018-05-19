#include<stdio.h>
#include<math.h>
int main(){
	int i ;
	float s=0;
	 i=1;
	while (s<2.101999)
	{(s +=(float)1/(2*i-1));
	i++;}
	
	printf ("\n so nguyen duong n lon nhat:%d",i-1);

	
		
	
	
	return 0;
}
