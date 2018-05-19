#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define consoleWidth	80
#define consoleHeight	25
//#pragma once
#define ColorCode_Black	0
#define ColorCode_DarkBlue	1
#define ColorCode_DarkGreen	2
#define ColorCode_DarkCyan	3
#define ColorCode_DarkRed	4
#define ColorCode_DarkPink	5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite	7
#define ColorCode_Grey	8
#define ColorCode_Blue	9
#define ColorCode_Green	10
#define ColorCode_Cyan	11
#define ColorCode_Red	12
#define ColorCode_Pink	13
#define ColorCode_Yellow	14
#define ColorCode_White	15

#define default_ColorCode	7

#define key_Up	1072
#define key_Down	1080
#define key_Left	1075
#define key_Right	1077
#define key_none	-1

int inputKey();
void clrscr();
void gotoXY (int column, int line);
int whereX();
int whereY();

void TextColor (int color);
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
enum TrangThai {UP, DOWN, LEFT, RIGHT};

struct ChuChay
{
char s[100];
char c[2];
int y, x;	
TrangThai tt;
};

void noelTree(int h)
{

for(int i=1;i<=h;i++)
{

for(int j=1;j<=h-i;j++)
{

printf(" ");
}

for(int k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}

for(int i=1;i<=3;i++)
{
for(int j=1;j<h-2;j++)
{
printf(" ");
}
for(int k=1;k<=3;k++)
{
printf("**");
}
printf("\n");
}

}

int main()
{ 
char c;
int t;
printf("BAn hay an cac phim A,D,S,W de dieu khien\ntrong do:\n- A la sang trai\n- D la sang phai\n- W la len tren\n- S la xuong duoi\n Neu ban da hieu thi an enter de bat dau in chu 'merry christmas and happy new year'");
TextColor (12);
printf("\n LUU Y: an ESC de thoat...!");
c=getch ();
if(c==27) return 0;
srand(time(NULL)); 
ChuChay A;
strcpy (A.s, "<...Merry Christmas ..>\n\t\t And Happy New Year!");
int sLen = strlen(A.s);
ChuChay tuyet,tuyet1,tuyet2;
strcpy(tuyet.c,".");
strcpy(tuyet1.c,".");
strcpy(tuyet2.c,".");
A.y = 0;
A.x = (consoleWidth - sLen) / 2;
A.tt = DOWN;
tuyet.y=0;
tuyet.x=consoleWidth/2;
tuyet.tt=DOWN;
tuyet1.y=0;
tuyet1.x=consoleWidth/2;
tuyet2.y=0;
tuyet2.x=consoleWidth/2;
tuyet1.tt=DOWN;
tuyet2.tt=DOWN;	
int h=0;

while (true)
{
clrscr();

TextColor(7+rand()%8);
gotoXY(consoleWidth,24);

noelTree(h);

gotoXY (A.x, A.y);

TextColor (8 + rand() % 8);
printf ("%s", A.s);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);	gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);	gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);	gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);	gotoXY(rand()%80,tuyet.y);

TextColor(7);
printf("%s",tuyet.c);
if(tuyet.y!=1) 
{
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);	gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
gotoXY(rand()%80,tuyet1.y);

TextColor(7);
printf("%s",tuyet1.c);
}
if(tuyet1.y!=3)
{
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
}

if(tuyet2.y>4)
{
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
gotoXY(rand()%80,tuyet2.y);

TextColor(7);
printf("%s",tuyet2.c);	
}

if (A.y >= consoleHeight - 1)
A.tt = UP;
else if (A.y <= 0)
A.tt = DOWN;
else if (A.x <= 0)
A.tt = RIGHT;
else if (A.x >= consoleWidth - sLen)
A.tt = LEFT;

if (_kbhit())	
{
char key = getch();

if (key == 'A' || key == 'a'||GetAsyncKeyState(VK_LEFT))
A.tt = LEFT;
else if (key == 'D' || key == 'd' || GetAsyncKeyState(VK_RIGHT) )
A.tt = RIGHT;
else if (key == 'W' || key == 'w'||GetAsyncKeyState(VK_UP))
A.tt = UP;
else if (key == 'S' || key == 's'|| GetAsyncKeyState(VK_DOWN))
A.tt = DOWN;
if(key== 27) return 0;
}

if(tuyet.tt==DOWN)
tuyet.y++;

if(tuyet1.tt==DOWN)
tuyet1.y++;

if(tuyet2.tt==DOWN)
tuyet2.y++;
if (A.tt == DOWN)
A.y++;

else if (A.tt == UP)
A.y--;
else if (A.tt == LEFT)
A.x--;
else if (A.tt == RIGHT)
A.x++;
if(tuyet.y==24) tuyet.y=0;
if(tuyet1.y==23) tuyet1.y=0;
if(tuyet2.y==25) tuyet2.y=0;

Sleep (100); 
h++;
if(h==21) h=0;
}

return 0;
}
