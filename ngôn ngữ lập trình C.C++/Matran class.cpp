#include<iostream>
#include<math.h>
using namespace std;
class Matran{
	 float A[100][100],C[100][100];
	 int hang;
	 int cot;
	 public:
	 	Matran ();
	 	void nhap();
	 	void in ();
	 	void nhanMatranvs1so (float x);
	 	void nhan2Matran (Matran B);
	 	void cong(Matran B );
	 	
};
Matran :: Matran (){
	hang =0; cot =0;
}
void  Matran :: nhap(){
	cout << "so hang = " ;
	cin >> hang;
	cout <<"so cot = ";
	cin>> cot;
	for (int i=0;i<hang;i++)
	{
		for (int j=0;j<cot;j++)
		{
			cout <<"A["<<i<<"]["<<j<<"]:";
			cin>>A[i][j];
			
		}
	}
}
void Matran :: in(){
	cout << endl;
	for (int i=0;i<hang;i++)
	{ cout <<endl;
		for (int j=0;j<cot;j++)
		{
			cout.width(5);
			cout.precision(2);
			cout <<A[i][j];
		}
	}
}
void Matran :: nhanMatranvs1so(float x )
{
	 //cout << endl;
	for (int i=0;i<hang;i++)
	{// cout <<endl;
		for (int j=0;j<cot;j++)
		{
			A[i][j]= A[i][j]*x;
		}
	}
}
void Matran :: cong(Matran B)
{
	for (int i=0;i<hang;i++)
	{// cout <<endl;
		for (int j=0;j<cot;j++)
		{
			A[i][j]= A[i][j]+B.A[i][j];
		}
	}
}

void Matran :: nhan2Matran(Matran B )
{ 
	for (int i=0;i<hang;i++)
	{   
		for (int j=0;j<cot;j++)
		{  C[i][j]=0;
			for (int h=0;h<cot;h++)
			{
				C[i][j] += A[i][h]*B.A[h][j];
			}
			cout << C[i][j]<<"   ";
		}
	}
}
int main (){
	Matran X;
	X.nhap();
	X.in();
	//Matran M;
	//M=X;
//	M.in();
	//X.nhanMatranvs1so(4);
//	X.in();

	cout <<endl;
	cout <<" nhap vao matran Y:";
	cout <<endl;
	Matran Y;
	Y.nhap();
	Y.in();
	//M.cong(Y);
	//cout  <<"tong hai matran A va Y la :";
	//M.in();
		cout <<endl;
	cout<<"tich hai ma tran A va Y :";
	cout <<endl;
	X.nhan2Matran(Y);
	//X.in(); 
	return 0 ;
}

