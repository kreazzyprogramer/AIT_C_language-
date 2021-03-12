#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int h,m,s;
clrscr();
for(h=1;h<=12;h++)
{
clrscr();
for(m=1;m<=59;m++)
{
clrscr();
for(s=1;s<=59;s++)
{
gotoxy(8,8);
printf("hh mm ss");
gotoxy(8,9);
printf("%d%d%d",h,m,s);
sleep(1);
} 
} 
}} 