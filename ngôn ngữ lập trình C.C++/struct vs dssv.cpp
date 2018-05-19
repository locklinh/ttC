#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
typedef struct 
{
	char mssv[7];
	char hoten[30];
	float dtb;
	
} sinhvien ;
const int MAX=80;
 typedef struct 
 {
 	sinhvien dssv[MAX];
 	int n;
 	char tenlop[8];
 } Lop;
 void nhap(Lop*lop){
 	int n,i ;
 	printf("\n nhap vao si so n: "); scanf ("\n %d",&lop->n);
 	printf("\n nhap vao ten lop : "); scanf("\n" ,&lop->tenlop);
 	for (i=0;i<lop->n;i++)
 	{
 		printf("\n nhap ten sinh vien: "); fflush(stdin);
 		gets (lop->dssv[i].hoten);
 		printf ("\n nhap vao mssv: "); scanf("\n %s",&lop->dssv[i].mssv);
 		printf("\n nhap vao diem trung binh :");scanf("\n %f",&lop->dssv[i].dtb);
 	}
};
 	void xuat(sinhvien ds[], int n )
 	{ 
 		for (int i=0;i<n;i++)
 		{
 			printf ("\n %5s %10s %5.2f",ds[i].mssv,ds[i].hoten,ds[i].dtb);
 		}
 	};
 	
 	void sapxep(sinhvien ds[],int n )
 	{ int i;
	 float  tg;
	 //float max=ds[0].dtb;
 		for (i=0;i<n;i++)
 		{ for (int j=i+1;j<n;j++)
 			if (ds[i].dtb > ds[j].dtb )
 			{
 				sinhvien tg= ds[i];
 				 ds[i]=ds[j];
 				ds[j] = tg;
 			}
 		}
 		for (int i=0;i<n;i++)
 		{
 			printf ("\n %5s %10s %5.2f",ds[i].mssv,ds[i].hoten,ds[i].dtb);
 		}
 	};
 	
 	void timkiem(sinhvien ds[],int n)
 	{
 		for (int i=0;i<n;i++)
 		{
 			if (ds[i].dtb >5 && ds[i].dtb<7)
 			{
 				printf ("\n %5s %10s %5.2f",ds[i].mssv,ds[i].hoten,ds[i].dtb);
 			}
 		}
 	};

 	int main ()
 	{ int i,n;
 	  Lop p;
 	  nhap(&p);
 	  printf ("\n danh sach sinh vien sau khi nhap la: ");
 	  xuat(p.dssv,p.n);
 	  printf ("\n danh sach sv sau khi sap xep la : ");
 	  sapxep(p.dssv,p.n);
 	  printf ("\n danh sach sv co 2<dtb<4 la :");
 	  timkiem(p.dssv,p.n);
 	  getch();
 		return 0 ;
 	}
 	
 	
 
 
 
 
 
 
 
 
 
 
 
