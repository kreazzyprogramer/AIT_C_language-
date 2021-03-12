#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main(void)
{
start:
clrscr();
float bnd1,bnd2,bnd3,bnd4,tot;
char ch;
{
textcolor(10);cprintf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n");
textcolor(3);cprintf("\r                Welcome To The Resistor Colour Code Calculator Program\n\n");
textcolor(3);cprintf("\r                    This Program Calculates Only 4 Bands Resistors\n\n");
textcolor(10);cprintf("\r\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
textcolor(9);cprintf("\n\n\r Select the value of 1st band \n");
textcolor(11);cprintf(" 1. Black \n 2. Brown \n 3. Red \n 4. Orange \n 5. Yellow \n 6. Green \n 7. Blue \n 8. Violet \n 9. Grey \n 10. White ");
textcolor(2);cprintf("\n\n\r Type The Number:");
scanf("%f",&bnd1);
if (bnd1==1)
bnd1 = 0;
else if (bnd1==2)
bnd1 = 10;
else if (bnd1==3)
bnd1 = 20;
else if (bnd1==4)
bnd1 = 30;
else if (bnd1==5)
bnd1 = 40;
else if (bnd1==6)
bnd1 = 50;
else if (bnd1==7)
bnd1 = 60;
else if (bnd1==8)
bnd1 = 70;
else if (bnd1==9)
bnd1 = 80;
else if (bnd1==10)
bnd1 = 90;
else
{
textcolor(4);cprintf("\r\n\nWrong Selection.. Press Y to Restart (^_^) or Any Other key to exit :(");
ch=getche();
switch(ch)
{
case'y':
goto start;
case'Y':
goto start;
default:
exit(0);
}
}
}
{
clrscr();
textcolor(12);cprintf("\n\n\r Select the value of 2nd band \n");
textcolor(11);cprintf(" 1. Black \n 2. Brown \n 3. Red \n 4. Orange \n 5. Yellow \n 6. Green \n 7. Blue \n 8. Violet \n 9. Grey \n 10. White ");
textcolor(2);cprintf("\n\n\r Type The Number:");
scanf("%f",&bnd2);
if (bnd2==1)
bnd2 = 0;
else if (bnd2==2)
bnd2 = 1;
else if (bnd2==3)
bnd2 = 2;
else if (bnd2==4)
bnd2 = 3;
else if (bnd2==5)
bnd2 = 4;
else if (bnd2==6)
bnd2 = 5;
else if (bnd2==7)
bnd2 = 6;
else if (bnd2==8)
bnd2 = 7;
else if (bnd2==9)
bnd2 = 8;
else if (bnd2==10)
bnd2 = 9;
else
{
textcolor(4);cprintf("\r\n\nWrong Selection.. Press Y to Restart (^_^) or Any Other key to exit :(");
ch=getche();
switch(ch)
{
case'y':
goto start;
case'Y':
goto start;
default:
exit(0);
}
}
}
{
clrscr();
textcolor(13);cprintf("\n\n\r Select the value of 3rd band \n");
textcolor(11);cprintf(" 1. Black \n 2. Brown \n 3. Red \n 4. Orange \n 5. Yellow \n 6. Green \n 7. Blue \n 8. Violet \n 9. White \n 10. Gold \n 11. Silver");
textcolor(2);cprintf("\n\n\r Type The Number:");
scanf("%f",&bnd3);
if (bnd3==1)
bnd3 = 1;
else if (bnd3==2)
bnd3 = 10;
else if (bnd3==3)
bnd3 = 100;
else if (bnd3==4)
bnd3 = 1000;
else if (bnd3==5)
bnd3 = 10000;
else if (bnd3==6)
bnd3 = 100000;
else if (bnd3==7)
bnd3 = 1000000;
else if (bnd3==8)
bnd3 = 10000000;
else if (bnd3==9)
bnd3 = 100000000;
else if (bnd3==10)
bnd3 = 0.1;
else if (bnd3==11)
bnd3 = 0.01;
else
{
textcolor(4);printf("\r\n\nWrong Selection.. Press Y to Restart (^_^) or Any Other key to exit :(");
ch=getche();
switch(ch)
{
case'y':
goto start;
case'Y':
goto start;
default:
exit(0);
}
}
}
{
clrscr();
textcolor(15);cprintf("\n\n\r Select the value of 4th band \n");
textcolor(11);cprintf(" 1. Brown \n 2. Red \n 3. Green \n 4. Blue \n 5. Voilet \n    6. Grey \n 7. Gold \n 8. Silver \n 9. None");
textcolor(2);cprintf("\n\n\r Type The Number :");
scanf("%f",&bnd4);
if (bnd4==1)
bnd4 = 1;
else if (bnd4==2)
bnd4 = 2;
else if (bnd4==3)
bnd4 = 0.5;
else if (bnd4==4)
bnd4 = 0.25;
else if (bnd4==5)
bnd4 = 0.10;
else if (bnd4==6)
bnd4 = 0.05;
else if (bnd4==7)
bnd4 = 5;
else if (bnd4==8)
bnd4 = 10;
else if (bnd4==9)
bnd4 = 20;
else
{
textcolor(4);cprintf("\r\n\nWrong Selection.. Press Y to Restart (^_^) or Any Other key to exit :(");
ch=getche();
switch(ch)
{
case'y':
goto start;
case'Y':
goto start;
default:
exit(0);
}
}
}
tot = (bnd1+bnd2)*bnd3;
{
if (tot>=1000000)
{
clrscr();
textcolor(2);cprintf("\n\n\n\n\n\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n");
textcolor(10);cprintf("\r                Resistance is %.2f M and Tolerance is ñ %.2f %   \n",tot/1000000,bnd4);
textcolor(2);cprintf("\r\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
}
else if(tot>=1000)
{
clrscr();
textcolor(2);cprintf("\n\n\n\n\n\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n");
textcolor(13);cprintf("\r                Resistance is %.2f K and Tolerance is ñ %.2f %   \n",tot/1000,bnd4);
textcolor(2);cprintf("\r\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
}
else
{
clrscr();
textcolor(2);cprintf("\n\n\n\n\n\n\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n");
textcolor(9);cprintf("\r                Resistance is %.2f Ohm and Tolerance is ñ %.2f %  \n",tot,bnd4);
textcolor(2);cprintf("\r\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
}
textcolor(3);cprintf("\r\n\n\n\n\n\nPress Y to restart :) the Program or any Other key to Exit :(");
ch=getche();
switch(ch)
{
case 'y':
goto start;
case 'Y':
goto start;
default:
clrscr();
textcolor(1);cprintf("\n\n            Resister Colour Code Program v1.0 by MYCFILE SECTION");
textcolor(4);cprintf("\r\n\n\n                Group Name : The A Team");
textcolor(10);
cprintf("\r\n\n\n\tGroup Mem  : 1.Gupta ");
cprintf("\n\tGroup Mem  : 2. Bob Marley");
cprintf("\r\n\tGroup Mem  : 3. Maria");
cprintf("\n\tGroup Mem  : 4.  Nazir");
textcolor(13);cprintf("\r\n\n\n\n      \t            Programmer :Russel  | 122       \t");
textcolor(14);cprintf("\r\n\n\n\t \t       Special Thank to ITEC Teaching Us This )^_^(        \t\t");
textcolor(3);cprintf("\r\n\n\n\n\n\n          Now Press Any key To Exit :P ");
getch();
exit(0);
}
}
}
