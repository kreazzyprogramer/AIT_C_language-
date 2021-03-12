#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

outtextxy(100,150,"A1");

outtextxy(140,150,"B1");

outtextxy(180,150,"C1");

outtextxy(220,150,"D1");

outtextxy(260,150,"E1");

outtextxy(300,150,"F1");

outtextxy(340,150,"G1");

outtextxy(380,150,"H1");

outtextxy(420,150,"I1");

outtextxy(460,150,"J1");

outtextxy(500,150,"K1");

getch();
}