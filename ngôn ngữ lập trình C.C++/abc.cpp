#include<stdio.h>
#include<math.h>
int main (){
	int A[4]={1,2,3,4};
	A[5]=0;
	
for (int i=0;i<4;i++){
	A[5]+= A[i];
}
printf (" A[5]= ",A[5]);
return 0 ;
}

