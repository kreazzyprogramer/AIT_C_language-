/*             * * * * * *  * *  * * * * ** * * * * * * *
	      *                                           *
	     *	A I R   L I N E    R E S E R V  T I O N    *
	    *		     S Y S T E M                    *
	   *  * * * * * * * * * * * * * *  ** * * * * * * * *

*/

//THIS PROGRM IN CODED BY WAQAR AHMAD HANIFI.A
// STUDENT OF C.I.T SEC "C" FIRST YEAR ,A.I.T

//THIS IS A AIRLINE RESERVATION PROGRAM WHIC PREFORM THE FOLLOWING TASKS.

//MAINLY  FILLING AND GRAPHICS IN USED IN THIS PROGRAM.

//MULTI[PAL SWITCH ARE USED

//1-ADD NEW DATA TO FILE

//2-READ ALL DATA FROM FILE

//3-DELETE DATA FROM FILE

//4-SEARCH

//MANY MORE

//MULTIPAL FILES ARE CREATRD IN THIS PROGRAM


		      //SEVERAL LIBERIES
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>


struct airline                   //CREATING STRUCTURE
{
 char name[30],sir_name[30],address[50],contect[15],passport[20];
 char cnic[20],city[20],country[20],email[20],cho[20];

 char fair[10],pid[10],from[20],to[20];
 char dep[10],ariv[10] ;

 char seat[10];

}air;  //STRUCTURE IDENTIFIRE

//******************************************************************

void busplaneread();
void busplanewrite();

void ecoplanewrite();
void ecoplaneread();            //SEVERAL FUNCTION CALLING


void bussseat();
void ecoseat();


void insert();
void disp();


void coustomer_form();
void get();
void loading();
void search_form();



void deletefile();
void update();

int empty();
void hanifi();
void start (void);
int Password (void);
void exit (void);
//************************************************************************
int Proceed;        //GLOBLE VARIABLE DECLERATION

///*******************************************************************

		// MAIN PROGRAM STARTRD
void main()
{
system("cls");
start();
loading();
//top:


 int cho, emp;
 int cho1=NULL,cho2,i;
 while(1)
 {
 top:
 int driver=VGA,mode=VGAHI;   	//detect best driver and mode
 initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode
 setbkcolor(1);

 fflush(stdin);

  gotoxy(8,3);
  textcolor(4);
  cprintf("W E L C O M E   T O   T H E   A I R L I N R    R E S E R V A T I O N");	//setting the position and the font
  textcolor(15);

  gotoxy(20,5);
  printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2 MENU \xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

  gotoxy(25,7);
  printf("1.\xb2\xb2 BOOK TICKET");
 /*
  gotoxy(25,9);
  printf("2.\xb2\xb2 DISPLAY ALL DATA ");
   */
  gotoxy(25,9);
  printf("2.\xb2\xb2 TRACKING");

  gotoxy(25,11);
  printf("3.\xb2\xb2 VIEW FLIGHTS");

  gotoxy(25,13);
  printf("4.\xb2\xb2 DELETING");

  gotoxy(25,15);
  printf("5.\xb2\xb2 ADMINISTARTIVE FUNCTIONS");
/*
  gotoxy(25,19);
  printf("7.\xb2\xb2 UPDATEING");  //NOT WORKING PROPERLY
  */
  gotoxy(25,17);
  printf("6.\xb2\xb2 EXIT");

  printf("\nEnter your choice:");
  scanf("%d", &cho);
  printf("\n");

  switch (cho)
  {

  case 1:
   insert();
   break;
    /*
  case 2:
   disp();
   break;
      */
  case 2:
  emp = empty();
   if (emp == 0)
   printf("\n The file is EMPTY\n");
   else
   search_form();
   getch();
   break;

  case 3:
 system("cls");
 initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode
 setbkcolor(4);

  gotoxy(15,7);
  printf("PERSS \xB2\xB2 1 \xB2\xB2  TO  VIEW BUSSNIESS CLASS PLANE");
  gotoxy(15,10);
  printf("PERSS \xB2\xB2 2 \xB2\xB2  TO  VIEW  ECONOMY  CLASS PLANE");

  gotoxy(15,16);
  printf("PLEASE ENTER YOUR DESIRE CHOICE");
  scanf("%d",&cho2);

 switch (cho2)
  {

  case 1:

 busplaneread();
 getch();
 goto top;

  case 2:
 ecoplaneread();
 getch();
 goto top;

  }

  case 4:

   deletefile();
   break;

  case 8:
  emp = empty();
   if (emp == 0)
   printf("\n The file is EMPTY\n");
   else
   update();
   break;

  case 5:
	system("cls");
	do
	{
	   Proceed = Password();         //	CHECK THE PASSWORD
	} while ( Proceed!=1);
 initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode
 setbkcolor(4);

  gotoxy(15,7);
  printf("PERSS \xB2\xB2 1 \xB2\xB2 TO ADD BUSSNIESS CLASS PLANE");
  gotoxy(15,10);
  printf("PERSS \xB2\xB2 2 \xB2\xB2 TO ADD ECONOMY CLASS PLANE");

  gotoxy(15,16);
  printf("PLEASE ENTER YOUR DESIRE CHOICE");
  scanf("%d",&cho1);

 switch (cho1)
 {

 case 1:
 busplanewrite();
 goto top;

  case 2:
 ecoplanewrite();
 goto top;

 default :
 printf("\nYour choice is wrong\nPlease try again...\n");
 getch();
 main();
 break;
     }
   case 6:
  exit();
   exit(0);
   break;

  default:
   printf("\nYour choice is wrong\nPlease try again...\n");
   getch();
   break;
//cleardevice();
//closegraph();

  }
 }
 }
//********************************************************
//MAIN FINCTION ENDED
//********************************************************



	//    FUNCTION TO add  RECORDS TO THE FILE
void insert()

{
system("cls");


int cho1;

char another;
another = 'y';
while(another == 'y')

{
int driver=VGA,mode=VGAHI;   	//detect best driver and mode
initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode

setbkcolor(1);

 FILE *fp;

fp = fopen("c:\\airline.txt", "a"); //MAIN FILE OPENING   IN APPAND MODE

  gotoxy(15,7);
  printf("PERSS \xB2\xB2 1 \xB2\xB2 TO ADD BUSSNIESS CLASS PLANE");
  gotoxy(15,10);
  printf("PERSS \xB2\xB2 2 \xB2\xB2 TO ADD ECONOMY CLASS PLANE");

  gotoxy(15,16);
  printf("PLEASE ENTER YOUR DESIRE CHOICE");
  scanf("%d",&cho1);


if(cho1==1)
{
system("cls");
busplaneread();
gotoxy(1,25);
printf("PLEASE SELLECT A PLANE ID: ");
scanf("%s",air.pid);
strupr(air.pid);
bussseat();

}
if (cho1==2)
{
ecoplaneread();
gotoxy(1,25);
printf("PLEASE SELLECT A PLANE ID: ");
scanf("%s",air.pid);
strupr(air.pid);
ecoseat();

}
//::::::::::::::::::::::SELLECTION OF AIRLINE ENDED::::::::::::::::::::::::::

//::::::::::::::::::::::FORM STARTED::::::::::::::::::::::::::::::::::::::::

initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode

   int x=120,x1=121;
   setbkcolor(1);
   setcolor(14);

   settextstyle(1,0,4);
   outtextxy(190,15,"RESERVATION FORM");

   setcolor(15);
   settextstyle(2,0,5);
   setcolor(15);
   outtextxy(10,150,"FIRST NAME");

    setcolor(6);
   rectangle(310,163,x,141);
   line(310,142,x1,142);
   line(x1,163,x1,141);

    setcolor(15);
   outtextxy(320,145,"LAST NAME");
    setcolor(6);
   rectangle(590,163,400,141);
   line(590,142,400,142);
   line(399,141,399,163);

    setcolor(15);
   outtextxy(20,190,"ADDRESS");
    setcolor(6);
   rectangle(590,225,x,175);

   setcolor(15);
   outtextxy(20,240,"CITY");
   setcolor(6);
   rectangle(310,257,x,235);
   line(310,236,x1,236);
   line(x1,257,x1,235);

   setcolor(15);
   outtextxy(320,242,"COUNTRY");

   setcolor(6);
   rectangle(590,257,400,235);
   line(590,236,401,236);
   line(401,257,401,235);


   setcolor(15);
   outtextxy(10,272,"MOBILE #");
   setcolor(6);
   rectangle(310,289,x,266);
   line(310,267,x1,267);
   line(x1,288,x1,266);

   setcolor(15);
   outtextxy(335,272,"N-I-C #");
   setcolor(11);
   rectangle(590,289,400,266);
   line(590,267,400,267);
   line(401,266,401,289);

   setcolor(15);
   outtextxy(10,304,"PASSPORT #");
   setcolor(6);
   rectangle(310,321,x,299);
   line(310,300,x1,300);
   line(x1,321,x1,300);

   setcolor(15);
   outtextxy(335,304,"E-MAIL");
   setcolor(6);
   rectangle(590,321,400,299);
   line(590,300,400,300);
   line(401,321,401,300);



   gotoxy(18,10);
   gets(air.name);

  gotoxy(18,10);
   gets(air.name);

   gotoxy(53,10);
   gets(air.sir_name);

   gotoxy(20,13);
   gets(air.address);

   gotoxy(20,16);
   gets(air.city);

   gotoxy(52,16);
   gets(air.country);

   gotoxy(20,18);
   gets(air.contect);

   gotoxy(52,18);
   gets(air.cnic);

   gotoxy(20,20);
   gets(air.passport);

   gotoxy(52,20);
   gets(air.email);
//-------------------FORM ENDED--------------------------------------------


//------------------CONVERTING ALL DATA IN TO UPPER CASE--------------------

 strupr(air.name);
 strupr(air.sir_name);
 strupr(air.contect);
 strupr(air.address);
 strupr(air.cnic);
 strupr(air.passport);
 strupr(air.city);
 strupr(air.country);
 strupr(air.email);
//-----------------CONVERSION ENDED-----------------------------------


 fwrite(&air, sizeof(air), 1, fp);  //WRITE ALL DATA OF STRICTURE INTO FILE
 fclose(fp); //CLOSE MAIN FILE APPAND MODE
fflush(stdin);
another = getche(); //ASKING TO ADD ANOTHER RECORD
closegraph();
}
}
//:::::::::::::::::::::::INSERT FUNCTION ENDED::::::::::::::::::::::::::::::



//:::::::::::::::::::::::FUNCTION TO DISPLAY RECORDS START:::::::::::::::::

void disp()
{
system("cls");

int g=DETECT,d;
 initgraph(&g,&d,"c:\\tc\\bgi");
setbkcolor(1);


 FILE *fp;
 fp = fopen("c:\\airline.txt", "r"); //MANE FILE OPEN IN READ MODE

outtextxy(180,10,"SHOWING BASIC COUSTOMER INFORMATION");

printf(" \n\n\n\n NAME\t\t  CONTECT\t  ADDRESS\t   C.N.I.C\t  COUNTRY\n");
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n\n");

  while (fread ( &air,sizeof(air),1,fp)==1) //FRADING FROM MAIN FILE
 {

 printf("%s %s %15s %17s %18s %s\n", air.name, air.sir_name, air.contect, air.address,air.cnic,air.country);

}

 fclose(fp); //MAIN FILE CLOSED READ MODE

 getch();
}

///:::::::::::::::::::::::DISPLAY FUNCTION ENDED:::::::::::::::::::::::::::


//::::::::::::::::::::::FUNCTION TO SEARCH THE GIVEN RECORD::::::::::::::::


void search_form()
{
system("cls");
int g=DETECT,d;
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

 FILE *fp;

 char cnic[20];//CNIC IN A TEMPARERY CHARACTOR TO MATCH WITH ORIGINAL

 fflush(stdin); //CLEAR ANY GARBEG FROM KEYBOARD MEMORY

 outtextxy(90,210,"PLEASE PROVIDE THE C.N.I.C NUMBER YOU WANT TO TRACK :");

 strupr(cnic);
 gotoxy(67,14);
 gets(cnic);
 strupr(cnic);


   fp = fopen("c:\\airline.txt", "r");   //MAIIN FILE OPEN IN READ MODE

   while (fread(&air, sizeof(air), 1, fp)==1)  //READING DATA FROM MAIN FILE

   {                        //WHILE LOOP IS USED FOR READING ALL THE FEALDS

   if(strcmp(cnic,air.cnic)==0) //COMPARING TEMP(CNIC) WITH STRUCTURE

   {

   cleardevice();

   int x=120,x1=121;
   setcolor(14);

   settextstyle(2,0,9);
   outtextxy(70,15,"COUSTOMER RESERVATION DETAILS");

   setcolor(15);
   settextstyle(2,0,5);
   setcolor(15);
   outtextxy(10,150,"FIRST NAME");

    setcolor(6);
   rectangle(310,163,x,141);
   line(310,142,x1,142);
   line(x1,163,x1,141);

    setcolor(15);
   outtextxy(320,145,"LAST NAME");
    setcolor(6);
   rectangle(590,163,400,141);
   line(590,142,400,142);
   line(399,141,399,163);

    setcolor(15);
   outtextxy(20,190,"ADDRESS");
    setcolor(6);
   rectangle(590,225,x,175);

    setcolor(15);
   outtextxy(20,240,"CITY");
    setcolor(6);
   rectangle(310,257,x,235);
   line(310,236,x1,236);
   line(x1,257,x1,235);

    setcolor(15);
   outtextxy(320,242,"COUNTRY");

    setcolor(6);
   rectangle(590,257,400,235);
   line(590,236,401,236);
   line(401,257,401,235);


    setcolor(15);
   outtextxy(10,272,"MOBILE #");
    setcolor(6);
   rectangle(310,289,x,266);
   line(310,267,x1,267);
   line(x1,288,x1,266);

    setcolor(15);
   outtextxy(335,272,"N-I-C #");
    setcolor(11);
   rectangle(590,289,400,266);
   line(590,267,400,267);
   line(401,266,401,289);

    setcolor(15);
   outtextxy(10,304,"PASSPORT #");
    setcolor(6);
   rectangle(310,321,x,299);
   line(310,300,x1,300);
   line(x1,321,x1,300);

    setcolor(15);
   outtextxy(335,304,"E-MAIL");
    setcolor(6);
   rectangle(590,321,400,299);
   line(590,300,400,300);
   line(401,321,401,300);

///----------------------------PLANE INFORMATION----------------------------

   setcolor(15);
   outtextxy(10,330,"PLANE I. D");

   setcolor(11);
   rectangle(275,332,135,352);
   rectangle(274,332,134,352);

   setcolor(15);
   outtextxy(335,330,"FARE");

   setcolor(12);
   rectangle(410,332,540,352);
   rectangle(409,332,539,352);

   setcolor(15);
   outtextxy(10,360,"DEPARTURE ");

   setcolor(12);
   rectangle(275,365,135,385);
   rectangle(274,365,134,385);

   setcolor(15);
   outtextxy(335,360,"ARRIVAL ");

   setcolor(12);
   rectangle(410,365,540,385);
   rectangle(409,365,539,385);

   setcolor(15);
   outtextxy(10,390,"FROM");

   setcolor(12);
   rectangle(300,395,134,415);
   rectangle(299,395,133,415);


   setcolor(15);
   outtextxy(313,390,"DESTINATION");

   setcolor(12);
   rectangle(410,395,570,415);
   rectangle(409,395,569,415);
//====================================SEAT INFORMATION===================

   setcolor(15);
   outtextxy(10,425,"SEAT #");

   setcolor(12);
   rectangle(274,430,134,452);
   rectangle(273,429,134,451);

/////printing started......................................................

   setcolor(15);

   settextstyle(2,0,5);

   outtextxy(140,145,air.name);

   outtextxy(430,145,air.sir_name);

   outtextxy(155,185,air.address);

   outtextxy(140,236,air.city);

   outtextxy(430,236,air.country);

   outtextxy(140,267,air.contect);

   outtextxy(430,267,air.cnic);

   outtextxy(140,302,air.passport);

   outtextxy(410,302,air.email);


///===================PLANE INFORMATION========================================


  outtextxy(155,333,air.pid);

  outtextxy(430,333,air.fair);
//................................................

   settextstyle(0,0,2);  //text style is (2)=bold for depatyre and arrival

   outtextxy(160,370,air.dep);   //dep cordinates

   outtextxy(445,370,air.ariv);   //ariv cordinates

//.................................................

   settextstyle(0,0,1);

   outtextxy(155,403,air.from);   //from cordinates

   outtextxy(445,403,air.to);    //to cordinates

   outtextxy(150,435,air.seat);    //seat cordinates


 getch();

 } //while closed

 }//if closed

}//::::::::::::::::::::::::::::::::search function closed:::::::::::::::::::



// :::::::::::::::::::::: FUNCTION TO DELETE A RECORD::::::::::::::::::::::


void deletefile()
{

int g=DETECT,d;
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

 FILE *fp;
 FILE *fpt;
 char cnic[20];  //this is for compair with original in file

 fp = fopen("c:\\airline.txt", "r");  //OPENING MAIN FILE IN READ MODE

  fpt = fopen("c:\\TempFile.txt", "w"); //CTEATING A TEMPRAY FILE

//    fread(&air,sizeof(air),1,fp);
  fflush(stdin);  //CLEAR ANY GARBEG FROM KEYBOARD MEMORY

 outtextxy(90,198,"PLEASE PROVIDE THE C.N.I.C NUMBER YOU WANT TO DELETE :");

strupr(cnic);
 gotoxy(67,13);
  gets(cnic);
strupr(cnic);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 //THIS STEP ID NOT WORKING PROPERLY

 initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

 while (fread(&air, sizeof(air), 1, fp)==1)  //READING DATA FROM MAIN FILE
 {                            //WHILE LOOP IS USED FOR READING ALL THE FEALDS
 if(strcmp(cnic,air.cnic)==0) //COMPARING TEMP(CNIC) WITH STRUCTURE
 {
 printf("\nNAME              = %s %s", air.name,air.sir_name);
 printf("\nCONTECT NUMBER    = %s",air.contect);
 printf("\nADDRESS           = %s",air.address);
 printf("\nCITY              = %s",air.city);
 printf("\nC.N.I.C NUMBER    = %s",air.cnic);
 printf("\nPASSPORT NUMBER   = %s",air.passport);
 printf("\nPLANE ID NUMBER   = %s",air.pid);
 printf("\nFLIGHT FROM       = %s",air.from);
 printf("\nFLIGHT DESTENATION= %s",air.to);
 printf("\nFLIGHT DEPARTURE  = %s",air.dep);
 printf("\nFLIGHT ARRIVAL    = %s",air.ariv);
 printf("\nFLIGHT FARE       = %s .00 PKR \n ",air.fair);
  getch();
  } // if closed
 } // while closed
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//ABOVE STEP WAS TO SHOW THE OLD REACORD (NOT WORKING PROPERLY)

//RECODE WILL DELETE WITHOUT ASKING  (AFTER YOU HIT ANY KEY)

//while(fread(&air,sizeof(air),1,fp)==1)  //READING DATA FROM MAIN FILE

  // {		       //WHILE LOOP IS USED FOR READING ALL THE FEALDS

if(strcmp(cnic,air.cnic)!=0)   //COMPARING TEMP(CNIC) WITH STRUCRUER
{
fwrite(&air,sizeof(air),1,fpt); //WIRTIND ALL REAMING DATA IN TEMPARARY FILE
}

//}//WHILE CLOSED

fclose(fp); //MAIN FILE CLOSED

fclose(fpt); //TEMPARARORY FILE CLOSED

remove("c:\\airline.txt");//REMOVIG MAIN FILE
rename("c:\\TempFile.txt","c:\\airline.txt");//RENAMEING TEMP FILE WITH ORIGINAL ONE

outtextxy(120,360,"DELETED SUCCESFULLY...");//MASSAGE
getch();

 } //::::::::::::::::::::DELETE FUNCTION CLOSED::::::::::::::::::::::::::::::



//:::::::::::::::::::::::::: FUNCTION TO UPDATE THE RECORD:::::::::::::::::

	    //NOT WORKING PROPERLY
	    //NOT INCLIDED IN MENU


void update()
{ //FUNCTION OPENING

FILE *fp ;
fp = fopen ("c:\\airline.txt", "a" );   //OPENING MAIN FILE IN APPAND MODE

fp = fopen ("c:\\airline.txt", "r" );   //OPENING MAIN FILE IN READ MODE

//char another;  //USED FOR WHILE TO ADD NEW RECORD
char cnic[20]; //TEMP VARIABLE

long int recsize;    //MAKIND NEW VARIABLE
recsize=sizeof(air); //RELACING

system("cls");
//another = 'y'||'Y'; // DECLARING ANOTHER
//while(another == 'y'||'Y')
//{  //ANOTHER WHILE OPENING

 window(1,2,80,25);
textbackground(1);
clrscr();
textcolor(15);

fflush(stdin);
printf("ENTER CUSTOMER C.N.I.C TO UPDATE: ");
gets(cnic); //GETTING TEMP CINC

rewind(fp); //MOVE CURCER(FILE) 1 STEP BACK
while(fread(&air,recsize,1,fp)==1)
{					 /// read all record from file
if(strcmp(air.cnic,cnic) == 0)
{ ///if entered cnic matches with original-cnic in file
	    printf("\nYOUR OLD RECORD WAS AS:\n\n");


 printf("\nNAME              = %s %s", air.name,air.sir_name);
 printf("\nCONTECT NUMBER    = %s", air.contect);
 printf("\nADDRESS           = %s", air.address);
 printf("\nC.N.I.C NUMBER    = %s", air.cnic);
 printf("\nPASSPORT NUMBER   = %s", air.passport);
getch();
fflush(stdin);
printf("\nEnter new name: ");
gets(air.name);

printf("\nEnter new sir name: ");
gets(air.sir_name);

printf("\nEnter new contect : ");
gets(air.contect);

printf("\nEnter new address: ");
gets(air.address);

printf("\nEnter new cnic: ");
gets(air.cnic);

printf("\nEnter new passport: ");
gets(air.passport);

fseek(fp,-recsize,SEEK_CUR); /// move the cursor 1 step back from current position
fwrite(&air,recsize,1,fp); /// override the record
}
}

/*
printf("\nModify another record(y/n)");
fflush(stdin);
another = getche();
*/
fclose(fp);
}
//:::::::::::::::::::::::::::UPDATE ENDED::::::::::::::::::::::::::::::



//:::::::::::::FUNCTION TO CHECK THE FILE IS EMPTY OR NOT::::::::::::::::
int empty()
{
 int c = 0;
 FILE *fp;
 fp = fopen("c:\\airline.txt", "r");
 while (fread(&air, sizeof(air), 1, fp))
  printf("empty");
  c = 1;
 fclose(fp);
 return c;
}
//::::::::::::::::::::::::::::::::EMPTY ENDED:::::::::::::::::::::::



void ecoplanewrite()   //function to write
{
system("cls");
int g=DETECT,d;

FILE *fp;

  fp = fopen("c:\\ecoplane.txt","a");

char another = 'y';
while(another == 'y'){
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

gotoxy(20,2);
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xb2\xB2 ECONOMY CLASS \xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDb\xDB\n\n");

  fflush(stdin);
printf("ENTER PLANE I.D : ");
gets(air.pid);

  fflush(stdin);
printf("ENTER FROM : ");
gets(air.from);

  fflush(stdin);
printf("ENTER DESTINATION : ");
gets(air.to);

  fflush(stdin);
printf("TIME OF DEPARTURE :");
gets(air.dep);

  fflush(stdin);
printf("TIME OF ARRIVAL :");
gets(air.ariv);


  fflush(stdin);
printf("ENTER FARE : ");
gets(air.fair);

fwrite(&air,sizeof(air),1,fp);
printf("DATA ENTERED SUCCESSFULLY\n\n");


printf("DO YOU WANT TO ADD MORE DATA\n\nIF YES PRESS Y\n\nIF NO PRESS ANY KEY TO RETURN TO MAIN MENU");

fflush(stdin);
another = getche();
clrscr();
}
 fclose(fp);

}
//:::::::::::::::::::::ECO WRITE ENDED:::::::::::::::::::::::::


//::::::::::::::::::::::::ECO READ::::::::::::::::::::::

void ecoplaneread()
{

int g=DETECT,d;
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

FILE *fp;

fp = fopen("c:\\ecoplane.txt","rb+");


gotoxy(20,2);
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xb2\xB2 ECONOMY CLASS \xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDb\xDB\n\n");

printf("\n\n\n FLIGHT I.D   FROM \t  DESTENATION\tDEPATURE     ARRIVAL\t   FARE\n\n");
while(fread(&air,sizeof(air),1,fp)==1)
{
strupr(air.from);
strupr(air.pid);
strupr(air.to);
strupr(air.dep);
strupr(air.fair);
strupr(air.ariv);
printf(" %s  %13s %13s  %10s %12s %10sRS\n",air.pid,air.from,air.to,air.dep,air.ariv,air.fair);
}
  fclose(fp);
}

//*************************************




//***************************************************
void busplanewrite()
{
int g=DETECT,d;
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);

FILE *fp;

  fp = fopen("c:\\busplane.txt","a");
system("cls");
 window(1,2,80,25);
textbackground(1);
clrscr();
textcolor(15);

char another = 'y';

while(another == 'y')
{
gotoxy(20,2);
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xb2\xB2 BUSSNIESS CLASS \xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDb\xDB\n\n");

 fflush(stdin);
printf("ENTER PLANE I.D : ");
gets(air.pid);

  fflush(stdin);
printf("ENTER FROM : ");
gets(air.from);

  fflush(stdin);
printf("ENTER DESTINATION : ");
gets(air.to);

  fflush(stdin);
printf("TIME OF DEPARTURE :");
gets(air.dep);

  fflush(stdin);
printf("TIME OF ARRIVAL :");
gets(air.ariv);


  fflush(stdin);
printf("ENTER FARE : ");
gets(air.fair);

fwrite(&air,sizeof(air),1,fp);

printf("DATA ENTERED SUCCESSFULLY\n\n");


printf("DO YOU WANT TO ADD MORE DATA\n\nIF YES PRESS Y\n\nIF NO PRESS ANY KEY TO RETURN TO MAIN MENU");
fflush(stdin);
another=getch();
}
 fclose(fp);
}

//*************************************************************
void busplaneread()

{

int g=DETECT,d;
initgraph(&g,&d,"c:\\tc\\bgi");

setbkcolor(1);


FILE *fp;

fp = fopen("c:\\busplane.txt","r");


gotoxy(20,2);
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xb2\xB2 BUSSNIESS CLASS \xB2\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDb\xDB");
printf("\n\n\n FLIGHT I.D   FROM \t  DESTENATION\tDEPATURE     ARRIVAL\t   FARE\n\n");
while(fread(&air,sizeof(air),1,fp)==1)
{
strupr(air.from);
strupr(air.pid);
strupr(air.to);
strupr(air.dep);
strupr(air.fair);
strupr(air.ariv);
printf(" %s  %13s %13s  %10s %12s %10sRS\n",air.pid,air.from,air.to,air.dep,air.ariv,air.fair);
}
}
//***************************************************
void ecoseat()
{
system("cls");

char ecocho[10];
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

setbkcolor(4);

setfillstyle(3,1);
bar(145,160,200,350);
bar(410,160,475,350);

settextstyle(3,0,4);
outtextxy(150,20,"ECOMNOMY SEAT MAP");

settextstyle(2,0,4);
outtextxy(150,80,"PLEASE SELLET YOUR DESIRE SEET ACCORDING TO YOUR NEED.");

setcolor(15);
outtextxy(550,80,"LEGITS");

setcolor(10);
outtextxy(550,95,"\xdB");
setcolor(15);
outtextxy(560,95," WINDO SEAT");

setcolor(1);
outtextxy(550,105,"\xdB");
setcolor(15);
outtextxy(560,105,"BIG FOOT AREA");




settextstyle(2,0,4);


setcolor(10);
outtextxy(25,150,"A1");


setcolor(15);
outtextxy(75,150,"B1");

outtextxy(120,150,"C1");

setcolor(1);

outtextxy(220,150,"D1");

outtextxy(260,150,"E1");

outtextxy(300,150,"F1");

outtextxy(340,150,"G1");

outtextxy(380,150,"H1");

setcolor(15);

outtextxy(500,150,"I1");

outtextxy(540,150,"J1");

setcolor(10);
outtextxy(580,150,"K1");

//=======================ROW 2=======================

setcolor(10);
outtextxy(25,200,"A2");

setcolor(15);
outtextxy(75,200,"B2");

outtextxy(120,200,"C2");


outtextxy(220,200,"D2");

outtextxy(260,200,"E2");

outtextxy(300,200,"F2");

outtextxy(340,200,"G2");

outtextxy(380,200,"H2");

outtextxy(500,200,"I2");

outtextxy(540,200,"J2");

setcolor(10);
outtextxy(580,200,"K2");

//===================ROW 3=======================
setcolor(10);
outtextxy(25,250,"A3");

setcolor(15);
outtextxy(75,250,"B3");

outtextxy(120,250,"C3");


outtextxy(220,250,"D3");

outtextxy(260,250,"E3");

outtextxy(300,250,"F3");

outtextxy(340,250,"G3");

outtextxy(380,250,"H3");

outtextxy(500,250,"I3");

outtextxy(540,250,"J3");

setcolor(10);
outtextxy(580,250,"K3");

//================ROW 4==================================

setcolor(10);
outtextxy(25,300,"A4");

setcolor(15);
outtextxy(75,300,"B4");

outtextxy(120,300,"C4");


outtextxy(220,300,"D4");

outtextxy(260,300,"E4");

outtextxy(300,300,"F4");

outtextxy(340,300,"G4");

outtextxy(380,300,"H4");

outtextxy(500,300,"I4");

outtextxy(540,300,"J4");

setcolor(10);
outtextxy(580,300,"K4");

//===================ROW 5==========================

setcolor(10);
outtextxy(25,350,"A5");

setcolor(15);
outtextxy(75,350,"B5");

outtextxy(120,350,"C5");


outtextxy(220,350,"D5");

outtextxy(260,350,"E5");

outtextxy(300,350,"F5");

outtextxy(340,350,"G5");

outtextxy(380,350,"H5");

outtextxy(500,350,"I5");

outtextxy(540,350,"J5");

setcolor(10);
outtextxy(580,350,"K5");


setcolor(14);
outtextxy(200,385,"PLEASE ENTER YOUR DESIRE SEAT: ");
gotoxy(49,25);
strupr(air.seat);

gets(air.seat);

getch();
}

void bussseat(void)
{
system("cls");
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

setbkcolor(4);

setfillstyle(3,3);
bar(145,160,200,260);
bar(410,160,475,260);
bar(290,160,326,260);

settextstyle(3,0,4);
outtextxy(130,20,"BUSSINESS SEAT MAP");

settextstyle(2,0,4);
outtextxy(132,80,"PLEASE SELLET YOUR DESIRE SEET ACCORDING TO YOUR NEED.");

setcolor(15);
outtextxy(550,80,"LEGITS");

setcolor(10);
outtextxy(550,95,"\xdB");
setcolor(15);
outtextxy(560,95," WINDO SEAT");

setcolor(1);
outtextxy(550,105,"\xdB");
setcolor(15);
outtextxy(560,105,"ULTRA LEXURY");




settextstyle(2,0,4);


setcolor(10);
outtextxy(25,150,"A1");


setcolor(15);
outtextxy(75,150,"B1");

outtextxy(120,150,"C1");

setcolor(1);

outtextxy(220,150,"D1");

outtextxy(260,150,"E1");


outtextxy(340,150,"G1");

outtextxy(380,150,"H1");

setcolor(15);

outtextxy(500,150,"I1");

outtextxy(540,150,"J1");

setcolor(10);
outtextxy(580,150,"K1");

//=======================ROW 2=======================

setcolor(10);
outtextxy(25,200,"A2");

setcolor(15);
outtextxy(75,200,"B2");

outtextxy(120,200,"C2");

setcolor(1);

outtextxy(220,200,"D2");

outtextxy(260,200,"E2");

outtextxy(340,200,"G2");

outtextxy(380,200,"H2");

setcolor(15);

outtextxy(500,200,"I2");

outtextxy(540,200,"J2");

setcolor(10);
outtextxy(580,200,"K2");

//===================ROW 3=======================
setcolor(10);
outtextxy(25,250,"A3");

setcolor(15);
outtextxy(75,250,"B3");

outtextxy(120,250,"C3");

setcolor(1);

outtextxy(220,250,"D3");

outtextxy(260,250,"E3");

outtextxy(340,250,"G3");

outtextxy(380,250,"H3");

setcolor(15);

outtextxy(500,250,"I3");

outtextxy(540,250,"J3");

setcolor(10);
outtextxy(580,250,"K3");

setcolor(14);
outtextxy(200,375,"PLEASE ENTER YOUR DESIRE SEAT: ");
gotoxy(49,24);

strupr(air.seat);

scanf("%s",air.seat);

strupr(air.seat);

getch();
}





//**********************************************************************+
//START ,LOADING,ETC
void start (void)
{
int gd,gm,midx,midy;
gd=DETECT;
initgraph(&gd,&gm,"c:\\TC\\BGI");
  int poly[30],color,maxcolor;
    struct  palettetype pal;
  cleardevice();

setcolor(15);

settextstyle(GOTHIC_FONT, HORIZ_DIR,6 );
outtextxy(40,70,"Start With The Name Of ");
delay(1000);
setcolor(12);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 9);
outtextxy(170,170,"ALLAH");
delay(500);
setcolor(15);
settextstyle(GOTHIC_FONT, HORIZ_DIR, 7);
outtextxy(0,320,"Who Is Most Merciful");
delay(500);


getch();
clrscr();
setbkcolor(8);

int a,q=0;
for(a=1;a<=500;a++)
{
delay(10);
setcolor(q++);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,8 );
outtextxy(240,170,"H");
outtextxy(350,220,"M");
}
delay(500);
settextstyle(2, HORIZ_DIR, 9);
outtextxy(50,50,"THIS PROGRAM IS A PRODUCT OF ");

setcolor(7);
setfillstyle(9,8);
pieslice(310,320,0,10,150);
pieslice(310,320,40,50,150);
pieslice(310,320,80,90,150);
pieslice(310,320,120,130,150);
pieslice(310,320,170,180,150);

setcolor(1);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,8 );
outtextxy(240,170,"H");
outtextxy(350,220,"M");

setcolor(2);
settextstyle(4, HORIZ_DIR, 6);
outtextxy(300,215,"&");

setcolor(15);
settextstyle(1, HORIZ_DIR, 5);
outtextxy(85,290,"P R O G R A M E R S");

setcolor(10);
arc(310,250,330,200,110);
arc(310,250,330,200,100);
delay(2000);
settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
outtextxy(120,400,"PRESS ANY KEY TO PROCEED... ");
getch();

cleardevice();

hanifi();

closegraph();
}
void hanifi()
{
   int gdriver=DETECT,gmode;
   initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
  int w,j=0,k=1,l=2,m=1,n;
     cleardevice();
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(200,170,"GREATINGS");
    outtextxy(145,235,"    FROM   ");
    delay(4000);
   cleardevice();
   for(w=1;w<=300;w++)

   {

   //for head

   delay(20);
   ellipse(320,95,360,0,25,20);
   line(298,85,341,85);

   setfillstyle(1, WHITE);

   circle(310,90,2);
   circle(330,90,2);
   arc(320,100,200,-20,10);

   //for neck
    setcolor(j++);

   line(313,115,313,125);
   line(328,115,328,125);

   //For centre part
    setcolor(k++);

   arc(320,225,72,107,100);
   line(290,129,290,200);
   line(350,129,350,200);
   line(290,193,350,193);
   line(290,200,350,200);

   //for legs
    setcolor(l++);
   setfillstyle(1, WHITE);

   line(290,200,285,280);
   line(320,225,305,280);
   line(322,225,335,280);
   line(350,200,355,280);

   //for right hand
    setcolor(m++);
   setfillstyle(1, WHITE);

   line(290,129,255,165);
   line(255,165,290,200);
   line(290,149,275,165);
   line(275,165,290,182);

   //for left hand
    setcolor(m++);
     line(350,129,385,165);
   line(385,165,350,200);
   line(350,149,365,165);
   line(365,165,350,182);

   //for shoes
   line(285,280,275,287);
   line(275,287,305,287);
   line(305,280,305,287);

   line(335,280,335,287);
   line(335,287,365,287);
   line(355,280,365,287);

   //for text


    settextstyle(3,1,10);
   outtextxy(10,50,"HANIFI");
    settextstyle(2,HORIZ_DIR,10);
    outtextxy(150,300,"THE ONLY CREAZY");
    outtextxy(180,330,"PROGRAMMER IN");

    settextstyle(1,0,6);
    outtextxy(190,360,"C.I.T SEC 'C'");

   }
   getch();
 //  closegraph();
}
//********************************************************
//START ENDED
//********************************************************

//::::::::::::::::::loading ::::::::::::::::::::::::
void loading()
{
 int x,y,i;
 int g=DETECT, d;
 initgraph(&g, &d,"C:\\TC\\BGI");
 cleardevice();
 x=getmaxx()/2;
 y=getmaxy()/2;

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
// setbkcolor(0);
 setcolor(4);
 int c=150;

for(int e=0;e<25;e++) //Change 55 to your desired value
 {
  for(int i=50;i<100;i++)
  {
    setcolor(6);
    settextstyle(SMALL_FONT, HORIZ_DIR, 10);
    outtextxy(x,y,"LOADING...");

    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    setcolor(3);
    outtextxy(x+5,y-3,"Please Wait ");


    circle(x,y,i);
    circle(x,y,c);
    c--;
    cleardevice();

  }
  }

  setcolor(6);
  settextstyle(SMALL_FONT, HORIZ_DIR, 10);
  settextjustify(x,y);
  outtextxy(x-80,y-110,"WELCOME");
  delay(150);
  outtextxy(x-20,y-70,"TO");
  delay(150);
  outtextxy(x-27,y-20,"THE");
  delay(150);
  outtextxy(x-317,y+25,"AIR LINE RESERVATION SYSTEM");
  getch();
 closegraph();

 }




//PASSWORD VERIFACTION STARTED FOR ADMIN FINCTONS
int Password (void)
{
	int driver=VGA,mode=VGAHI;   	//detect best driver and mode


	initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode

	 char Password[12]="waqar"; // Already assigned password
	 char pass[20];
	 char UserName[15];
	 char user[15]="waqar";
	 int sucess=0;                    // Password Verification
	 int x=26,i;

	 cleardevice();

	 line ( 130, 180, 500, 180 );             // creates..
	 rectangle ( 130, 150, 500, 300 );
	 setfillstyle ( SOLID_FILL, 7 );       // ..the dialouge box..
	 bar ( 130, 150, 500, 180 );
	 setfillstyle ( SOLID_FILL, 8 );     // ..where password and user name..
	 bar ( 130, 180, 500, 300 );
	 setcolor ( 4 );                   // ..can be entered
	 outtextxy ( 140, 165, " P A S S W O R D   V E R I F I C A T I O N  " );
	 setfillstyle ( SOLID_FILL, 0 );
	 bar ( 200, 200, 450, 230 );
	 bar ( 200, 247, 450, 277 );

	 outtextxy ( 130, 210, "   NAME " );
	 outtextxy ( 126, 258, " PASSWORD " );

	 gotoxy(26,14);
	 gets(UserName);

	for(i=0;i<20;i++ )       // Gets the password..
  {
	  pass[i]=getch();              // ..until enter key is not pressed..
	  if(pass[i]=='\r')
		{
	pass[i]='\0';                // Enter a NULL character
	break;
		 }

	  else
		{
	 gotoxy(x,17);printf("*");    // ..and prints asterix on the screen
	 x++;
		 }
	}

	if ((strcmp(Password,pass)==0)&&(strcmp(UserName,user)==0))    // checks password character..
		sucess=1;

	else                    // If incorrect password
	 {
		 sucess=0;
		 gotoxy (22, 21);
		 printf ( " INVALID PASSWORD! TRY AGAIN " );
		 getche ();
	  }

	return ( sucess );
}
//POSSWORD ENDED
///===================================================================

void exit (void)
{
	int driver=DETECT,mode;   	//detect best driver and mode
	int i,j=520;

	initgraph(&driver,&mode,"c:\\tc\\bgi"); 	//initialize graphics mode

	for(i=480;i>=0;i--)
	{

		setcolor(WHITE);
		outtextxy(290,i,"DESIGNED BY");
		outtextxy(270,j,"WAQAR AHMAD HANFI");
		outtextxy(277,j+20,"C.I.T 1st YEAR");
		outtextxy(210,j+40,"ALIGHAR INSTITUTE OF TECHNOLOGY");
		outtextxy(300,j+60,"KARACHI");
		outtextxy(265,j+100,"SPECIAL THANKS TO");
		outtextxy(300,j+140,"ALLAHA");
		outtextxy(220,j+160,"SIR ZAFAR FOR TEACHING ME");
		outtextxy(250,j+180,"MANSOOR FOR HALPING");

		delay(20);
		j--;

		 cleardevice();
	}
	closegraph();
}





//END OF PROGRAM

//THANK YOU GOD FOR MAKING THIS POSSIBE FOR ME...