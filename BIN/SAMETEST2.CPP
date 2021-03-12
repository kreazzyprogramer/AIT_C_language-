//THIS PROGRAM IS MADE BY #HANIFI.

//IN THIS YOU CAN ADD BOOKS,VIEW ALL BOOKS,VIEW BY SPECIFIC AUTHOR NAME
//AND YOU CAN VIEW TOTAL NUMBER OF BOOKS.
//THIS PROGRAM IS RESTRICTED TO ADD ONLY [3] NUMBER OF BOOKS.BUT YOU CAN
//CHANGE THE RESTRUCTION TO YOUR DESIRE BY CHANGING THE COUNT VALUE IN ADD
//FUNCTION.
//HOPE YOU LIKE IT :)


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define y 5
#define x 20
struct library
{
int id_no;
char book_title[100];
char author[100];
int cost;
}b[200];


void add_book();
void disp_book();
void book_auth();
void count_book();

int count;
void main (void)
{

int ch;

/*
clrscr();
window(1,1,50,15);
textbackground(BLUE);
*/
clrscr();
while(1)
{
clrscr();
gotoxy(13,3);
textcolor(2);
cprintf("\n 1:ENTER DATA\n");
textcolor(15);
printf("\n 2:DISPLAY ALL BOOK INFORMATION\n");
printf("\n 3:SEARCH BOOOK BY AUTHOR NAME\n");
printf("\n 4:TOTAL NUMBER OF BOOKS IN LIBERARY\n");
printf("\n 5:EXIT\n");
printf("\n WHAT IS YOUR CHOICE: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
clrscr();
add_book();
getch();
break;
case 2:
clrscr();
disp_book();
getch();
break;
case 3:
clrscr();
book_auth();
getch();
break;
case 4:
clrscr();
count_book();
getch();
break;
case 5:
exit(0);
}
}
}
//-----------------------------------
void add_book()
{
if(count==3)
{
gotoxy(7,11);
textcolor(15+BLINK);
cprintf("YOU CAN ONLY ADD 3 BOOKS [OVER LIMET]\n");
return;
}
gotoxy(x,y);
textcolor(15);
printf("\n ENTER DETAILS OF BOOK \n\n");

printf("\n ID.NO OF BOOK =");
scanf("%d",&b[count].id_no);
fflush(stdin);
printf("\n PELASE ENTER BOOK TITLE=");
gets(b[count].book_title);
fflush(stdin);
printf("\n PLEASE ENTER THE NAME OF AUTHOR=");
gets(b[count].author);
fflush(stdin);
printf("\n WHAT IS THE COST OF BOOK=");
scanf("%d",&b[count].cost);
getch();

printf("DATA ENTERED SUCCESSFULLY");
count++;
}
//***********************
void disp_book()
{
int i;
gotoxy(x,y);
printf(" NOW DISPLAYING DETAIL OF BOOKS IN LIBRARY");
for(i=0;i<count;i++)
{
printf("\n book id %d",b[i].id_no);
printf("\n book title %s",b[i].book_title);
printf("\n author name %s",b[i].author);
printf("\n cost %d",b[i].cost);
//printf("\n\n");
}

}
//*********************
void book_auth()
{
int i,cnt=0;
char name[20];
printf("\n enter the name of author=");
scanf("%s",&name);
for(i=0;i<count;i++)
{
if(strcmp(name,b[i].author)==0)
{
cnt++;
printf("\n %d\n%s\n%s\n%d",b[i].id_no,b[i].book_title,b[i].author,b[i].cost);
}
}
if(cnt==0)
printf("\n no such book \n");
}
//*******************************
void count_book()
{
gotoxy(x,y);
printf("\n total no of book in library =%d",count);
}