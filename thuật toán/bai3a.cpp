
#include <iostream>

using namespace std;

void in_mang(int A[], int n)
{
	cout << "A[n] = {";
	for (int i = 0; i < n; i++)
	{
		cout << A[i];
		if (i != n - 1) {
			cout << "; ";
		}
	}
	cout << "} .\n";
}
void sapxep(int A[], int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] < A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
}

void xoaphantu(int A[], int B[], int &n, int k)
{
	cout << "chon so phan tu muon xoa: ";
	cin >> k;
	if (k > n)
	{
		//truong hop vi pham
		cout << "Vi tri can xoa khong hop le. Vui long dien vao vi tri tu 0 - " << n << "\n";
	}
	else
	{
		if (k < 0)
		{
			//truong hop vi pham
			cout << "Vi tri can xoa khong hop le. Vui long dien vao vi tri tu 0 - " << n << "\n";
		}
		else
		{

			//truong hop hop le
			cout << "Nhap (cac) vi tri muon xoa: ";
			for (int i = 0; i < k; i++)
			{
				cin >> B[i];
				if (i != k - 1)
				{
					cout << "; ";
				}
			}
			// sap xep tu giam dan
			sapxep(B, k);
			for (int i = 0; i < k; i++)             //B0=1
			{
				for (int j = 0; j < n; j++)         //A0 a1 a2 a3 a4 can xoa a0.. 
				{
					if (j == B[i] - 1)
					{
						for (int l = j + 1; l < n; l++)
						{
							A[l - 1] = A[l];
						}
						n--;
						cout << "Mang sau khi xoa la: \n";
						in_mang(A, n);
					}
				}
			}

		}
	}
}

void chenphantu(int A[], int C[], int &n, int m)
{
	cout << "chon so phan tu muon chen: ";
	cin >> m;
	cout << "Nhap (cac) vi tri muon chen: ";
	for (int i = 0; i < m; i++)
	{
		cin >> C[i];
		if (i != m - 1) {
			cout << "; ";
		}
	}
	// sap xep giam dan
	sapxep(C, m);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)         //A0 a1 a2 a3 a4 can chen a3.. 
		{
			if (j == C[i] - 1)
			{
				int chen = 0;
				cout << "Nhap gia tri chen vao vi tri" << C[i] << "la:";
				cin >> chen;
				n++;
				int l;
				for (l = n; l >= j + 1; l--)
				{
					A[l] = A[l - 1];
				}
				A[j] = chen;
				cout << "Mang sau khi chen la: \n";
				in_mang(A, n);
			}
		}
	}
}

void suaphantu(int A[], int D[], int &n, int h)
{
	cout << "chon so phan tu muon sua: ";
		cin >> h;
		cout << "Nhap (cac) vi tri muon sua: ";
		for (int i = 0; i<h; i++)
		{
			cin >> D[i];
		}
		int sua[100];
		cout << "Nhap gia tri muon sua lan luot la: ";
		for (int i = 0; i<h; i++)
		{
			cin >> sua[i];
		}
		for (int i = 0; i<h; i++)
		{														
			for (int j=0; j< n; j++)
			{
				if (j == D[i] - 1)
				{
					A[j] = sua[i];
				}

			}
			cout << "Mang vua suala: \n";
			in_mang(A, n);
		}
}

int main()
{
	// Nhap mang
	int A[100];
	int i, j, n;
	cout << "Nhap so phan tu cua mang A: ";
	cin >> n;
	cout << "Nhap Mang: \n";
	for (i = 0; i < n; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
	}
	//in mang
	cout << "Mang vua nhap la: \n";
	in_mang(A, n);

	// Xoa 1 hoac nhieu phan tu cua mang A
	int B[100];
	int k = 0;  
	xoaphantu(A, B, n, k);
	in_mang(A, n);
	//Chen 1 hoac nhieu phan tu cua mang A
	int C[100];
	int m = 0;
	chenphantu(A, C, n, m);

	// sua 1 hoac nhieu phan tu cua mang A
	int D[100];
	int h = 0;
	suaphantu(A, D, n, h);
	int a;
	cout << "Nhap m";
	cin >> a;
	return 0;
}