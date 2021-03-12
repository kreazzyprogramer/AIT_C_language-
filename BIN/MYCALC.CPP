#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
void main (void)
{
clrscr();
int choice;
double  n1,n2,x,y,z, sum,div,mul,sub;
textbackground(9);
for (x=1;x<=10;x++)
{
delay(700);
printf("_______");

}
textbackground(9);
gotoxy(29,8);
textcolor(WHITE);
cprintf("W");
sound(600);
delay(500);
nosound();
gotoxy(31,8);
textcolor(YELLOW);
cprintf("E");
sound(700);
delay(500);
nosound();
gotoxy(33,8);
textcolor(GREEN);
cprintf("L");
sound(800);
delay(500);
nosound();
gotoxy(35,8);
textcolor(BLACK);
cprintf("C");
sound(900);
delay(500);
nosound();
gotoxy(37,8);
textcolor(BROWN);
cprintf("O");
sound(1000);
delay(500);
nosound();
gotoxy(39,8);
textcolor(RED);
cprintf("M");
sound(1100);
delay(500);
nosound();
gotoxy(41,8);
textcolor(WHITE);
cprintf("E");
sound(1200);

//WAIT FOR 700 milli/sec

delay(700);
nosound();
gotoxy(33,10);
printf("TO");

//WAIT FOR 1.sec

delay(1000);

//start

gotoxy(27,12);
textcolor(WHITE);
cprintf("C");
delay(500);
gotoxy(29,12);
textcolor(YELLOW);
cprintf("A");
delay(500);
gotoxy(31,12);
textcolor(GREEN);
cprintf("L");
delay(500);
gotoxy(33,12);
textcolor(BLACK);
cprintf("C");
delay(500);
gotoxy(35,12);
textcolor(BROWN);
cprintf("U");
delay(500);
gotoxy(37,12);
textcolor(RED);
cprintf("L");
delay(500);
gotoxy(39,12);
textcolor(WHITE);
cprintf("A");
delay(500);
gotoxy(41,12);
textcolor(BROWN);
cprintf("T");
delay(500);
gotoxy(43,12);
textcolor(RED);
cprintf("O");
delay(500);
gotoxy(45,12);
textcolor(WHITE);
cprintf("R");


//WAIT FOR 3000 milli/sec

delay(2000);

//starting program(calculator)

textbackground(9);
clrscr();
delay(850);
printf("\t\tTHIS PROGRAM IS MADE BY WAQAR AHMAD HANIFI.");
delay(700);
gotoxy(30,2);
textcolor(8);
cprintf("************\n");
gotoxy(30,3);
textcolor(3+BLINK);
cprintf("*CALCULATOR*\n");
gotoxy(30,4);
textcolor(8);
cprintf("************\n\n");
delay(500);
textcolor(WHITE);
delay(800);
printf("\n FOR SIMPLE CALCULATION\n");
delay(500);
printf("\n PRESS 1.ADDITION\t [+]\n ");
printf("\n PRESS 2.SUBTRACTION\t [-]\n ");
printf("\n PRESS 3.MULTIPLACATION  [*]\n");
printf("\n PRESS 4.DIVISION\t [/]\n\n\n\n");
delay(800);
gotoxy(35,6);
printf("FOR FUNCTIONAL CALCULATION\n");
delay(500);
gotoxy(39,8);
printf("PRESS 5.  POWER\n");
gotoxy(39,10);
printf("PRESS 6.  LOG\n");
gotoxy(39,12);
printf("PRESS 7.  LOG10.\n ");
gotoxy(39,14);
printf("PRESS 8.  SIN\n");
gotoxy(39,16);
printf("PRESS 9.  COS\n");
gotoxy(39,18);
printf("PERSS 10. TAN\n ");
gotoxy(39,20);
printf("PERSS 10. FABS\n ");
delay(650);
gotoxy(1,22);
printf("PRESS 11. EXIT CALCULATOR");
delay(800);
gotoxy(1,24);
printf("PLEASE ENTER YOUR CHOICE FROM THE ABOVE [1-11].. ");
scanf("%d",&choice);


//experiment

top:	//using this,program will start again from the starting.


clrscr();
printf("\t\tTHIS PROGRAM IS COADED BY WAQAR AHMAD HANIFI.");
gotoxy(30,2);
textcolor(8);
cprintf("************\n");
gotoxy(30,3);
textcolor(3+BLINK);
cprintf("*CALCULATOR*\n");
gotoxy(30,4);
textcolor(8);
cprintf("************\n\n");
textcolor(WHITE);
printf("\n FOR SIMPLE CALCULATION\n");
printf("\n PRESS 1.ADDITION\t [+]\n ");
printf("\n PRESS 2.SUBTRACTION\t [-]\n ");
printf("\n PRESS 3.MULTIPLACATION  [*]\n");
printf("\n PRESS 4.DIVISION\t [/]\n\n\n\n");
gotoxy(35,6);
printf("FOR FUNCTIONAL CALCULATION\n");
gotoxy(39,8);
printf("PRESS 5. POWER\n");
gotoxy(39,10);
printf("PRESS 6. LOG\n");
gotoxy(39,12);
printf("PRESS 7. LOG10\n ");
gotoxy(39,14);
printf("PRESS 8. SIN\n");
gotoxy(39,16);
printf("PRESS 9. COS\n");
gotoxy(39,18);
printf("PERSS 10.TAN\n ");
gotoxy(39,20);
printf("PERSS 11.FABS\n ");
gotoxy(1,22);
printf("PRESS 12. EXIT CALCULATOR");
gotoxy(1,24);
printf("PLEASE ENTER YOUR CHOICE FROM THE ABOVE [1-11].. ");
scanf("%d",&choice);



 clrscr();      //THIS IS FOR ANS. IN NEW(WINDOW)


 switch(choice)
   {

    //ADDITION

    case 1:
    gotoxy(35,1);
    printf("ADDITION" );
    gotoxy(27,10);
    printf("PLEASE ENTER 1st NUMBER: " );
    scanf("%lf",&n1 );
    gotoxy(27,11);
    printf("PLEASE ENTER 2nd NUMBER: ");
    scanf("%lf",&n2 );
    sum=n1+n2;
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(11);
    cprintf("ANSWER OF ADDITION:  %.2lf",sum);
    getch();
    goto top;

     //SUBTRACTION

    case 2:
    gotoxy(35,1);
    printf("SUBTRACTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER 1st NUMBER: " );
    scanf("%lf",&n1 );
    gotoxy(27,11);
    printf("PLEASE ENTER 2nd NUMBER: ");
    scanf("%lf",&n2 );
    sub=n1-n2;
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(2);
    cprintf("ANSWER OF SUBTRACTION: %.2lf",sub);
    getch();
    goto top;

    //MULTIPLACATION.

    case 3:
    gotoxy(35,1);
    printf("MAULTLIPLICATION" );
    gotoxy(27,10);
    printf("PLEASE ENTER 1st NUMBER: " );
    scanf("%lf",&n1 );
    gotoxy(27,11);
    printf("PLEASE ENTER 2nd NUMBER : ");
    scanf("%lf",&n2 );
    mul=n1*n2;
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(3);
    cprintf("ANSWER OF SUBTRACTION: %.2lf",mul );
    getch();
    goto top;

    //DIVISION

    case 4:
    gotoxy(35,1);
    printf("DIVISION");
    gotoxy(27,10);
    printf("PLEASE ENTER 1st NUMBER: " );
    scanf("%lf",&n1 );
    gotoxy(27,11);
    printf("PLEASE ENTER 2nd NUMBER : ");
    scanf("%lf",&n2 );
    div=n1/n2;
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(4);
    cprintf("ANSWER OF DIVISION: %lf",div);
    getch();
    goto top;

    //POWER

    case 5:
    gotoxy(33,5);
    printf("n REST TO THE POWER n \n\t\t\t\t\t n^n" );
    gotoxy(35,1);
    printf("POWER FUNCTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER 1st NUMBER: " );
    scanf("%lf",&y );
    gotoxy(27,11);
    printf("PLEASE ENTER 2nd NUMBER: ");
    scanf("%lf",&x );
    y=pow (x,y);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(5);
    cprintf("pow ofn1 to n2  %.2lf",(y));
    getch();
    goto top;

    //LOG

    case 6:
    gotoxy(35,1);
    printf("LOG FUNCTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER " );
    scanf("%lf",&x );
    log (x);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(6);
    cprintf("VALUE OF log %.2lf",log(x));
    getch();
    goto top;

    //LOG10

    case 7:
    gotoxy(35,1);
    printf("Log10 FUNCTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER " );
    scanf("%lf",&x );
    log10 (x);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(7);
    cprintf("VALUE OF log10: %.2lf",log10(x));
    getch();
    goto top;

    //SIN

    case 8:
    gotoxy(35,1);
    printf("SIN FUNCTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER: " );
    scanf("%lf",&z  );
    sin (z);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(8);
    cprintf("VALUE OF SINE: %.2lf",sin(z*3.14/180));
    getch();
    goto top;

    //COSINE

    case 9:
    gotoxy(35,1);
    printf("COS FUNCTION" );
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER: " );
    scanf("%lf",&z );
    cos (z);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(0);
    cprintf("VALUE OF COSINE: %.2lf",cos(z*3.14/180));
    getch();
    goto top;

    //TAN

    case 10:
    gotoxy(35,1);
    printf("TAN FUNCTION");
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER: " );
    scanf("%lf",&z );
    tan (z);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(10);
    cprintf("VALUE OF TANGENT: %.2lf",tan(z*3.14/180));
    getch();
    goto top;

     //FAB

    case 11:
    gotoxy(35,1);
    printf("FABS FUNCTION");
    gotoxy(27,10);
    printf("PLEASE ENTER A NUMBER: " );
    scanf("%lf",&z );
    fabs (z);
    gotoxy(27,12);
    printf("calculating....");
     delay(500);
    gotoxy(27,12);
    textcolor(10);
    cprintf("VALUE OF fab: %.2lf",fabs(z));
    getch();
    goto top;





    default:
    gotoxy(25,9);
    textcolor(14);
     cprintf("EXITING NOW...");
    delay(1000);
    gotoxy(25,11);
    textcolor(14);
    cprintf("THANK YOU FOR USING THIS CALCULATOR.");
    gotoxy(33,13);
    delay(700);
    cprintf("HOPE YOU LIKE IT :)");
    gotoxy(33,17);
    delay(1000);
    textcolor(7);
    cprintf("HAVE A NICE DAY");
    getch();
    exit(1);
    }
    }

    getch();

