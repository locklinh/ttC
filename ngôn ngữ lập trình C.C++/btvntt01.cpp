// DemoStack01.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include <iostream>

using namespace std;

int main()
{
	//Demo Stack bang mang
	int S[100]; //stack
	int top = -1;
	int n = 0; //n la so phan tu muon chen them vao stack

	//Nhap n
	cout << "Moi nhap vao so phan tu muon chen vao stack: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//lay ve 1 bien de chen vao stack
		int tg = 0;
		cout << "Moi nhap vao gia tri can chen: ";
		cin >> tg;

		//chen 1 phan tu vao mang
		if (top == -1)
		{
			//truong hop stack rong
			S[0] = tg;
			top = 0;
		}
		else
		{
			//truong hop stack khong rong
			S[top + 1] = tg;
			top = top + 1;
		}
	}

	//In stack
	cout << "Stack vua nhap vao la: \n";
	cout << "Top <-- {";
	//for (int i = top; i >= 0 ; i--)
	//{
	//	cout << S[i];
	//	//xu ly hinh thuc in ra
	//	if (i > 0)
	//	{
	//		cout << "; ";
	//	}
	//}

	int curr_top = top;

	while (top >= 0)
	{
		cout << S[top];
		//xu ly hinh thuc in ra
		if (top > 0)
		{
			cout << "; ";
		}

		top--;
	}
	cout << "} \n";
	top = curr_top;

	//xoa phan tu trong stack
	//xoa theo vi tri
	cout << "Moi nhap vao gia  tri cua phan tu can xoa : ";
	int k,h;
	cin >> k;
	cin>>h ;

	//kiem tra tinh hop le cua vi tri can xoa
	
	int A[100];
			int j=0;
			int const_top=top;
			
	for(float i=-1;i<const_top;i++){
		if (S[top]==k||S[top]==h){
			top--;
		}
		else {
			A[j]=S[top];
			j++;
			
		}
	}
			

				for (int m = j-1; m >=0; m--)
				{
					S[top] = A[m];
					top++;
				}

				//giam top cho dung chi so
				top--;
			

	

	//In stack
	cout << "Stack sau khi xoa gia tri " << h <<" va " << k << " la:\n";
	cout << "Top <-- {";

	while (top >= 0)
	{
		cout << S[top];
		//xu ly hinh thuc in ra
		if (top > 0)
		{
			cout << "; ";
		}

		top--;
	}
	cout << "} \n";
	top = curr_top;

	//xoa theo gia tri. BTVN.

	//TRAT TU0
	

	return 0;
}



