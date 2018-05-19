#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<Windows.h>
#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define Color_BLACK      0
#define Color_DarkBlue  1
#define Color_DarkGreen  2
#define Color_DarkCyan  3
#define Color_DarkRed  4
#define Color_DarkPink  5
#define Color_DarkYellow 6
#define Color_DarkWhite  7
#define Color_Grey   8
#define Color_Blue   9
#define Color_Green   10
#define Color_Cyan   11
#define Color_Red   12
#define Color_Pink   13
#define Color_Yellow  14
#define Color_White   15
#define key_Up  1072
#define key_Down 1080
#define key_Left 1075
#define key_Right 1077
#define key_none -1
struct moto
{
 char kytu;
 int mau;
};
moto buffer[25][77];
void gano(int x,int y,char c,int mamau=7)
{
 buffer[y][x].kytu=c;
 buffer[y][x].mau=mamau;
}
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;                  
	HANDLE	hConsoleOut;
	COORD	Home = {0,0};
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut,' ',csbiInfo.dwSize.X * csbiInfo.dwSize.Y,Home,&dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}

int inputKey()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == 224)	
		{
			key = _getch();
			return key + 1000;
		}

		return key;
	}
	else
	{
		return key_none;
	}

	return key_none;
}

void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void TextColor (int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
}
void khoi_tao_buffer()
{
 for(int i=0;i<25;i++)
  for(int j=0;j<77;j++)
   gano(j,i,' ');
}
void ve_ban_co()
{
 for(int i=0;i<25;i++)
 {
  if(i%2==0)
  {
   for(int j=0;j<77;j++)
    if(j%4==0) gano(j,i,197);
    else gano(j,i,196);
  }
  else
  {
   for(int j=0;j<77;j++)
    if(j%4==0) gano(j,i,179);
  }
 }
}
char ban_co[12][19];
void khoi_tao_ban_co()
{
 for(int i=0;i<12;i++)
  for(int j=0;j<19;j++)
   ban_co[i][j]=' ';
}
void hien_thi(int x,int y)
{
 khoi_tao_buffer();
 ve_ban_co();
 for(int i=0;i<12;i++)
  for(int j=0;j<19;j++)
   gano(2+j*4,1+i*2,ban_co[i][j]);
 gano(x-1,y,buffer[y][x-1].kytu,176);
 gano(x,y,buffer[y][x].kytu,176);
 gano(x+1,y,buffer[y][x+1].kytu,176);
 gotoXY(0,0);
 for(int i=0;i<25;i++)
 {
  for(int j=0;j<77;j++)
  {
   TextColor(buffer[i][j].mau);
   putchar(buffer[i][j].kytu);
  }
  if(i<24) putchar('\n');
 }
}
int dieu_khien(int &x,int &y,int &nguoi)
{
 int key=inputKey();
 if(key==key_Up && y>=3){ y-=2;return 1;}
 else if(key==key_Down && y<=21){ y+=2;return 1;}
 else if(key==key_Left && x>=6){ x-=4;return 1;}
 else if(key==key_Right&& x<=70){ x+=4;return 1;}
 else if(key==13)
 {
  if(nguoi==1 && ban_co[(y-1)/2][(x-2)/4]==' ')
  { 
   ban_co[(y-1)/2][(x-2)/4]='X';
   nguoi=0;
   return 1;
  }
  else if(ban_co[(y-1)/2][(x-2)/4]==' ')
  {
   ban_co[(y-1)/2][(x-2)/4]='O';
   nguoi=1;
   return 1;
  }
  return 0;
 }
 return 0;
}
int xet_thang_thua(int x ,int y)
{
 int dem,i,j,h,c;
 c=(x-2)/4;
 h=(y-1)/2;
 if(ban_co[h][c]==' ') return 2;
 dem=0;
 for(j=c;j>=0;j--)
  if(ban_co[h][j]!=ban_co[h][c]) break;
  else dem++;
 for(j=c+1;j<19;j++)
  if(ban_co[h][j]!=ban_co[h][c]) break;
  else dem++;
 if(dem>=5)
 {
  if(ban_co[h][c]=='X') return 1;
  else return 0;
 }
 dem=0;
 for(int i=h;i>=0;i--)
  if(ban_co[i][c]!=ban_co[h][c]) break;
  else dem++;
 for(i=h+1;i<12;i++)
  if(ban_co[i][c]!=ban_co[h][c]) break;
  else dem++;
 if(dem>=5)
 {
  if(ban_co[h][c]=='X') return 1;
  else return 0;
 }
 dem=0;
 for(i=h,j=c;i>=0 && j<19;i--,j++)
  if(ban_co[i][j]!=ban_co[h][c]) break;
  else dem++;
 for(i=h+1,j=c-1;i<12,j>=0;i++,j--)
  if(ban_co[i][j]!=ban_co[h][c]) break;
  else dem++;
 if(dem>=5)
 {
  if(ban_co[h][c]=='X') return 1;
  else return 0;
 }
 dem=0;
 for(i=h,j=c;i<120 && j<19;i++,j++)
  if(ban_co[i][j]!=ban_co[h][c]) break;
  else dem++;
 for(i=h-1;i>=0;i--)
 for(j=c-1;j>=0;j--)
  if(ban_co[i][j]!=ban_co[h][c]) break;
  else dem++;
 if(dem>=5)
 {
  if(ban_co[h][c]=='X') return 1;
  else return 0;
 }
 for(i=0;i<12;i++)
  for(j=0;j<19;j++)
   if(ban_co[i][j]==' ') return 2;
 return 3;
}
int main()
{
 int k,kt,nguoi,x,y,van_moi;
 char c;
loop:;
 khoi_tao_ban_co();
 van_moi=1;
 clrscr();
 nguoi=1;
 x=42;
 y=13;
 while(1)
 {
  hien_thi(x,y);
  if(van_moi){ kt=2;van_moi=0;}
  else kt=xet_thang_thua(x,y);
  if(kt==1)
  {
   gotoXY(30,7);
   TextColor(Color_Yellow);
   printf("NGUOI CHOI X THANG!");
   gotoXY(30,9);
   printf("choi lai? y:yes  n:no");
   do{c=getch();}while(c!='y' && c!='n');
   if(c=='y') goto loop;
   else goto ketthuc;
  }
  else if(kt==0)
  {
   gotoXY(30,7);
   TextColor(Color_Yellow);
   printf("NGUOI CHOI O THANG!");
   gotoXY(30,9);
  printf("choi lai? y:yes  n:no");
   do{c=getch();}while(c!='y' && c!='n');
   if(c=='y') goto loop;
   else goto ketthuc;
  }
  else if(kt==3)
  {
   gotoXY(30,7);
   TextColor(Color_Yellow);
  printf("VAN CO NAY HOA!");
   gotoXY(30,9);
   printf("choi lai? y:yes  n:no");
   do{c=getch();}while(c!='y' && c!='n');
   if(c=='y') goto loop;
   else goto ketthuc;
  }
loop1:;
  k=dieu_khien(x,y,nguoi);
  if(k==0) goto loop1;
 }
ketthuc:;
 return 0;
}



