// DemoQueue01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Queue FIFO
	int Q[100];

	int front = -1;
	int back = -1;

	//insert
	int n; //bi?n ch?a s? ph?n t? c?a queue c?n chèn vào.
	cout << "Moi nhap vao so phan tu can them vao queue: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//Nh?n vào giá tr? c?n chèn
		int tg;
		cout << "Moi nhap phan tu can chen vao queue: ";
		cin >> tg;

		//ki?m tra xem queue có r?ng không.
		if (front == back && front == -1)
		{
			//queue dang r?ng
			back = 0;
			front = 0;
			Q[back] = tg;
		}
		else
		{
			//queue dang không r?ng
			back++;
			Q[back] = tg;
		}
	}

	//In queue
	cout << "Hang doi vua nhap vao la: \n";
	cout << "front <--";
	for (int i = 0; i < n; i++)
	{
		cout << Q[i];
		//x? lý hình th?c in hàng d?i
		if (i < n - 1)
		{
			cout << "; ";
		}
	}
	cout << "<-- back \n";

	//Get: l?y ph?n t? trong Queue. 
	//B1: L?y Q[front]
	cout << "Phan tu front can lay ra la: " << Q[front];
	//B2: D?ch các ph?n t? còn l?i v? phía front 1 l?n.
	for (int i = 0; i < n - 1; i++)
	{
		Q[i] = Q[i + 1];
	}
	back--;
	n--;

	//In queue
	cout << "Hang doi vua lay ra 1 phan tu la: \n";
	cout << "front <--";
	for (int i = 0; i < n; i++)
	{
		cout << Q[i];
		//x? lý hình th?c in hàng d?i
		if (i < n - 1)
		{
			cout << "; ";
		}
	}
	cout << "<-- back \n";

	//Delete 1 ph?n t? xác d?nh trong queue.
	int a;
	cout << "Moi nhap vao vi tri cua phan tu can xoa (chay tu 0): "; cin >> a;
	//ki?m tra tính h?p l? c?a a
	if (a >= front && a <= back)
	{
		//tru?ng h?p h?p l?
		int A[99]; //luu các ph?n t? c?a queue khi xóa
		int k = 0;
		while (front <= back)
		{
			if (front != a)
			{
				//không ph?i ph?n t? c?n xóa
				A[k] = Q[front];
				k++;				
			}	
			front++;
		}
		//lúc này hàng d?i r?ng
		front = -1;
		back = -1;
		for (int i = 0; i < k; i++)
		{
			//ki?m tra xem queue có r?ng không.
			if (front == back && front == -1)
			{
				//queue dang r?ng
				back = 0;
				front = 0;
				Q[back] = A[i];
			}
			else
			{
				//queue dang không r?ng
				back++;
				Q[back] = A[i];
			}
		}

	}
	else
	{
		//tru?ng h?p nh?p vào v? trí b?t h?p l?
		cout << "Vi tri khong hop le. Dot qua!";
	}

	//In queue
	cout << "Hang doi vua xoa 1 phan tu tai vi tri " << a  << " la: \n";
	cout << "front <--";

	int i = 0;
	while (i <= back)
	{
		cout << Q[i];
		//x? lý hình th?c in hàng d?i
		if (i <= back-1)
		{
			cout << "; ";
		}
		i++;
	}

	cout << "<-- back \n";

	return 0;
}

