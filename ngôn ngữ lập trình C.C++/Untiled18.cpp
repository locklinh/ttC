#include<stdio.h>
#include<string.h>
char s[100],*p, s1[100][100];
int i,dem=0,max =0, b[100]={0};
// tim xau max trong xau ki tu cho truoc
void ktra()
{
p= strtok (s," ");// tach xau s o vi tri cach
while (p!='\0')
{
	strcpy(s1[dem],p);// COPY xau p sang xau s1 o vi tri dem
	dem++;
	p=strtok(NULL," ");// thuc hien gan dau cach tiep theo trong p la NULL roi thuc hien buoc tiep
}
for (i=0;i<dem;i++)

{
	b[i]=strlen(s1[i]);// dem so ki tu o xau s1 thu i gan vao gia tri thu i cua mang b
	if (b[i]>max ) max=b[i];
}	
}
void inkq()
{
	for (i=0;i<dem;i++)
	{
		if (b[i]==max) {printf("%s \n tu thu %d \n ",s1[i],i+1);
		//break;co lenh break thi duyet den phan tu dau tien = max thi thoat khoi lenh luon nen muon in het
		// xau max thi ko cho lenh nay vao ...
		}
	}
}
int main()
{
	printf("\n nhap xau: ");
	gets(s);// de lam gi nhi ?
	ktra();
	printf("\n cac xau co do dai dai nhat la :");
	printf ("\n");
	inkq();
	//return 0 ;
	
	
	
	
}
