#include<stdio.h>
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std ;
void nhap(int A[][30], int n,int m)
{
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++)
	{
	
	cout<<"\n nhap vao ma tran A["<<i<<"] ["<<j<<"]= ";
	cin>>A[i][j];
	
 
}
	}
	
}

void sort_asc(int A[],int n);
int main ()
{int n,m;
int A[30][30];
	nhap(A,n,m);
	return 0;
}

