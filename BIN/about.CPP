#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

void main(void)
{
clrscr();

gotoxy(35,2);
textcolor(12);
cprintf("ABOUT");
textcolor(15);
gotoxy(32,3);
cprintf("==============");
gotoxy(22,9);
textcolor(15);
cprintf("THIS PROGRAM IS MADE BY A STUDENT OF ");
gotoxy(21,10);
cprintf("ALIGHAR INSTITUTE OF TECHNOLOGY (A.I.T).");
gotoxy(19,11);
cprintf("STUDYING IN D.A.E 1ST YAER OF C.I.T, SEC 1-C");
sleep(5);

gotoxy(51,22);
textcolor(4);
cprintf("NAME:WAQAR AHMAD HANIFI.");
gotoxy(51,23);
cprintf("CONTACT:03082307818.");
gotoxy(51,24);
cprintf("E-MAIL:WAQAR_HACK@OUTLOOK.COM");
getch();
}