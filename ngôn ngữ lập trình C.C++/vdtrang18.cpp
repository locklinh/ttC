#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
typedef struct {
	int x,y;
	int mau;
	
} Diem;
int main (){
	int mh=0,mode=0;
	initgraph(&mh,&mode,"");
	int loi=graphresult();
	if (loi){
		printf("\n loi do hoa:%s", graperrormsg(loi));
		getch();
		exit(0);
		
	}
	const Diem gmh={ getmaxx()/2,getmaxy()/2,WHITE};
	putpixel(gmh.x,gmy.y,gmh.mau);
	getch();
	closegraph();
	
}
