#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
void logo (void);
void round1window (void);
void round2window (void);
void round3window (void);
void scoreboard (void);
void window2 (void);
void window3 (void);
void window4 (void);
void window5 (void);
void helplines (void);


void scoreboard (void)            //////scoreboard/////
{
clrscr();
window(1,1,80,25);
textbackground(WHITE);
clrscr();

window(30,2,50,24);
textbackground(BLACK);
clrscr();
gotoxy(38,4);
textcolor(BROWN);
cprintf("\n     SCORE BOARD");

gotoxy(20,3);
textcolor(BROWN);
cprintf("\r_____________________");
//getch();

}                              ///////scorboard//////


void logo (void)             //////logo//////

{
window(2, 2, 11 ,5);
textbackground(YELLOW);
clrscr();

window(3 ,3 ,10 ,4);
textbackground(BLUE);
clrscr();

gotoxy(1,1);
textcolor(YELLOW);
cprintf("  ARY");

window(3,4,10,4);
textbackground(WHITE);
clrscr();

gotoxy(5,8);
textcolor(BLUE);
cprintf("DIGITAL");
}                         //////logo//////



void round1window (void)        /////round 1 window////////
{
//window(1,1,80,25);
//textbackground(CYAN);
clrscr();

/*gotoxy(2,19);
textcolor(BLACK);
cprintf("---------");

gotoxy(4,20);
textcolor(BLACK);
cprintf("5050");

gotoxy(2,21);
textcolor(BLACK);
cprintf("---------");

gotoxy(15,19);
textcolor(BLACK);
cprintf("---------");

window(18,20,18,22);
textbackground(BLACK);
clrscr();

window(19,20,19,20);
textbackground(BLACK);
clrscr();

window(19,22,19,22);
textbackground(BLACK);
clrscr();   */

gotoxy(38,3);        //ROND 1 HEDNG
textcolor(RED);
cprintf("ROUND 1");
gotoxy(37,4);
textcolor(RED);
cprintf("---------"); //ROND 1 HEDNG

gotoxy(2,24);
textcolor(BLACK);
cprintf("            press 1 to reselect, 2 for helplines, 3 for next question ");


logo();
window(10,7,70,9);
textbackground(BLACK);
clrscr();


}                          /////round 1 window//////



void helplines (void)       //////helplines///////////
{
//int num , choice ,  cho;

window(1,1,80,25);
textbackground(WHITE);
clrscr();


gotoxy(35,6);
textcolor(BLACK);
cprintf("Helplines");


gotoxy(20,8);
textcolor(BLUE);
cprintf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

gotoxy(20,9);
textcolor(BLUE);
cprintf("\xdd\n\xdd\n\r                   \xdd\n\xdd\n\r                   \xdd\n\xdd\n\r                   \xdd\n\xdd");

gotoxy(56,9);
textcolor(BLUE);
cprintf("\xdd\n\xdd");

gotoxy(56,11);
textcolor(BLUE);
cprintf("\xdd\n\xdd");

gotoxy(56,13);
textcolor(BLUE);
cprintf("\xdd\n\xdd");

gotoxy(56,15);
textcolor(BLUE);
cprintf("\xdd\n\xdd");


gotoxy(20,16);
textcolor(BLUE);
cprintf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

gotoxy(1,18);
textcolor(BLACK);
cprintf("   Which Helpline Do You Want To Use, press 5 for 5050 & 6 for phone a friend");


gotoxy(27,10);
textcolor(BLACK);
cprintf("---------");


gotoxy(29,12);
//textcolor(BLACK);
cprintf("5050");


gotoxy(27,14);
//textcolor(BLACK);
cprintf("---------");


gotoxy(26,15);
//textcolor(BLACK);
cprintf("FIFTY FIFTY ");

gotoxy(42,10);           //////PHONE
textcolor(BLACK);
cprintf("---------");


gotoxy(42,14);
//textcolor(BLACK);
cprintf("----------");

gotoxy(40,15);
cprintf("PHONE A FRIEND");


window(45,11,45,13);
textbackground(BLACK);
clrscr();

window(46,11,46,11);
textbackground(BLACK);
clrscr();

window(46,13,46,13);
textbackground(BLACK);      ///PHONE
clrscr();




gotoxy(30,20);
textcolor(BLACK);
cprintf("ENTER LINE NO: ");

logo();



}





/*gotoxy(42,10);
textcolor(BLACK);
cprintf("---------");


gotoxy(42,14);             ////PHONE
//textcolor(BLACK);
cprintf("----------");

gotoxy(40,15);
cprintf("PHONE A FRIEND");


window(45,11,45,13);
textbackground(BLACK);
clrscr();

window(46,11,46,11);
textbackground(BLACK);
clrscr();

window(46,13,46,13);
textbackground(BLACK); */     ///PHONE


getch();
			/////helplines//////




void round2window (void)        /////round 2 window //////
{
window(1,1,80,25);
textbackground(CYAN);
clrscr();
gotoxy(38,3);
textcolor(RED);
cprintf("ROUND 2");
gotoxy(37,4);
textcolor(RED);
cprintf("---------");


gotoxy(2,24);
textcolor(BLACK);
cprintf("            press 1 to reselect, 2 for helplines, 3 for next question ");


logo();
window(10,7,70,9);
textbackground(BLACK);
clrscr();
}                        /////round 2 window//////



void round3window (void)           /////round 3 window/////
{
window(1,1,80,25);
textbackground(CYAN);
clrscr();
gotoxy(38,3);
textcolor(RED);
cprintf("ROUND 3");
gotoxy(37,4);
textcolor(RED);
cprintf("---------");

gotoxy(2,24);
textcolor(BLACK);
cprintf("            press 1 to reselect, 2 for helplines, 3 for next question ");


logo();
window(10,7,70,9);
textbackground(BLACK);
clrscr();


}                                  ////round 3 window/////






void window2 (void)             /////window 2///////
{

window(10,11,38,13);
textbackground(BLACK);
clrscr();                              /////window 2///////
}


void window3 (void)            /////window 3///////
{
window(42,11,70,13);
textbackground(BLACK);
clrscr();                               /////window 3///////
}


void window4 (void)             /////window 4///////
{
window(10,15,38,17);
textbackground(BLACK);
clrscr();                               /////window 4///////
}


void window5 (void)             /////window 5///////
{
window(42,15,70,17);
textbackground(BLACK);
clrscr();
}                               /////window 5///////








void main (void)
{
int  pass, t , r1 , r2 , r3 , num , choice , points1 , points2 , points3 , points4 , points5 , points6 , points7 , points8 ;

//int ans1 , ans3 , ans4 , ans5 , ans6 , ans7 , ans8 , r1 , r2 , r3 , choice;

char   name1 , name2 ;

//int  pass ,ans2, pass1 , i , choice1 , choice2 ,choice3 , choice4 , choice5 , points1 , points2 , points3 , points4 , points5 , points6 , points7 , points8 , num ;


 window(1,1,80,25);
textbackground(BLACK);
clrscr();

/*password:
clrscr();
gotoxy(16,10);
textcolor(WHITE);
cprintf("The Program is Locked (Password Protected) :(");

gotoxy(20,12);
cprintf("Enter Password: ");
scanf("%i",&pass);
//pass=getch();

if (pass==18100)
{

gotoxy(32,15);
textcolor(WHITE+128);
cprintf("Password Accepted :)");
getch();
goto start;
}


else if (pass!=18100)
{

gotoxy(32,15);
textcolor(WHITE);
cprintf("Wrong Password");
getch();
clrscr();
gotoxy(37,12);
cprintf("Try Again...!!");
cprintf("\n\r                                          OR\n\r                                   Want to exit\n\n\r                         1 for try again\n\r                         2 for exit");
}
//getch();
int pass1;
scanf("%d",&pass1);
if(pass==1)
{
goto password;
}
else if (pass==2)
{
goto exit2;
}

/*char d[35]="The Program is Locked (Password Protected) :(";
char code,pass[60],user;
int i=0,j,password;
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
delay(70);
textcolor(15);
cprintf("*");
}

gotoxy(15,10);
cprintf("Enter Password: ");

while(pass!=13)
{
pass=getch();

if(pass!=13 && pass!=8){
putch('*');
code[i]=pass;
i++;
putch('*');
pass[i]=code;
i++;
}
}
pass[i]='\0';
if(strcmp(pass,password)==0)
{

gotoxy(15,16);
textcolor(15+128);
cprintf("Password Accepted");
getch();
clrscr();
}
else
{
goto exit2;
}  */






//getch();
//start:

start:
window(1,1,80,25);
textbackground(BLACK);
clrscr();
getch();
gotoxy(1,2);
textcolor(WHITE);
cprintf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

gotoxy(1,24);
textcolor(WHITE);
cprintf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

//delay(1000);
gotoxy(38,8);
textcolor(WHITE);
cprintf("WELCOME");

//delay(1000);
gotoxy(40,10);
textcolor(WHITE);
cprintf("TO");

//delay(1000);
gotoxy(38,12);
textcolor(WHITE);
cprintf("K");

//delay(1000);
gotoxy(41,12);
textcolor(WHITE);
cprintf("B");

//delay(1000);
gotoxy(44,12);
textcolor(WHITE);
cprintf("C");

//delay(1000);
gotoxy(34,14);
textcolor(WHITE);
cprintf("(""A QUIZ PROGRAM "")");///   */
getch();


window(1,1,80,25);
textbackground(RED);
clrscr();
gotoxy(35,12);
textcolor(WHITE);
cprintf("LOADING");

int i,l;
for(i=1; i<=100; i++)
{
//for(l=0;l<=80;l++)
//{
gotoxy(43,12);
textcolor(WHITE);
cprintf("%i %...........",i);
//gotoxy(1,13);
//cprintf("\xcd",l);
sound(440);
delay(100);
nosound();
}
//}
//for(l=0;l==80;l++)
//{
//gotoxy(1,13);
//textcolor(WHITE);
//cprintf("\xcd",l);
//sound(440);
//delay(1000);
//nosound();
//}

//getch();
delay(1000);
clrscr();
gotoxy(32,12);
textcolor(WHITE);
cprintf("LOADING COMPLETED.... :)");
delay(1000);

clrscr();
gotoxy(28,12);
textcolor(WHITE+128);
cprintf("Press Any Key To Continue.......");
getch();


/*clrscr();
gotoxy(1,2);
textcolor(WHITE+128);
cprintf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

gotoxy(1,24);
textcolor(WHITE+128);
cprintf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");

//delay(1000);
gotoxy(38,8);
textcolor(WHITE);
cprintf("WELCOME");

//delay(1000);
gotoxy(40,9);
textcolor(WHITE);
cprintf("TO");

//delay(1000);
gotoxy(35,10);
textcolor(WHITE);
cprintf("K");

//delay(1000);
gotoxy(40,10);
textcolor(WHITE);
cprintf("B");

//delay(1000);
gotoxy(45,10);
textcolor(WHITE);
cprintf("C");

//delay(1000);
gotoxy(32,11);
textcolor(WHITE);
cprintf("(""A QUIZ PROGRAM "")");   */

//delay(1000);
//gotoxy(28,20);
//textcolor(WHITE);
//cprintf("Presented by : Abdul Waris");
//getch();

window(1,1,80,25);
textbackground(BLACK);
clrscr();

gotoxy(30,4);
textcolor(WHITE);
cprintf("    Broadcasting On");
getch();

window(25,6,55,19);     ///// LOGO /////
textbackground(YELLOW);  //for A//
clrscr();

//delay(100);
window(26,7,54,14);
textbackground(BLUE);
clrscr();

//delay(100);
window(28,8,29,12);
textbackground(YELLOW);
clrscr();

//delay(100);
window(28,8,32,8);
textbackground(YELLOW);
clrscr();

//delay(100);
window(33,8,34,12);
textbackground(YELLOW);
clrscr();


//delay(100);
window(28,10,32,10);
textbackground(YELLOW);
clrscr();                  // A END //


//delay(100);
window(36,8,43,8);     ///// LOGO /////
textbackground(YELLOW);  //for R//
clrscr();


//delay(100);
window(36,8,37,12);
textbackground(YELLOW);
clrscr();

//delay(100);
window(36,10,43,10);
textbackground(YELLOW);
clrscr();


//delay(100);
window(42,8,43,10);
textbackground(YELLOW);
clrscr();


//delay(100);
window(40,10,41,11);
textbackground(YELLOW);
clrscr();                  // R END //


//delay(100);
window(41,12,43,12);
textbackground(YELLOW);
clrscr();                  // R END //


//delay(100);
window(45,8,46,10);     ///// LOGO /////
textbackground(YELLOW);  //for y//
clrscr();


//delay(100);
window(47,10,51,10);
textbackground(YELLOW);
clrscr();


//delay(100);
window(51,8,52,10);
textbackground(YELLOW);
clrscr();


//delay(100);
window(48,10,49,12);
textbackground(YELLOW);
clrscr();

//delay(100);
window(40,10,41,11);
textbackground(YELLOW);
clrscr();                  // y END //

//delay(100);
window(41,12,43,12);
textbackground(YELLOW);
clrscr();                  // y END //




//delay(100);
window(26,14,54,18);
textbackground(WHITE);
clrscr();

//delay(100);
gotoxy(31,16);
textcolor(BLUE);
cprintf(" \n\n D   I   G   I   T   A   L");
getch();         //  */



clrscr();

window(1,1,80,25);
textbackground(RED);
clrscr();

//delay(1000);

clrscr();

getch();  ///////////////  */


  quest1:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  round1window();

  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
  cprintf("\n  Q1:       WHO IS THE INVENTOR OF C LANGUAGE ? ");


  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). Dennis Ritchie");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b). Niklaus Wirth");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c). Amedeo Avogadro");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d). Leonhard Euler");

  int ans1;
  scanf("%d",&ans1);

  if( ans1==1 )

  {
  points1=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). Dennis Ritchie");
  delay(100);
  nosound();

  }


  else if( ans1==2 )

  {
  points1=0;

  sound(440);
  window(42,11,70,13);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n b). Niklaus Wirth");
  delay(100);
  nosound();

  }

  else if( ans1==3 )

  {
  points1=0;

  sound(440);
  window(10,15,38,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n c). Amedeo Avogadro");
  delay(100);
  nosound();

  }

  else if( ans1==4 )

  {
  points1=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). Leonhard Euler");
  delay(100);
  nosound();

  }

  int choice1;
  scanf("%d",&choice1);

  switch(choice1)
  {

  case 1:
  goto quest1;

  case 2:
  helplines();

  gotoxy(45,23);

  scanf("%d",&num);


  if (num==5)                     //Q1 5050
  {
  quest150:

  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round1window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q1:       WHO IS THE INVENTOR OF C LANGUAGE ? ");



  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  cprintf("\n a). Dennis Ritchie");




  window5();
  gotoxy(42,15);
  cprintf("\n d). Leonhard Euler");


  //gotoxy(40,25);
  scanf("%d",&ans1);

  if( ans1==1 )

  {
  points1=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). Dennis Ritchie");
  delay(100);
  nosound();
  getch();
  goto quest2;
  }


  else if( ans1==4 )

  {
  points1=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). Leonhard Euler");
  delay(100);
  nosound();
  getch();
  goto quest2;
  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");

  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");

  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }

  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest1;


  }


  }

  getch();


  case 3:
  goto quest2;

  }

  getch();





  quest2:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  round1window();

  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
  cprintf("\n  Q2: HOW MANY CLASSES OF IPs ARE IN COMPUTER NETWORKING ? ");


  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). 8");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b). 12");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c). 3");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d). 6");

  int ans2;
  scanf("%d",&ans2);

 if( ans2==1)

{
  points2=0;

  sound(440);
  window(10,11,38,13);
  textbackground(RED);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). 8");
  delay(100);
  nosound();

}


else if( ans2==2)

{
  points2=0;

sound(440);
window(42,11,70,13);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n b). 12");
delay(100);
nosound();

}

else if( ans2==3)

{
points2=1000;

sound(440);
window(10,15,38,17);
textbackground(GREEN);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n c). 3");
delay(100);
nosound();

}

else if( ans2==4 )

{
points2=0;

sound(440);
window(42,15,70,17);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n d). 6");
delay(100);
nosound();

}


int choice2;
scanf("%d",&choice2);

switch(choice2)
{

case 1:

goto quest2;

case 2:
helplines();


  scanf("%d",&num);

  if (num==5)                     //Q2 5050
  {
  quest250:

  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round1window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q2: HOW MANY CLASSES OF IPs ARE IN COMPUTER NETWORKING ? ");



  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  cprintf("\n b). 12");




  window4();
  gotoxy(10,15);
  cprintf("\n c). 3");


  //gotoxy(40,25);
  scanf("%d",&ans2);

  if( ans2==2 )

  {
  points2=0;

 sound(440);
 window(42,11,70,13);
 textbackground(RED);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n b). 12");
 delay(100);
 nosound();
 getch();
 goto quest3;


  }


  else if( ans2==3 )

  {
  points2=1000;

 sound(440);
 window(10,15,38,17);
 textbackground(GREEN);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n c). 3");
 delay(100);
 nosound();
 getch();
 goto quest3;

  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");


  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest2;


  }


  }

  getch();



case 3:
goto quest3;


}


quest3:
window(1,1,80,25);
textbackground(CYAN);
clrscr();

round1window();

delay(500);
gotoxy(14,8);  //,70,9);
textcolor(WHITE);
delay(500);
cprintf("\n  Q3: TOMORROW IS MY EXAM BUT I DONT CARE BECAUSE A SINGLE \n\r    SHEET OF PAPER CANT DECIDE MY FUTURE. WHO SAID THIS ?");


delay(500);
window2();
gotoxy(10,12);
textcolor(WHITE);
delay(500);
cprintf("\n a). Issac Newton");


delay(500);
window3();
gotoxy(42,11);
textcolor(WHITE);
delay(500);
cprintf("\n b). Albert Einstein");


delay(500);
window4();
gotoxy(10,15);
delay(500);
cprintf("\n c). Thomas Edison");


delay(500);
window5();
gotoxy(42,15);
delay(500);
cprintf("\n d). Steve jobs");

int ans3;
scanf("%d",&ans3);

if( ans3==1)

{
points3=0;

sound(440);
window(10,11,38,13);
textbackground(RED);
clrscr();
gotoxy(10,12);
textcolor(WHITE+128);
cprintf("\n a). Issac Newton");
delay(100);
nosound();

}


else if( ans3==2)

{
points3=0;

sound(440);
window(42,11,70,13);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n b). Albert Einstein");
delay(100);
nosound();

}

else if( ans3==3)

{
points3=1000;

sound(440);
window(10,15,38,17);
textbackground(GREEN);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n c). Thomas Edison");
delay(100);
nosound();

}

else if( ans3==4 )

{
points3=0;

sound(440);
window(42,15,70,17);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n d). Steve jobs");
delay(100);
nosound();

}

int choice3;
scanf("%d",&choice3);

switch(choice3)
{

case 1:

goto quest3;

case 2:
helplines();

gotoxy(45,23);
  scanf("%d",&num);

  if (num==5)                  //Q3 5050
  {
  quest350:

  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round1window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q3: TOMORROW IS MY EXAM BUT I DONT CARE BECAUSE A SINGLE \n\r    SHEET OF PAPER CANT DECIDE MY FUTURE. WHO SAID THIS ?");



  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  cprintf("\n b). Albert Einstein");




  window4();
  gotoxy(10,15);
  cprintf("\n c). Thomas Edison");


  //gotoxy(40,25);
  scanf("%d",&ans2);

  if( ans2==2 )

  {
  points2=0;

 sound(440);
 window(42,11,70,13);
 textbackground(RED);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n b). Albert Einstein");
 delay(100);
 nosound();
 getch();
 goto s;


  }


  else if( ans2==3 )

  {
  points2=1000;

 sound(440);
 window(10,15,38,17);
 textbackground(GREEN);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n c). Thomas Edison");
 delay(100);
 nosound();
 getch();
 goto s;

  }
  }

  else if(num==6)      ;
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");


  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest3;


  }


  }

  getch();





case 3:
//goto quest4;



s:
scoreboard();
getch();

gotoxy(20,4);
textcolor(WHITE);
cprintf("\r        %d",points1);
gotoxy(20,5);
textcolor(WHITE);
cprintf("\r        %d",points2);
gotoxy(20,6);
textcolor(WHITE);
cprintf("\r        %d",points3);

r1=points1+points2+points3;

cprintf("\n\r_____________________\n\r ROUND1 TOTAL = %d\n\r_____________________",r1);
getch();

if(r1==3000)
{
clrscr();
gotoxy(20,8);
textcolor(GREEN);
cprintf("\r CONGRATULATIONS...!\n\r  you have cleared\n\r    First Round. \n\n\r     GOOD LUCK :) \n\r\n    For Next Round");
logo();
getch();
//goto quest4;
}
else if(r1<=2000)
{
clrscr();
gotoxy(20,8);
textcolor(YELLOW);
cprintf("\r     You do not\n\r  have enough score\n\r   for next round");

gotoxy(20,11);
textcolor(RED+128);
cprintf("      YOUR SCORE IS \n\r         %d",r1);
textcolor(WHITE);
cprintf("\n\r\n      TRY AGAIN");
logo();
getch();
goto exit2;
}


}

getch();

quest4:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  round2window();

  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
  cprintf("\n  Q4:       ALL KEYWORDS IN C ARE IN");


  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). LowerCase Letters");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b). UpperCase Letters");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c). CamelCase Letters");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d). None");

  int ans4;
  scanf("%d",&ans4);

  if( ans4==1 )

  {
  points4=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). LowerCase Letters");
  delay(100);
  nosound();

  }


  else if( ans4==2 )

  {
  points4=0;

  sound(440);
  window(42,11,70,13);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n b). UpperCase Letters");
  delay(100);
  nosound();

  }

  else if( ans4==3 )

  {
  points4=0;

  sound(440);
  window(10,15,38,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n c). CamelCase Letters");
  delay(100);
  nosound();

  }

  else if( ans4==4 )

  {
  points4=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). None");
  delay(100);
  nosound();

  }

  int choice4;
  scanf("%d",&choice4);

  switch(choice4)
  {

  case 1:
  goto quest4;

  case 2:
  helplines();

  gotoxy(45,23);

  scanf("%d",&num);


  if (num==5)                     //Q4 5050
  {


  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round2window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q4:       ALL KEYWORDS IN C ARE IN ");



  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  cprintf("\n a). LowerCase Letters");




  window5();
  gotoxy(42,15);
  cprintf("\n d). None");


  //gotoxy(40,25);
  scanf("%d",&ans4);

  if( ans4==1 )

  {
  points4=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). LowerCase Letters");
  delay(100);
  nosound();
  getch();
  goto quest5;
  }


  else if( ans4==4 )

  {
  points4=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). None");
  delay(100);
  nosound();
  getch();
  goto quest5;
  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");

  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");

  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }

  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest4;


  }


  }

  getch();


  case 3:
  goto quest5;

  }

  getch();





  quest5:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  round2window();

  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
  cprintf("\n  Q5: WHICH IS CORRECT WITH RESPECT TO SIZE OF DATA TYPES ? ");


  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). char > int > float");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b). int > char > float");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c). char < int < double");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d). double > char > int");

  int ans5;
  scanf("%d",&ans5);

 if( ans5==1)

{
  points5=0;

  sound(440);
  window(10,11,38,13);
  textbackground(RED);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). char > int > float");
  delay(100);
  nosound();

}


else if( ans5==2)

{
  points5=0;

sound(440);
window(42,11,70,13);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n b). int > char > float");
delay(100);
nosound();

}

else if( ans5==3)

{
points5=1000;

sound(440);
window(10,15,38,17);
textbackground(GREEN);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n c). char < int < double");
delay(100);
nosound();

}

else if( ans5==4 )

{
points5=0;

sound(440);
window(42,15,70,17);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n d). double > char > int");
delay(100);
nosound();

}


int choice5;
scanf("%d",&choice5);

switch(choice5)
{

case 1:

goto quest5;

case 2:
helplines();


  scanf("%d",&num);

  if (num==5)                     //Q2 5050
  {
  quest550:

  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round2window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q5: WHICH IS CORRECT WITH RESPECT TO SIZE OF DATA TYPES ? ");



  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  cprintf("\n b). int > char > float");




  window4();
  gotoxy(10,15);
  cprintf("\n c). c). char < int < double");


  //gotoxy(40,25);
  scanf("%d",&ans5);

  if( ans5==2 )

  {
  points5=0;

 sound(440);
 window(42,11,70,13);
 textbackground(RED);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n b). int > char > float");
 delay(100);
 nosound();
 getch();
 goto quest6;


  }


  else if( ans5==3 )

  {
  points5=1000;

 sound(440);
 window(10,15,38,17);
 textbackground(GREEN);
 clrscr();
 gotoxy(42,11);
 textcolor(WHITE+128);
 cprintf("\n c). c). char < int < double");
 delay(100);
 nosound();
 getch();
 goto quest6;

  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");


  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest5;


  }


  }

  getch();



case 3:
goto quest6;


}


quest6:

window(1,1,80,25);
textbackground(CYAN);
clrscr();

round2window();

delay(500);
gotoxy(14,8);  //,70,9);
textcolor(WHITE);
delay(500);
cprintf("\n  Q6: Which Of The Following Is Not A Valid Variable \n\r  Name Declaration");


delay(500);
window2();
gotoxy(10,12);
textcolor(WHITE);
delay(500);
cprintf("\n a). int__a3");


delay(500);
window3();
gotoxy(42,11);
textcolor(WHITE);
delay(500);
cprintf("\n b). int__3a");


delay(500);
window4();
gotoxy(10,15);
delay(500);
cprintf("\n c). int__A3");


delay(500);
window5();
gotoxy(42,15);
delay(500);
cprintf("\n d). None of the mentioned");

int ans6;
scanf("%d",&ans6);

if( ans6==1)

{
points6=0;

sound(440);
window(10,11,38,13);
textbackground(RED);
clrscr();
gotoxy(10,12);
textcolor(WHITE+128);
cprintf("\n a). int__a3");
delay(100);
nosound();

}


else if( ans6==2)

{
points6=0;

sound(440);
window(42,11,70,13);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n b). int__3a");
delay(100);
nosound();

}

else if( ans6==3)

{
points6=0;

sound(440);
window(10,15,38,17);
textbackground(RED);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n c). int__A3");
delay(100);
nosound();

}

else if( ans6==4 )

{
points6=1000;

sound(440);
window(42,15,70,17);
textbackground(GREEN);
clrscr();
gotoxy(42,11);
textcolor(WHITE+128);
cprintf("\n d). None of the mentioned");
delay(100);
nosound();

}

int choice6;
scanf("%d",&choice6);

switch(choice6)
{

case 1:

goto quest6;

case 2:
helplines();

gotoxy(45,23);
  scanf("%d",&num);

  if (num==5)                  //Q6 5050
  {


  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round2window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q6: Which Of The Following Is Not A Valid Variable \n\r  Name Declaration");



  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  cprintf("\n a). int__a3");




  window5();
  gotoxy(42,15);
  cprintf("\n d). None of the mentioned");




  //gotoxy(40,25);
  scanf("%d",&ans6);

  if( ans6==1 )
  {
  points1=0;

  sound(440);
  window(10,11,38,13);
  textbackground(RED);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). int__a3");
  delay(100);
  nosound();
  getch();
  goto quest7;

  }


  else if( ans6==4 )

  {
  points1=1000;

  sound(440);
  window(42,15,70,17);
  textbackground(GREEN);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). None of the mentioned");
  delay(100);
  nosound();
  getch();
  goto quest7;

  }
  }




  else if(num==6)      ;
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");


  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest6;


  }


  }

  getch();





case 3:
//goto quest7;




scoreboard();

gotoxy(20,4);
textcolor(WHITE);
cprintf("\r        %d",points1);
gotoxy(20,5);
textcolor(WHITE);
cprintf("\r        %d",points2);
gotoxy(20,6);
textcolor(WHITE);
cprintf("\r        %d",points3);

r1=points1+points2+points3;

cprintf("\n\r_____________________\n\r ROUND1 TOTAL = %d\n\r_____________________",r1);
getch();

gotoxy(20,11);
textcolor(WHITE);
cprintf("\r        %d",points4);
gotoxy(20,12);
textcolor(WHITE);
cprintf("\r        %d",points5);
gotoxy(20,13);
textcolor(WHITE);
cprintf("\r        %d",points6);

r2=points4+points5+points6;

cprintf("\n\r_____________________\n\r ROUND2 TOTAL = %d\n\r_____________________",r2);
getch();


if(r2==3000)
{
clrscr();
gotoxy(20,8);
textcolor(GREEN);
cprintf("\r CONGRATULATIONS...!\n\r  you have cleared\n\r    Second Round. \n\n\r     GOOD LUCK :) \n\r\n    For Next Round");
logo();
getch();
goto quest7;
}
else if(r2<=2000)
{
clrscr();
gotoxy(20,8);
textcolor(YELLOW);
cprintf("\r     You do not\n\r  have enough score\n\r   for next round");

gotoxy(20,11);
textcolor(RED+128);
cprintf("      YOUR SCORE IS \n\r         %d",r2);
textcolor(WHITE);
cprintf("\n\r\n      TRY AGAIN");
logo();
getch();
goto exit2;
}


}

getch();
		      //round 3//////////////

   quest7:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  round3window();


  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
  cprintf("\n  Q7:       WHICH IS RIGHT WAY TO INITIALIZE ARRAY ? ");


  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). int num[6]={ 2,4,12,5\n\r     ,45,5}");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b).int n{}={ 2,4,12,5,45,5}");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c).int n{6}={ 2,4,12 }");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d).int n(6)={ 2,4,12,5,45,5}");

  int ans7;
  scanf("%d",&ans7);

  if( ans7==1 )

  {
  points7=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). int num[6]={ 2,4,12,5\n\r     ,45,5}");
  delay(100);
  nosound();

  }


  else if( ans1==2 )

  {
  points7=0;

  sound(440);
  window(42,11,70,13);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n b).int n{}={ 2,4,12,5,45,5}");
  delay(100);
  nosound();

  }

  else if( ans1==3 )

  {
  points7=0;

  sound(440);
  window(10,15,38,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n c).int n{6}={ 2,4,12 }");
  delay(100);
  nosound();

  }

  else if( ans1==4 )

  {
  points7=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d).int n(6)={ 2,4,12,5,45,5}");
  delay(100);
  nosound();

  }

  int choice7;
  scanf("%d",&choice7);

  switch(choice7)
  {

  case 1:
  goto quest7;

  case 2:
  helplines();

  gotoxy(45,23);

  scanf("%d",&num);


  if (num==5)                     //Q7 5050
  {


  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round3window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q7:     WHICH IS RIGHT WAY TO INITIALIZE ARRAY ? ");



  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  cprintf("\n a). int num[6]={ 2,4,12,5\n\r     ,45,5}");




  window5();
  gotoxy(42,15);
  cprintf("\n d).int n(6)={ 2,4,12,5,45,5}");


  //gotoxy(40,25);
  scanf("%d",&ans7);

  if( ans7==1 )

  {
  points7=1000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). int num[6]={ 2,4,12,5\n\r     ,45,5}");
  delay(100);
  nosound();
  getch();
  goto quest8;
  }


  else if( ans7==4 )

  {
  points7=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d).int n(6)={ 2,4,12,5,45,5}");
  delay(100);
  nosound();
  getch();
  goto quest8;
  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");

  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");

  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }

  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest7;


  }


  }

  getch();


  case 3:
  goto quest8;

  }

  getch();

  quest8:
  clrscr();
  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();
  gotoxy(8,12);
  textcolor(RED);
  cprintf(" This is your last question for 3000 points. GOOD LUCK & Be Careful");
  getch();
  clrscr();

  round3window();

  delay(500);
  gotoxy(14,8);  //,70,9);
  textcolor(WHITE);
  delay(500);
   cprintf("\n  Q8: AN ARRAY ELEMENTS ARE ALWAYS STORED IN _______ MEMORY\n\r      LOCATIONS");




  delay(500);
  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  delay(500);
  cprintf("\n a). Sequential");


  delay(500);
  window3();
  gotoxy(42,11);
  textcolor(WHITE);
  delay(500);
  cprintf("\n b). Random");


  delay(500);
  window4();
  gotoxy(10,15);
  delay(500);
  cprintf("\n c). Sequential and Random");


  delay(500);
  window5();
  gotoxy(42,15);
  delay(500);
  cprintf("\n d). None of the above");

  int ans8;
  scanf("%d",&ans8);

  if( ans8==1 )

  {
  points8=3000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). Sequential");
  delay(100);
  nosound();

  }


  else if( ans8==2 )

  {
  points8=0;

  sound(440);
  window(42,11,70,13);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n b). Random");
  delay(100);
  nosound();

  }

  else if( ans1==3 )

  {
  points8=0;

  sound(440);
  window(10,15,38,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n c). Sequential and Random");
  delay(100);
  nosound();

  }

  else if( ans1==4 )

  {
  points8=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). None of the above");
  delay(100);
  nosound();

  }

  int choice8;
  scanf("%d",&choice8);

  switch(choice8)
  {

  case 1:
  goto quest8;

  case 2:
  helplines();

  gotoxy(45,23);

  scanf("%d",&num);


  if (num==5)                     //Q8 5050
  {


  window(1,1,80,25);
  textbackground(CYAN);
  clrscr();

  clrscr();

  round1window();


  gotoxy(14,8);
  textcolor(WHITE);
  cprintf("\n  Q8: AN ARRAY ELEMENTS ARE ALWAYS STORED IN _______ MEMORY\n\r      LOCATIONS");




  window2();
  gotoxy(10,12);
  textcolor(WHITE);
  cprintf("\n a). Sequential");




  window5();
  gotoxy(42,15);
  cprintf("\n d). None of the above");


  //gotoxy(40,25);
  scanf("%d",&ans8);

  if( ans8==1 )

  {
  points8=3000;

  sound(440);
  window(10,11,38,13);
  textbackground(GREEN);
  clrscr();
  gotoxy(10,12);
  textcolor(WHITE+128);
  cprintf("\n a). Sequential");
  delay(100);
  nosound();
  getch();
  goto sb;
  }


  else if( ans8==4 )

  {
  points8=0;

  sound(440);
  window(42,15,70,17);
  textbackground(RED);
  clrscr();
  gotoxy(42,11);
  textcolor(WHITE+128);
  cprintf("\n d). None of the above");
  delay(100);
  nosound();
  getch();
  goto sb;
  }
  }

  else if(num==6)
  {
  window(1,1,80,25);
  textbackground(WHITE);
  clrscr();

  gotoxy(35,2);
  textcolor(BLUE+128);
  cprintf("\n\nPHONE A FRIEND");

  gotoxy(2,4);
  textcolor(BLACK);
  cprintf("\n\n\n                               1. Waqar Hanfi                \n\n\r                                2. Mansoor\n\n\r                                3. Mohsin Bashir\n\n\r			                             4. Obaid\n\n\r			                             5. Jamal\n\n\r			                             6. A.Waris ");

  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Waqar Hanfi......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  case 2:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mansoor......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  case 3:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Mohsin Bashir......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  case 4:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Obaid......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  case 5:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to Jamal......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");
  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }
  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  case 6:
  clrscr();
  gotoxy(35,12);
  sound(440);
  cprintf("Calling to A.Waris......");
  delay(2000);
  nosound();
  clrscr();
  gotoxy(35,12);
  cprintf("Call Recieved......");

  for (t=60 ; t>=0 ; t--)
  {
  gotoxy(36,14);
  textcolor(BLACK);
  cprintf("Time Left %d seconds",t);
  delay(500);
  }

  clrscr();
  gotoxy(35,12);
  textcolor(BLACK+128);
  cprintf("Call Ended.........");
  getch();
  goto quest8;


  }


  }

  getch();


  case 3:
  goto sb;

  }

  getch();

sb:
scoreboard();

gotoxy(20,4);
textcolor(WHITE);
cprintf("\r        %d",points1);
gotoxy(20,5);
textcolor(WHITE);
cprintf("\r        %d",points2);
gotoxy(20,6);
textcolor(WHITE);
cprintf("\r        %d",points3);

r1=points1+points2+points3;

cprintf("\n\r_____________________\n\r ROUND1 TOTAL = %d\n\r_____________________",r1);
//getch();

gotoxy(20,11);
textcolor(WHITE);
cprintf("\r        %d",points4);
gotoxy(20,12);
textcolor(WHITE);
cprintf("\r        %d",points5);
gotoxy(20,13);
textcolor(WHITE);
cprintf("\r        %d",points6);

r2=points4+points5+points6;

cprintf("\n\r_____________________\n\r ROUND2 TOTAL = %d\n\r_____________________",r2);
getch();

gotoxy(20,18);
textcolor(WHITE);
cprintf("\r        %d",points7);
gotoxy(20,19);
textcolor(WHITE);
cprintf("\r        %d",points8);

r3=points7+points8;
//gotoxy(20,20);
cprintf("\n\r_____________________\r ROUND3 TOTAL = %d\n\r_____________________",r3);
getch();

int total;
total=r1+r2+r3;

clrscr();
gotoxy(23,12);
textcolor(GREEN);
cprintf("\n\n\n\n\n\n\n\n\r    Grand Total\n\r\n     %d ",total);//\n\r\n      W O N :) ");/// \n\n\r     GOOD LUCK :) \n\r\n    For Next Round");
getch();
clrscr();
gotoxy(20,8);
textcolor(GREEN);
cprintf("\r CONGRATULATIONS...!\n\r     you have \n\r\n      W O N :) ");/// \n\n\r     GOOD LUCK :) \n\r\n    For Next Round");
logo();
getch();




exit:
window(1,1,80,25);
textbackground(BLUE);
clrscr();
gotoxy(35,10);
textcolor(WHITE);
cprintf("THANK YOU");
gotoxy(38,12);
textcolor(WHITE);
cprintf("FOR");
gotoxy(36,14);
textcolor(WHITE);
cprintf("PLAYING");
getch();
clrscr();
gotoxy(30,12);
cprintf("Coded By : Abdul Waris");
getch();
exit(1);



exit2:
window(1,1,80,25);
textbackground(BLACK);
clrscr();
gotoxy(26,12);
textcolor(WHITE);
cprintf("(: BETTER LUCK FOR NEXT TIME :)");
getch();

clrscr();
gotoxy(26,12);
textcolor(WHITE);
cprintf("  Ye Bik GyE Hai GorMint :P");

getch();
exit(1);

//exit2:

getch();
}



