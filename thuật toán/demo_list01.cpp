// DemoList01.cpp : Defines the entry point for the console application.
//

//#include "stdio.h"
#include <iostream>
#include <string.h>

using namespace std;

struct SV
{
	string MSSV;
	string HoTen;
	bool   GioiTinh;
};

int main()
{
	//Danh s�ch List c�i d?t tr�n co s? m?ng C++
	SV L[100];

	int n; //ch?a s? ph?n t? c?a danh s�ch

	cout << "Moi nhap vao si so SV: "; cin >> n;

	//kill cache
	while (!getchar());

	for (int i = 0; i < n; i++)
	{
		cout << "Moi nhap vao thong tin SV thu " << i + 1 << ": \n";
		cout << " MSSV[" << i + 1 << "]= "; getline(cin, L[i].MSSV); 
		cout << " HoTen[" << i + 1 << "]= "; getline(cin, L[i].HoTen);
		bool is_continue = true;
		while(is_continue)
		{ 			
			string gt;
			cout << " GioiTinh[" << i + 1 << "] (Nam/Nu)= "; getline(cin, gt);
			if (gt == "Nam" || gt == "Nu")
			{				
				if (gt == "Nam")
				{
					L[i].GioiTinh = true;
				}
				else
				{
					L[i].GioiTinh = false;
				}
				is_continue = false;
			}
			else
			{
				cout << "Ban phai nhap dung gia tri \"Nam \" hoac \"Nu \" . Vui long nhap lai!! \n";
			}
		}		
	}

	//In DSSV
	cout << "DSSV vua nhap vao la: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin sinh vien thu " << i + 1 << " la: \n";
		cout << "MSSV[" << i + 1 << "]=" << L[i].MSSV << "\n";
		cout << "HoTen[" << i + 1 << "]=" << L[i].HoTen << "\n";
		if (L[i].GioiTinh)
		{
			cout << "GioiTinh[" << i + 1 << "]= \"Nam\" \n";
		}
		else
		{
			cout << "GioiTinh[" << i + 1 << "]= \"Nu\" \n";
		}	
		cout << "\n";
	}

    return 0;
}

