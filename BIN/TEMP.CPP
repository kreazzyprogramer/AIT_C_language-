#include<stdio.h>/
#include<conio.h>
#include<math.h>
#include<dos.h>
void main(void)
{
clrscr();
float x[8];
float i,sum=0,avg;
gotoxy(30,11);
printf("ENTER MONDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER TUESDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER WEDNESDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER THURSDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER FRIDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER SATURDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

clrscr();
gotoxy(30,11);
printf("ENTER SUNDAY TEMPERATURE:");
scanf("%f",&x[i]);
sum+=x[i];

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
printf("\n\n%f\n",x[i]);

getch();
}