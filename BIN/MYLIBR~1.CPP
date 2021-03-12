//THIS PROGRAM IS MADE BY #HANIFI.

//IN THIS PROGRAM YOU CAN ADD BOOKS,VIEW ALL BOOKS,SEARCH BY SPECIFIC
//AUTHOR NAME OR ID AND YOU CAN ALSO VIEW TOTAL NUMBER OF BOOKS.

//THIS PROGRAM IS RESTRICTED TO ADD ONLY [3] NUMBER OF BOOKS.BUT YOU CAN

//CHANGE THE RESTRUCTION TO YOUR DESIRE BY CHANGING THE COUNT VALUE IN ADD
//FUNCTION.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

//cordinates of gotoxy();

#define y 5
#define x 20

struct library
{
int id_no;
char book_title[100];
char author[100];
int cost;
}b[200];

void menu();
void add_book();
void disp_book();
void search_authr();
void search_id();
void count_book();
void Password();
void welcome();

int count;
char password[10]={"12345"};     //PASSWORD
				 //COULD BE CHANGE UPTO 10 CHARACTRS

void main (void)
{
system("cls");
//Password(); //FUNCTION CALLING
//getch();
//welcome();
menu();
}


void menu()
{
int ch;


while(10)         //WHILE LOOP IS USED TO GET BACK TO THE MAIN MENU		//
{                //EVERY TIME FUNCTON IS FINISHED.


clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("MAIN MENU");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");





window(1,2,80,23);
textbackground(1);
clrscr();


textcolor(15);
clrscr();
   gotoxy(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. ADD BOOK  ");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. DISPLAY BOOKS IN LIBRARY");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. SEARCH BOOKS BY AUTHOR NAME");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 4. SEARCH BOOKS BY I.D#");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 5. TOTLA NO. OF BOOKS IN LIBRARY");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 6. CLOSE APPLICATION");

    gotoxy(20,18);
    printf("------------------------------------------");



    gotoxy(20,21);
    printf("Enter your choice:");
    scanf("%d",&ch);




textcolor(15);
switch(ch)
{
case 1:
clrscr();

clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("ADD BOOK");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");






window(1,2,80,23);
textbackground(1);
clrscr();

add_book();     // ADD BOOK FUNCTION CALLING
getch();
break;

case 2:
clrscr();

clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("DISPLAYING BOOK");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");





window(1,2,80,23);
textbackground(1);
clrscr();

disp_book();    //DISPLAY ALL BOOKS FUNCTION CALLING
getch();
break;

case 3:
clrscr();
clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("SEARCH BY AUTHOR");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");




window(1,2,80,23);
textbackground(1);
clrscr();

search_authr();    //SEARCH BY AUTHOR FUNCTION CALLING
getch();
break;

case 4:
clrscr();
clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("SEARCH BY ID#");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");



window(1,2,80,23);
textbackground(1);
clrscr();

search_id();    //SEARCH BY ID FUNCTION CALLING
getch();
break;

case 5:
clrscr();
clrscr();
window(1,1,80,1);
textbackground(4);
clrscr();

textcolor(15);
gotoxy(2,1);
cprintf("MY_LIBRARY v1.0");


    gotoxy(35,1);
    cprintf("TOTAL BOOKS IN LIBARY");


    window(79,1,80,1);
   textbackground(4);
   clrscr();
   gotoxy(79,80);
   printf("X");

    window(76,1,77,1);
   textbackground(5);
   clrscr();
   gotoxy(76,78);
   printf("-");



window(1,2,80,23);
textbackground(1);
clrscr();


count_book();  //TOTAL NO OF BOOKS FUNCTION CALLING
getch();
break;

case 6:        //EXIT.......        //USING FOR LOOP FOR CHARACTOR BY
				    //CHARACTOR PRINTING.
system("cls");
clrscr();

char c[50]="CLOSING APPLICATION...";
   int j;
   gotoxy(30,6);
    for(j=0;j<22;j++)
   {
   delay(60);
   printf("%c",c[j]);
   }
   //-------------------------------
   char t[50]="THANK YOU FOR USING.";
   gotoxy(30,8);
    for(j=0;j<20;j++)
   {
   delay(60);
   printf("%c",t[j]);
   }
   //-----------------------------------------
   char h[50]="BE SMART :)";
   gotoxy(28,10);
    for(j=0;j<16;j++)
   {
   delay(60);
   printf("%c",h[j]);
   }
    //--------------------------------=------------
   char n[50]="BE SAFE.";
   gotoxy(45,10);
    for(j=0;j<16;j++)
   {
   delay(60);
   printf("%c",n[j]);
   }

   //=-----------------------------------------
   char d[50]="HAVE A NICE DAY.";
   gotoxy(33,12);
    for(j=0;j<24;j++)
   {
   delay(60);
   printf("%c",d[j]);
   }

   //=-----------------------------------------
   char r[50]="REGARDS WAQAR AHMAD HANIFI";
   gotoxy(27,14);
    for(j=0;j<28;j++)
   {
   delay(60);
   printf("%c",r[j]);
   }

   //=-----------------------------------------
   char cr[50]="COPY RIGHT  HANIFI";
   gotoxy(30,22);
    for(j=0;j<17;j++)
   {
   delay(60);
   printf("%c",cr[j]);
   }


getch();
exit(0);
}
}
}

	//END OF MENU
//-----------------------------------

//ADD BOOK FUNCTION STATEMENT

void add_book()
{
if(count==3)    //CHANGE THIS "[3]" IF YOU WANT TO CHANGE THE LIMIT OF
{               // ADDING BOOKS
gotoxy(7,11);
textcolor(15+BLINK);
cprintf("YOU CAN ONLY ADD 3 BOOKS [ OVER LIMIT ]");
return;
}
//==============
		      //ADDING STARTED
gotoxy(x,y);
textcolor(YELLOW);
cprintf(" ENTER DETAILS OF BOOK ");
textcolor(15);
printf("\n ID.NO OF BOOK: ");
scanf("%d",&b[count].id_no);
fflush(stdin);
printf("\n PELASE ENTER BOOK TITLE:");
gets(b[count].book_title);
fflush(stdin);
printf("\n PLEASE ENTER THE NAME OF AUTHOR:");
gets(b[count].author);
fflush(stdin);
printf("\n WHAT IS THE COST OF BOOK:");
scanf("%d",&b[count].cost);
printf("\n\n\nDATA ENTERED SUCCESSFULLY");
count++;
}

     //END OF ADD BOOK
//***********************
     //DISPLAY BOOK FUNCTION STATEMENT STARTS


void disp_book()
{
int i;
gotoxy(x,y);
textcolor(RED);
cprintf(" NOW DISPLAYING DETAIL OF ALL BOOKS IN LIBRARY");
for(i=0;i<count;i++)
{
printf("\n BOOK ID # %d",b[i].id_no);
printf("\n BOOK TITLE: %s",b[i].book_title);
printf("\n NAME OF AUTHOR: %s",b[i].author);
printf("\n BOOK COST: %d",b[i].cost);
printf("\n\n");
}
}


      //END OF DISPLAY
//*********************
    //SEARCH BOOK BY AUTHOR NAME OR ID FUNCTION STATEMENT STARTS

void search_authr()
{
clrscr();
int i,cnt=0;
char name[20];
printf("\n WHAT IS THE NAME OF AUTHOR YOU WANT TO SEARCH: ");
scanf("%s",&name);


for(i=0;i<count;i++)
{
if(strcmp(name,b[i].author)==0)
{
clrscr();
cnt++;
printf("\n BOOK ID #: %d",b[i].id_no);
printf("\n BOOK TITLE: %s",b[i].book_title);
printf("\n NAME OF AUTHOR: %s",b[i].author);
printf("\n BOOK COST: %d",b[i].cost);
printf("\n\n");
}
}

if(cnt==0)        //nested if
{
printf("\n !!! NO BOOK FOUND !!! \n");
}
}


//-************************************************************

//SEARCH BOOK BY  ID FUNCTION STATEMENT STARTS

void search_id()
{
int i,cnt=0,id;
gotoxy(x,y);
printf("PLESE PROVIDE ID# OF THE DESIRE BOOK: ");
scanf("%d",&id);

for(i=0;i<count;i++)
{
if(id==b[i].id_no)
{
clrscr();
cnt++;
printf("\n BOOK ID # %d",b[i].id_no);
printf("\n BOOK TITLE: %s",b[i].book_title);
printf("\n NAME OF AUTHOR: %s",b[i].author);
printf("\n BOOK COST: %d",b[i].cost);
printf("\n\n");
}
}
if(cnt==0)        //nested if
{
printf("\n !!! NO BOOK FOUND !!! \n");
}
}

//*******************************

void count_book()     //display total no of books in liberary
{
gotoxy(x,y);
printf(" TOTAL NUMBER OF BOOK IN LIBERARY IS: %d",count);
}

//**************************************************

		    //password on top
void Password(void) //for password option
{

   system("cls");
   char d[35]="PASSWORD PROTECTED APPLICATION";
   char code,pass[60],user;
   int i=0,j;
   gotoxy(5,6);
    for(j=0;j<20;j++)
    {
    delay(70);
    textcolor(15);
    cprintf("*");
    }
    for(j=0;j<30;j++)
   {
   delay(60);
   textcolor(4);
   cprintf("%c",d[j]);
   }
   for(j=0;j<20;j++)
   {
   delay(70);
   textcolor(15);
   cprintf("*");
   }


   gotoxy(15,10);
   cprintf("USER NAME:");          //ANY USER NAME WILL WORK
   scanf("%s",user);

   gotoxy(15,13);
   cprintf("Enter Password:");

   while(code!=13)
   {
    code=getch();

    if(code!=13 && code!=8){
    putch('*');
    pass[i] = code;
    i++;
    }
   }
   pass[i] = 0;
   if(strcmp(pass,password)==0)
   {

    gotoxy(15,16);
    printf("Password match");
    gotoxy(17,18);
    printf("Press any key to countinue.....");
    getch();
    clrscr();
    welcome();
    menu();
   }
   else
   {
   char retry;
     gotoxy(15,16);
     textcolor(15);
     printf("Warning!! Incorrect Password");
     gotoxy(17,18);
     printf("RETRY Y/N");
     retry=getch();

     if(retry=='y')
     {
     clrscr();
     Password();
     }
     if(retry=='Y')
     {
     clrscr();
     Password();
     }
     if(retry=='n')
     {
     exit(0);
     }
     if(retry=='N')
     {
     exit(0);
     }
     getch();

   }
    }



void welcome (void)
     {
   system("cls");

//========================1
clrscr();
delay(500);
clrscr();
   window(1,1,25,80);
   textbackground(1);
   clrscr();

   //==============================2
   delay(250);
   clrscr();
   window(5,2,75,23);
   textbackground(2);
   clrscr();
   //======================3
   delay(250);
   clrscr();
   window(10,4,70,21);
   textbackground(3);
   clrscr();

   //=================4
   delay(250);
   clrscr();
   window(15,6,65,19);
   textbackground(4);
   clrscr();
   //===============5
   delay(250);
   clrscr();
   window(20,8,60,16);
   textbackground(5);
   clrscr();

   //=======================6
   delay(250);
   clrscr();
   window(25,10,55,14);
   textbackground(6);
   clrscr();

   //================7
   delay(250);
   clrscr();
   window(26,12,53,12);
   textbackground(7);
   clrscr();


   char welcome[50]="WELCOME USER ";
   int j;
   gotoxy(25,12);
    for(j=0;j<12;j++)
   {
   delay(300);
   printf(" %c",welcome[j]);
   }

   getch();

   //=====================7
   delay(250);
   clrscr();
   window(30,12,50,12);
   textbackground(7);
   clrscr();

   //=======================6
   delay(250);
   clrscr();
   window(25,10,55,14);
   textbackground(6);
   clrscr();

     //===============5
   delay(250);
   clrscr();
   window(20,8,60,16);
   textbackground(5);
   clrscr();

   //=================4
   delay(250);
   clrscr();
   window(15,6,65,19);
   textbackground(4);
   clrscr();


   //======================3
   delay(250);
   clrscr();
   window(10,4,70,21);
   textbackground(3);
   clrscr();


   //==============================2
   delay(250);
   clrscr();
   window(5,2,75,23);
   textbackground(2);
   clrscr();



//========================1
clrscr();
delay(250);
clrscr();
   window(1,1,25,80);
   textbackground(9);
   clrscr();


   }

