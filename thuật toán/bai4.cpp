// DemoStack01.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

void instack(int S[100], int top)
{
	cout << "Top <-- {";

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
}

void xoavitri(int S[100], int top , int i)
{
	//kiem tra tinh hop le cua vi tri can xoa

	if (i > top)
	{
		//truong hop vi pham
		cout << "Vi tri can xoa khong hop le. Vui long dien vao vi tri tu 0 - " << top << "\n";
	}
	else
	{
		if (i < 0)
		{
			//truong hop vi pham
			cout << "Vi tri can xoa khong hop le. Vui long dien vao vi tri tu 0 - " << top << "\n";
		}
		else
		{
			//truong hop hop le
			if (i == top)
			{
				top--;
			}
			else
			{
				int A[100];
				int j = 0;
				while (top >i)
				{
					A[j] = S[top];
					top--;
					j++;
					cout << A[j] << "\n";
				}
				for (int k = j - 1; k >= 0; k--)
				{
					S[top] = A[k];
					top++;
				}

				//giam top cho dung chi so
				top--;
			}
		}
	}

	//In stack
	cout << "Stack sau khi xoa phan tu thu " << i << " la:\n";
	instack(S, top);
}

void chenphantu(int S[100], int &top,int n)
{
	cout << "Moi nhap vao vi tri cua phan tu can chen (chay tu 0): ";
	int i;
	cin >> i;
	//kiem tra tinh hop le cua vi tri can chen
	if (i > top)
	{
		//truong hop vi pham
		cout << "Vi tri can chen khong hop le. Vui long dien vao vi tri tu 0 - " << top << "\n";
	}
	else
	{
		if (i < 0)
		{
			//truong hop vi pham
			cout << "Vi tri can chen khong hop le. Vui long dien vao vi tri tu 0 - " << top << "\n";
		}
		else
		{
			int chen;
			cout << "Nhap gia tri muon chen: ";
			cin >> chen;
			int B[100];
			for (int j = top; j >= i; j--) {
				B[j] = S[j];
				top--;
			}
			S[top + 1] = chen; top += 1;
			for (int j = i; j<n; j++) {
				S[top + 1] = B[j];
				top++;
			}
		}
	}
	//In stack
	cout << "Stack sau khi chen phan tu thu " << i << " la:\n";
	instack(S, top);
}

void suaphantu(int S[100],int top,int n) 
{
	int i = 0, sua = 0, B[20],C[20];
	cout << "Nhap vao vi tri cua phan tu muon sua trong Stack : "; cin >> i;
	cout << "Nhap vao gia tri thay the : "; cin >> sua;
	for (int j = top; j >= i; j--) {
		if (j == i) C[j] = S[j];
		else B[j] = S[j];
		top--;
	}
	for (int j = i; j<n; j++) {
		if (j == i) S[top + 1] = sua;
		else S[top + 1] = B[i];
		top++;
	}
	for (int j = top; j >= 0; j--) {
		if (j>0) cout << S[j] << "->";
		if (j == 0) cout << S[j];
	}
	cout << endl;
}
void xoagiatri(int S[100], int top)
{
	int giatri;
	cout << "Nhap gia tri: ";
	cin >> giatri;
	int B[100];
	int j = 0;
	
		//em khong biet lam cau nay :)
}


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
	instack(S, top);
	int chon = 0;
	cout << "1.Chen vao 1 phan tu tai 1 vi tri xac dinh cua Stack\n2.Xoa 1 phan tu tai 1 vi tri xac dinh cua Stack\n3.Sua 1 phan tu cua Stack\n";
	cout << "Moi ban chon chuc nang : "; 
	cin >> chon;
	switch (chon)
	{
		case 1:
		{
			chenphantu(S, top, n);
			break;
		}
		case 2: 
		{
			int i;
			cout << "Moi nhap vao vi tri cua phan tu can xoa (chay tu 0): ";
			cin >> i;
			xoavitri(S, top, i);
			break;
		}
		case 3: 
		{
			suaphantu(S, top, n);
			break;
		}
	}
	system("pause");
	return 0;
}

