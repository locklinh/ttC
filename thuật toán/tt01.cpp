#include<iostream>
using namespace std;
void mang1chieu (){
	int n=0;
	int A[100];
	cout<<" nhap vao SO phan tu cua A : ";
	cin>>n;
	cout<<"nhap vao cac phan tu cua A \n";
	for (int i=0;i<n;i++)
	{
		cout<<"moi nhap vao phan tu A["<<i<<"]: ";
		cin>>A[i];
	
	}
	cout <<" mang vua nhap la \n";
	cout<<"A[n]= { ";
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<";";
		
	}
	cout<<"}";
	//return 0;
}
int main(){
	int m,n;
	int A[100][100];
	cout<<"moi nhap voa so hang cua matran ";
	cin>>n;
	cout<<"nhap vao so cot cua matran ";
	cin>>m;
	cout<<"nhap vao tung phan tu cua mang \n";
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			cout<<"A["<<i<<"]"<<j<<"]=";
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<A[i][j] << "   ";
		}
		cout<<"\n";
	}
	return 0 ;
}
