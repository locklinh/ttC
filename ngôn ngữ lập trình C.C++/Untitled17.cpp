#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
typedef struct 
{
	char ten[30];
	int DG;
	int SL;
	int TT;
	
} hang;
typedef struct {
	int n;
	hang DS[100];
} bang ;
void nhap(bang*bang)
{
	int n, i;
	printf("\n nhap vao so loai san pham :"); scanf (" %d",&bang ->n);
	for (i=0;i<n;i++)
	{
		printf ("\n nhap ten : "); fflush (stdin);
		gets (bang->DS[i].ten);
		printf ("\n so luong ");scanf ("%d",&bang -> DS[i].SL);
		printf ("\n don gia "); scanf ("%d ",&bang -> DS[i].DG);
		bang ->DS[i].TT= bang ->DS[i].DG*bang->DS[i].SL;
	}
}
void tinh(hang DS[], int n)
{
	for (int i=0;i<n;i++)
	{
		DS[i].TT=DS[i].DG*DS[i].SL;
	}
}
void sapxep(bang*bang)
{int max; 
	bang->DS[1].TT=max;
	int tg,i,n;
	fflush (stdin);
		gets (bang->DS[i].ten);
		for (i=0;i<n;i++)
		{
			if (bang->DS[i].TT > max )
			{
				bang->DS[i].TT=tg;
				tg=max ;
				max =bang->DS[i].TT;
			}
			printf ("\n %s %d %d ",bang->DS[i].ten,bang ->DS[i].DG,bang->DS[i].TT);
		}
}

int main ()
{
	bang bang;
	nhap(bang*);
	tinh(bang.DS[],bang.n);
	
	return 0 ;
	
}






