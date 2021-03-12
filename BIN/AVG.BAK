//CALCULATE AVGERAGE AND PERCENTAGE OF ANY NUMBERS.

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main(void)
{
clrscr();
    int n, i;
    float num[100], sum = 0.0, avg,per;
    float x[8],a;
    char name[20];



//intro
textbackground(6);
gotoxy(37,2);
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
textcolor(15);
cprintf("E-MAIL:WAQAR_HACK@OUTLOOK.COM");
getch();
clrscr();
    textbackground(4);
    gotoxy(22,14);
textcolor(15);
cprintf("WHAT SHOULD I CALL YOU (NAME): ");
gets(name);
clrscr();


    top:
    clrscr();
    textcolor(15);
    gotoxy(25,5);
    printf("PERSS 1 TO CALCULATE AVERAGE");
    gotoxy(25,6);
    printf("PERSS 2 TO CALCULATE PERCENTAGE");
    gotoxy(25,7);
    printf("PERSS 3 TO CALCULATE WEEKLY AVERAGE TEMPERTURE ");
    gotoxy(25,8);
    printf("PERSS  ANY KEY TO EXIT");
    gotoxy(25,10);
    printf("%s ,ENTER YOUR DESIRE :",name);


    scanf("%d",&n);

    if (n==1)
    {
    goto average;
    }
    else if(n==2)
    {
    goto percentage;
    }
    else if (n==3)
    {
    goto temp;
    }
    else
    {
    goto exit;
    }

    average:
    clrscr();
    gotoxy(28,5);
    printf("%s ,PLEASE PROVIDE DATA:- \n\n",name);
    delay(600);
    printf("BETWEEN HOW MANY VALUES DO YOU WANT TO CALCULATE THE AVERAGE ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
     printf("Error! number should in range of (1 to 100).\n");
	printf("Enter the number again: ");
	scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
	printf("%s,PLEASE ENTER %d NUMBER: ",name, i+1);
	scanf("%f", &num[i]);
	sum=sum+num[i];
    }
    avg = sum / n;
    printf("Average = %.2f",avg);
    getch();
    gotoxy(34,15);
    printf("WANT TO CONTINUE ?");
    delay(700);
    gotoxy(34,16);
    printf("PRESS 1 TO CONTINUE");
    gotoxy(34,17);
    printf("PRESS 2 TO exit");

    scanf("%d",&n);
    if (n<=1)
    {
    goto top;
    }
    else  if (n<=2)
    {
    goto exit;
    }



percentage:
clrscr();
gotoxy(28,5);
    printf("%s ,PLEASE PROVIDE DATA:- \n\n",name);
    delay(600);
    printf("BETWEEN HOW MANY VALUES DO YOU WANT TO CALCULATE THE PERCENTAGE ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
	printf("Error! number should in range of (1 to 100).\n");
	printf("Enter the number again: ");
	scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
	printf("%s,PLEASE ENTER %d NUMBER: ",name, i+1);
	scanf("%f", &num[i]);
	sum=sum+num[i];
    }
    per = sum/n*100;
    printf("per = %.2f",per);
    getch();
    gotoxy(34,15);
    printf("WANT TO CONTINUE ?");
    delay(700);
    gotoxy(34,16);
    printf("PRESS 1 TO CONTINUE");
    gotoxy(34,17);
    printf("PRESS 2 TO exit");

    scanf("%d",&n);
    if (n<=1)
    {
    goto top;
    }
    else  if (n<=2)
    {
    goto exit;
    }




temp:
clrscr();
gotoxy(30,11);
printf("ENTER MONDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER TUESDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER WEDNESDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER THURSDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER FRIDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER SATURDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,11);
printf("ENTER SUNDAY TEMPERATURE:");
scanf("%f",&x[a]);
sum+=x[a];

clrscr();
gotoxy(30,9);
printf("BE PACEANCE");
delay(876);
gotoxy(30,11);
printf("CALCULATING TEMPERATURE");
sleep(1);


clrscr();
gotoxy(25,11);
avg=sum/7;
printf("AVERAGE TEMPERATURE OF A WEEK  %.2f",avg);
getch();
gotoxy(28,13);
    printf("WANT TO CONTINUE ?");
    delay(700);
    gotoxy(28,14);
    printf("PRESS 1 TO CONTINUE");
    gotoxy(28,15);
    printf("PRESS 2 TO exit");

    scanf("%d",&n);
    if (n<=1)
    {
    goto top;
    }
    else  if (n<=2)
    {
    goto exit;
    }



exit:
clrscr();
gotoxy(25,9);
    textcolor(14);
     cprintf("EXITING NOW...");
    delay(500);
    gotoxy(25,11);
    textcolor(14);
    cprintf(" THANK YOU FOR USING .");
    gotoxy(33,13);
    delay(700);
    cprintf("HOPE YOU LIKE IT :)");
    gotoxy(33,17);
    delay(1000);
    textcolor(7);
    cprintf("HAVE A NICE DAY ");
    getch();

  }



