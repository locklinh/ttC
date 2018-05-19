#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	float A[100];
	int n;
	cin>>n;
	//nhap vao mang 1 chieu n phan tu
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	//in ra mnag n phan tu
	for(int i=0;i<n;i++){
		cout<<A[i];
	}
	printf("in ra ",&A[2]-&A[1]);
	return 0;
}
