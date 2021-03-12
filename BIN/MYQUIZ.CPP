#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main (void)
{
clrscr();
int choice,i,t,r=0,w=0,p=NULL,q=NULL,sum,earn=0;
char name[20];
clrscr();


//starting allah
textbackground(5);
textbackground(6);
gotoxy(37,4);
textcolor(WHITE);
cprintf("I");
sound(100);
delay(500);
nosound();
gotoxy(39,4);
textcolor(WHITE);
cprintf("N");
sound(200);
delay(500);
nosound();
gotoxy(36,6);
textcolor(WHITE);
cprintf("T");
sound(300);
delay(500);
nosound();
gotoxy(38,6);
textcolor(WHITE);
cprintf("H");
sound(400);
delay(500);
nosound();
gotoxy(40,6);
textcolor(WHITE);
cprintf("E");
sound(500);
delay(500);
nosound();
gotoxy(35,8);
textcolor(WHITE);
cprintf("N");
sound(600);
delay(500);
nosound();
gotoxy(37,8);
textcolor(WHITE);
cprintf("A");
sound(700);
nosound();
gotoxy(39,8);
textcolor(WHITE);
cprintf("M");
sound(800);
delay(500);
nosound();
gotoxy(41,8);
textcolor(WHITE);
cprintf("E");
sound(900);
delay(500);
nosound();
gotoxy(37,10);
textcolor(WHITE);
cprintf("O F");
sound(1000);
delay(500);
nosound();
gotoxy(34,12);
textcolor(WHITE);
cprintf("A");
sound(600);
delay(700);
nosound();
gotoxy(36,12);
textcolor(WHITE);
cprintf("L");
sound(700);
delay(700);
nosound();
gotoxy(38,12);
textcolor(WHITE);
cprintf("L");
sound(800);
delay(700);
nosound();
gotoxy(40,12);
textcolor(WHITE);
cprintf("A");
sound(900);
delay(700);
nosound();
gotoxy(42,12);
textcolor(WHITE);
cprintf("H");
sound(1000);
delay(700);
nosound();
gotoxy(7,17);
cprintf("THE    MOST     BENEFICIENT    AND    THE     MOST     MERCIFUL...");
sleep(2);
clrscr();
		//end of allaha

//                starting about
clrscr();
gotoxy(35,2);
textcolor(12);
cprintf("ABOUT");
textcolor(15);
gotoxy(32,3);
cprintf("==============");
gotoxy(22,9);
textcolor(15);
cprintf("THIS PROGRAM IS MADE BY A STUDENT OF, ");
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
delay(830);
clrscr();
		//end of about

	       //starting loading

clrscr();
textbackground(1);
gotoxy(33,16);
delay(250);
cprintf("LOADING 0%");
gotoxy(22,12);
textcolor(15);
cprintf("_");
gotoxy(33,16);
printf("LOADING 1%");
delay(200);

gotoxy(23,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 2%");
delay(200);

gotoxy(24,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 3%");
delay(200);

gotoxy(25,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 5%");
delay(200);

gotoxy(26,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 7%");
delay(200);

gotoxy(27,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 11%");
delay(200);

gotoxy(33,16);
printf("LOADING 15%");
delay(350);
gotoxy(28,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 17%");
delay(200);

gotoxy(29,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 20%");
delay(200);

gotoxy(30,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 23%");
delay(200);

gotoxy(31,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 26%");
delay(200);

gotoxy(32,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 30%");
delay(200);

gotoxy(33,12);
cprintf("_");
delay(200);
gotoxy(33,16);
cprintf("LOADING 36%");
delay(350);
gotoxy(34,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 40%");
delay(500);

gotoxy(35,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 42%");
delay(400);

gotoxy(36,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 46%");
delay(400);
gotoxy(33,16);
printf("LOADING 48%");
gotoxy(37,12);
cprintf("_");
gotoxy(33,16);
cprintf("LOADING 51%");
delay(400);

gotoxy(38,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 54%");
delay(400);

gotoxy(39,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 57%");
delay(400);

gotoxy(40,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 60%");
delay(300);

gotoxy(41,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 63%");
delay(300);

gotoxy(33,16);
printf("LOADING 67%");
delay(350);
gotoxy(42,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 70%");
delay(300);

gotoxy(43,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 72%");
delay(300);

gotoxy(44,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 75%");
delay(300);

gotoxy(45,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 77%");
delay(300);
gotoxy(33,16);
printf("LOADING 80%");
delay(350);
gotoxy(46,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 85%");
delay(300);
gotoxy(47,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 87%");
delay(300);

gotoxy(48,12);
cprintf("_");
gotoxy(33,16);
printf("LOADING 90%");
delay(200);
gotoxy(49,12);
cprintf("__");
gotoxy(33,16);
printf("LOADING 95%");
delay(230);

gotoxy(33,16);
printf("LOADING 100%");
delay(500);
clrscr();
gotoxy(31,14);
textcolor(15);
cprintf("LOADING COMPLETED......");
delay(850);
clrscr();
	  //end of loading


	  //starting welcome

clrscr();
gotoxy(17,10);
cprintf("W");
delay(220);
gotoxy(18,10);
cprintf("E");
delay(200);
gotoxy(19,10);
cprintf("L");
delay(200);
gotoxy(20,10);
cprintf("C");
delay(200);
gotoxy(21,10);
cprintf("O");
delay(200);
gotoxy(22,10);
cprintf("M");
delay(200);
gotoxy(23,10);
cprintf("E");
delay(200);
gotoxy(24,10);
cprintf("-");
delay(200);
gotoxy(25,10);
cprintf("-");
delay(200);
gotoxy(26,10);
cprintf("-");
delay(200);
gotoxy(27,10);
cprintf("-");
delay(200);
gotoxy(28,10);
cprintf("T");
delay(200);
gotoxy(29,10);
cprintf("O");
delay(500);
gotoxy(30,10);
cprintf("-");
delay(400);
gotoxy(31,10);
cprintf("-");
delay(400);
gotoxy(32,10);
cprintf("-");
delay(400);
gotoxy(33,10);
cprintf("-");
delay(400);
gotoxy(34,10);
cprintf("Q");
delay(400);
gotoxy(35,10);
cprintf("U");
delay(300);
gotoxy(36,10);
cprintf("I");
delay(300);
gotoxy(37,10);
cprintf("Z");
delay(300);
gotoxy(38,10);
cprintf("-");
delay(300);
gotoxy(39,10);
textcolor(12);
cprintf("2");
delay(300);
gotoxy(40,10);
cprintf(".");
delay(200);
gotoxy(41,10);
textcolor(15);
cprintf("O");
delay(300);
gotoxy(42,10);
cprintf(".");
delay(200);
gotoxy(43,10);
cprintf(".");
delay(200);
gotoxy(44,10);
cprintf(".");
delay(200);
gotoxy(45,10);
cprintf(".");
delay(1000);
clrscr();
	    //end of welcome


		 //get user name
gotoxy(22,14);
textcolor(15);
cprintf("PLEASE ENTER YOUR GOOD NAME: ");
gets(name);
clrscr();


		//starting quiz
clrscr();
gotoxy(18,2);
textcolor(13);
cprintf("\n");
gotoxy(36,3);
textcolor(15);
cprintf("    QUIZ \n");
gotoxy(18,4);
textcolor(13);
cprintf("");
     delay(700);
     gotoxy(35,5);
     textcolor(15);
   cprintf(" WELCOME\n ");
   gotoxy(38,6);
  cprintf(" TO ");
     gotoxy(33,7);
textcolor(WHITE);
cprintf("T");
sound(600);
delay(350);
nosound();
gotoxy(35,7);
textcolor(YELLOW);
cprintf("H");
sound(700);
delay(350);
nosound();
gotoxy(37,7);
textcolor(RED);
cprintf("E");
sound(800);
delay(350);
nosound();
gotoxy(39,7);
textcolor(WHITE);
cprintf("G");
sound(900);
delay(350);
nosound();
gotoxy(41,7);
textcolor(BROWN);
cprintf("A");
sound(1000);
delay(350);
nosound();
gotoxy(43,7);
textcolor(RED);
cprintf("M");
sound(1100);
delay(350);
nosound();
gotoxy(45,7);
textcolor(WHITE);
cprintf("E");
sound(1200);
nosound();
gotoxy(18,8);
     cprintf("_________________________________________________");
     delay(740);
     gotoxy(18,9);
     cprintf("_________________________________________________");
     gotoxy(23,10);
     cprintf(" !!!!!!!!!BECOME A WINNER!!!!!!!!!!!    ") ;
     menu:
     delay(780);
     gotoxy(18,11);
     cprintf("_________________________________________________");
     gotoxy(29,12);
     cprintf("    MENU");
     gotoxy(18,13);
     cprintf("_________________________________________________");
     gotoxy(20,14);
     cprintf(">> PRESS 1 TO START THE GAME");
     gotoxy(20,15);
     cprintf(">> PRESS 2 FOR ASSISTANCE            ");
     gotoxy(20,16);
     cprintf(">> PRESS 3 TO VIEW ANSWERS ");
     gotoxy(20,17);
     cprintf(">> PRESS 4 TO QUIT             ");
     gotoxy(18,19);
     cprintf("_________________________________________________\n\n");
     gotoxy(19,21);
     cprintf("\n%s WHAT'S YOUR CHOICE:[1-4].. :",name);
scanf("%d",&choice);

if (choice==1)
{
clrscr();
gotoxy(27,3);
textcolor(WHITE);
cprintf("I");
delay(300);
gotoxy(29,3);
textcolor(YELLOW);
cprintf("N");
delay(300);
gotoxy(31,3);
textcolor(GREEN);
cprintf("S");
delay(300);
gotoxy(33,3);
textcolor(RED);
cprintf("T");
delay(300);
gotoxy(35,3);
textcolor(BROWN);
cprintf("R");
delay(300);
gotoxy(37,3);
textcolor(RED);
cprintf("U");
delay(300);
gotoxy(39,3);
textcolor(WHITE);
cprintf("C");
delay(300);
gotoxy(41,3);
textcolor(BROWN);
cprintf("T");
delay(300);
gotoxy(43,3);
textcolor(RED);
cprintf("I");
delay(300);
gotoxy(45,3);
textcolor(YELLOW);
cprintf("O");
delay(300);
gotoxy(47,3);
textcolor(RED);
cprintf("N");
delay(300);
gotoxy(49,3);
textcolor(WHITE);
cprintf("S");
delay(700);
printf("\n\n >> %s When your game starts, you will be asked a total of 5 questions.",name);
printf("\n >> Each right answer will be awarded RS:1000!!!");
printf("\n >> By this way you can earn upto RS:5000!!!!!..........");
printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
printf("\n    right option.");
printf("\n >> You will be asked questions continuously, till the End....");
printf("\n >> ONCE THE GAME IS STARTED YOU HAVE TO COMPLETE IT.TILL THE END!!");
printf("\n\n\t\t  !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
printf("\n\n\n Press 0  to start the game!\n");
printf("\n Press any other NUMBER to return to the main menu!");
scanf("%d",&i);
    if (i==0)
    {
    goto start;
    }
    else
    {
    clrscr();
    goto menu;
    }

}
else if (choice==2)
{
goto help;
}
else if (choice==3)
{
goto view;
}
else
{
clrscr();
gotoxy(25,9);
    textcolor(14);
     cprintf("EXITING NOW...");
    delay(500);
    gotoxy(25,11);
    textcolor(13);
    cprintf("%s THANK YOU FOR PLAYING.",name);
    gotoxy(33,13);
    delay(700);
    cprintf("HOPE YOU LIKE IT :)");
    gotoxy(33,17);
    delay(1000);
    textcolor(7);
    cprintf("HAVE A NICE DAY %s",name);
getch();
exit(0);

}

clrscr();
start:

switch(choice)
{
case 1:
{
clrscr();
gotoxy(27,9);
textcolor(15);
cprintf("Hay,%s are you ready",name);
sleep(2);
clrscr();
gotoxy(20,8);
textcolor(12);
cprintf("%s YOUR FIRST [1] QUESTION FOR RS:1000",name);
sleep(2);
gotoxy(30,10);
cprintf("ON YOUR COMPUTER SCREEN");
getch();
clrscr();

clrscr();		//PRINT "PRICE WON" inside saperator
gotoxy(68,1);
textcolor(7);
cprintf("PRICE\n");

		//separator  q-1
gotoxy(62,1);
cprintf("||");
gotoxy(62,2);
cprintf("||");
gotoxy(62,3);
cprintf("||");
gotoxy(62,4);
cprintf("||");
gotoxy(62,5);
cprintf("||");
gotoxy(62,6);
cprintf("||");
gotoxy(62,7);
cprintf("||");
gotoxy(62,8);
cprintf("||");
gotoxy(62,9);
cprintf("||");
gotoxy(62,10);
cprintf("||");
gotoxy(62,11);
cprintf("||");
gotoxy(62,12);
cprintf("||");
gotoxy(62,13);
cprintf("||");
gotoxy(62,14);
cprintf("||");
gotoxy(62,15);
cprintf("||");
gotoxy(62,16);
cprintf("||");
gotoxy(62,17);
cprintf("||");
gotoxy(62,18);
cprintf("||");
gotoxy(62,19);
cprintf("||");
gotoxy(62,20);
cprintf("||");
gotoxy(62,21);
cprintf("||");
gotoxy(62,22);
cprintf("||");


	   //Q-1 starting
gotoxy(5,3);
textcolor(15);
cprintf("Q:1>RAM stands for..?");
	       //options
gotoxy(5,5);
textcolor(15);
cprintf("1.Random access memory     2.rapid access module");
gotoxy(5,7);
textcolor(15);
cprintf("3.Read only meory          4.None");

		//user choice
gotoxy(1,9);
cprintf("%s Enter your Choice[1-4]...",name);
scanf("%d",&choice);



if (choice==1)
{
r++;
p++;
earn=earn+1000;


//highlight the correct answer
gotoxy(5,5);
textcolor(2);
cprintf("1.Random access memory");


		// print the price won (in green)
gotoxy(68,3);
textcolor(2);
cprintf("1000",p++);

		//print correct(in green)
gotoxy(1,11);
textcolor(2);
cprintf("\n\n%s Your Answer Is Correct!!!",name);
getch();


clrscr();
}

else
{
w++;
q++;
//highlight the correct answer (in green)
gotoxy(5,5);
textcolor(2);
cprintf("1.Random access memory");

//print the price loss (in red)
gotoxy(68,3);
textcolor(RED);
cprintf("1000",q++);

//print wrong (in red)
gotoxy(1,11);
textcolor(4);
cprintf("\n\n%s Your Answer IS Wrong!!!!!",name);
getch();
clrscr();
}
}

clrscr();

	//END OF 1 QUESTION

	//STARTING 2 QUESTION

case 2:
{
clrscr();
gotoxy(27,8);
textcolor(12);
cprintf("%s YOUR SECOUND [2] QUESTION FOR RS:2000",name);
sleep(2);
gotoxy(30,10);
cprintf("ON YOUR COMPUTER SCREEN");
getch();
clrscr();

clrscr();

	//PRINT "PRICE WON" inside saperator
gotoxy(68,1);
textcolor(7);
cprintf("PRICE \n");

		//separator  q-2
gotoxy(62,1);
cprintf("||");
gotoxy(62,2);
cprintf("||");
gotoxy(62,3);
cprintf("||");
gotoxy(62,4);
cprintf("||");
gotoxy(62,5);
cprintf("||");
gotoxy(62,6);
cprintf("||");
gotoxy(62,7);
cprintf("||");
gotoxy(62,8);
cprintf("||");
gotoxy(62,9);
cprintf("||");
gotoxy(62,10);
cprintf("||");
gotoxy(62,11);
cprintf("||");
gotoxy(62,12);
cprintf("||");
gotoxy(62,13);
cprintf("||");
gotoxy(62,14);
cprintf("||");
gotoxy(62,15);
cprintf("||");
gotoxy(62,16);
cprintf("||");
gotoxy(62,17);
cprintf("||");
gotoxy(62,18);
cprintf("||");
gotoxy(62,19);
cprintf("||");
gotoxy(62,20);
cprintf("||");
gotoxy(62,21);
cprintf("||");
gotoxy(62,22);
cprintf("||");



	//print perious price won
gotoxy(68,3);
cprintf("1000",p++);


       //Q-2 starting
gotoxy(5,3);
textcolor(15);
cprintf("Q:2>THE VALUE OF GRAVITATIONAL FORCE IS..?");
	       //options
gotoxy(5,5);
textcolor(15);
cprintf("1) 9.8m/s        2) 9.8cm/s");
gotoxy(5,7);
textcolor(15);
cprintf("3) 5cm/s         4) None");

		//user choice
gotoxy(1,9);
printf("%s Enter your Choice[1-4]...",name);
scanf("%d",&choice);


if (choice==1)
{
r++;
p++;
earn=earn+1000;
//highlight the correct answer
gotoxy(5,5);
textcolor(2);
cprintf("1) 9.8m/s");


	// print the price won (in green)
gotoxy(68,5);
textcolor(2);
cprintf("2000",p++);

		//print correct(in green)
gotoxy(1,11);
textcolor(2);
cprintf("\n\n%s Your Answer Is Correct!!!",name);
getch();
clrscr();
}

else
{
w++;
q++;
//highlight the correct answer (in green)
gotoxy(5,5);
textcolor(2);
cprintf("1) 9.8m/s");

//print the price loss (in red)
gotoxy(68,4);
textcolor(RED);
cprintf("2000",q++);

//print wrong (in red)
gotoxy(1,11);
textcolor(4);
cprintf("\n\n%s Your Answer IS Wrong!!!!!",name);
getch();
clrscr();
}
}

clrscr();


	  //END OF Q-2

	  // STARTING Q-3



case 3:
{
clrscr();
gotoxy(20,8);
textcolor(12);
cprintf("%s YOUR THIRD [3] QUESTION FOR RS:3000",name);
sleep(2);
gotoxy(27,10);
cprintf("ON YOUR COMPUTER SCREEN");
getch();
clrscr();

clrscr();

	//PRINT "PRICE WON" inside saperator
gotoxy(68,1);
textcolor(7);
cprintf("PRICE\n");

		//separator  q-3
gotoxy(62,1);
cprintf("||");
gotoxy(62,2);
cprintf("||");
gotoxy(62,3);
cprintf("||");
gotoxy(62,4);
cprintf("||");
gotoxy(62,5);
cprintf("||");
gotoxy(62,6);
cprintf("||");
gotoxy(62,7);
cprintf("||");
gotoxy(62,8);
cprintf("||");
gotoxy(62,9);
cprintf("||");
gotoxy(62,10);
cprintf("||");
gotoxy(62,11);
cprintf("||");
gotoxy(62,12);
cprintf("||");
gotoxy(62,13);
cprintf("||");
gotoxy(62,14);
cprintf("||");
gotoxy(62,15);
cprintf("||");
gotoxy(62,16);
cprintf("||");
gotoxy(62,17);
cprintf("||");
gotoxy(62,18);
cprintf("||");
gotoxy(62,19);
cprintf("||");
gotoxy(62,20);
cprintf("||");
gotoxy(62,21);
cprintf("||");
gotoxy(62,22);
cprintf("||");



	//print perious price won
gotoxy(68,3);
cprintf("1000",p++);
gotoxy(68,5);
cprintf("2000",p++);


       //Q-3 starting
gotoxy(5,3);
textcolor(15);
cprintf("Q:3>BACKTRACK IS MAINLY USED FOR..?");
	       //options
gotoxy(5,5);
textcolor(15);
cprintf("1) HACKING     2) OS");
gotoxy(5,7);
textcolor(15);
cprintf("3) DESINING    4) None");

		//user choice
gotoxy(1,9);
cprintf("%s Enter your Choice[1-4]...",name);
scanf("%d",&choice);


if (choice==1)
{
r++;
p++;
earn=earn+1000;
//highlight the correct answer
gotoxy(5,5);
textcolor(2);
cprintf("1) HACKING");


		// print the price won (in green)
gotoxy(68,7);
textcolor(2);
cprintf("3000",p++);

		//print correct(in green)
gotoxy(1,11);
textcolor(2);
cprintf("\n\n%s Your Answer Is Correct!!!",name);
getch();
clrscr();
}

else
{
w++;
q++;
//highlight the correct answer (in green)
gotoxy(5,5);
textcolor(2);
cprintf("1) HACKING");

//print the price loss (in red)
gotoxy(68,3);
cprintf("1000",p++);
gotoxy(68,5);
cprintf("2000",p++);
gotoxy(68,7);
textcolor(4);
cprintf("3000",q++);

//print wrong (in red)
gotoxy(1,11);
textcolor(4);
cprintf("\n\n%s Your Answer IS Wrong!!!!!",name);
getch();
clrscr();
}
}

clrscr();


case 4:
{
gotoxy(24,9);
textcolor(WHITE);
cprintf("Hay,%s Not Bad You Made It This Far ",name);
sleep(2);
clrscr();
gotoxy(20,8);
textcolor(12);
cprintf("%s YOUR FOURTH [4] QUESTION FOR RS:4000 [Good LUCK]",name);
sleep(2);
gotoxy(27,10);
cprintf("ON YOUR COMPUTER SCREEN");
getch();
clrscr();

clrscr();

	//PRINT "PRICE WON" inside saperator
gotoxy(68,1);
textcolor(7);
cprintf("PRICE \n");

		//separator  q-4
gotoxy(62,1);
cprintf("||");
gotoxy(62,2);
cprintf("||");
gotoxy(62,3);
cprintf("||");
gotoxy(62,4);
cprintf("||");
gotoxy(62,5);
cprintf("||");
gotoxy(62,6);
cprintf("||");
gotoxy(62,7);
cprintf("||");
gotoxy(62,8);
cprintf("||");
gotoxy(62,9);
cprintf("||");
gotoxy(62,10);
cprintf("||");
gotoxy(62,11);
cprintf("||");
gotoxy(62,12);
cprintf("||");
gotoxy(62,13);
cprintf("||");
gotoxy(62,14);
cprintf("||");
gotoxy(62,15);
cprintf("||");
gotoxy(62,16);
cprintf("||");
gotoxy(62,17);
cprintf("||");
gotoxy(62,18);
cprintf("||");
gotoxy(62,19);
cprintf("||");
gotoxy(62,20);
cprintf("||");
gotoxy(62,21);
cprintf("||");
gotoxy(62,22);
cprintf("||");


	//print perious price won
gotoxy(68,3);
cprintf("1000",p++);
gotoxy(68,5);
cprintf("2000",p++);
gotoxy(68,7);
cprintf("3000",p++);


       //Q-4 starting
gotoxy(5,3);
textcolor(15);
cprintf("Q:4>EXTENCION OF MS-WORD FILE IS..?");
	       //options
gotoxy(5,5);
textcolor(15);
cprintf("1) DOCX     2) XDOC");
gotoxy(5,7);
textcolor(15);
cprintf("3) PPTX     4) None");

		//user choice
gotoxy(1,9);
cprintf("%s Enter your Choice[1-4]...",name);
scanf("%d",&choice);


if (choice==1)
{
r++;
p++;
earn=earn+1000;
//highlight the correct answer
gotoxy(5,5);
textcolor(2);
cprintf("1) DOCX");


		// print the price won (in green)
gotoxy(68,9);
textcolor(2);
cprintf("4000",p++);

		//print correct(in green)
gotoxy(1,11);
textcolor(2);
cprintf("\n\n%s Your Answer Is Correct!!!",name);
getch();
clrscr();
}

else
{
w++;
q++;
//highlight the correct answer (in green)
gotoxy(5,5);
textcolor(2);
cprintf("1) DOCX");

//print the price loss (in red)
gotoxy(68,3);
cprintf("1000",p++);
gotoxy(68,5);
cprintf("2000",p++);
gotoxy(68,7);
textcolor(4);
cprintf("3000",q++);

gotoxy(68,9);
textcolor(4);
cprintf("4000",q++);

//print wrong (in red)
gotoxy(1,11);
textcolor(4);
cprintf("\n\n%s Your Answer IS Wrong!!!!!",name);
getch();
clrscr();
}
}

clrscr();
		     //end q-4

		     //staring q-5


case 5:
{
gotoxy(279,9);
clrscr();
gotoxy(20,8);
textcolor(12);
cprintf("%s YOUR FIFTH [5] AND LAST QUESTION FOR RS:5000",name);
sleep(1);
gotoxy(27,10);
cprintf("ON YOUR COMPUTER SCREEN");
getch();
clrscr();

		//PRINT "PRICE WON" inside saperator
clrscr();
gotoxy(68,1);
textcolor(7);
cprintf("PRICE ");
		//SEPARATOR  q-5

gotoxy(62,1);
cprintf("||");
gotoxy(62,2);
cprintf("||");
gotoxy(62,3);
cprintf("||");
gotoxy(62,4);
cprintf("||");
gotoxy(62,5);
cprintf("||");
gotoxy(62,6);
cprintf("||");
gotoxy(62,7);
cprintf("||");
gotoxy(62,8);
cprintf("||");
gotoxy(62,9);
cprintf("||");
gotoxy(62,10);
cprintf("||");
gotoxy(62,11);
cprintf("||");
gotoxy(62,12);
cprintf("||");
gotoxy(62,13);
cprintf("||");
gotoxy(62,14);
cprintf("||");
gotoxy(62,15);
cprintf("||");
gotoxy(62,16);
cprintf("||");
gotoxy(62,17);
cprintf("||");
gotoxy(62,18);
cprintf("||");
gotoxy(62,19);
cprintf("||");
gotoxy(62,20);
cprintf("||");
gotoxy(62,21);
cprintf("||");
gotoxy(62,22);
cprintf("||");

		//print perevious price won
gotoxy(68,3);
cprintf("1000",p++);
gotoxy(68,5);
cprintf("2000",p++);
gotoxy(68,7);
cprintf("3000",p++);
gotoxy(68,9);
cprintf("4000",p++);

		//Q-5 starting
gotoxy(5,3);
textcolor(15);
cprintf("Q:5>Windows is a product of...?");
		//Options
gotoxy(5,5);
textcolor(15);
cprintf("1.Microsoft     2.Apple");
gotoxy(5,7);
textcolor(15);
cprintf("3.Linux        4.None");

		//user choice
gotoxy(1,9);
cprintf("%s Enter your Choice[1-4]..",name);
scanf("%d",&choice);


if (choice==1)
{

r++;
p++;
earn=earn+1000;
//highlight the correct answer
gotoxy(5,5);
textcolor(2);
cprintf("1.Microsoft");


		//print price won (in green)
gotoxy(68,11);
textcolor(2);
cprintf("5000",p++);

		//print correct (in green)
gotoxy(1,11);
textcolor(2);
cprintf("\n\n%s Your Answer Is Correct!!!\n\n",name);
getch();
clrscr();

		//total right and wrong in end of quiz
gotoxy(25,8);
textcolor(15);
cprintf("Total Right Answers= %d",r);
gotoxy(25,10);
textcolor(12);
cprintf("Total Wrong Answers= %d",w);
gotoxy(25,13);
getch();

clrscr();
gotoxy(20,11);
textcolor(13);
cprintf("%s YOU HAVE EARNED RS:%d OUT OF RS:5000",name,earn);
getch();
clrscr();


		//ask
gotoxy(24,11);
cprintf("Hay, %s Do You Want To Restart the Game??",name);
gotoxy(28,13);
cprintf("Press.1.to RESTART");
gotoxy(28,14);
cprintf("Press.2.to Exit");
gotoxy(3,17);
cprintf("Please Enter your Choice");
scanf("%d",&i);

	       //ask if \ else started
if (i==1)
{
clrscr();
goto menu;
}
else
{
goto exit;
}


		 //ask if /else closed
break;
}

else
{
w++;
q++;
//highlight the correct answer (in green)
gotoxy(5,5);
textcolor(2);
cprintf("1.Microsoft");


	//print price loss (in red)
gotoxy(68,11);
textcolor(RED);
cprintf("5000",q++);

		//print wrong (in red)
gotoxy(1,11);
textcolor(4);
cprintf("%s Your Answer IS Wrong!!!!!\n\n\n",name);
getch();
clrscr();




		//total right and wrong in end of quiz
gotoxy(25,8);
textcolor(15);
cprintf("Total Right Answers= %d",r);
gotoxy(25,10);
textcolor(12);
cprintf("Total Wrong Answers= %d",w);
gotoxy(25,13);
getch();

clrscr();
gotoxy(20,11);
textcolor(13);
cprintf("%s YOU HAVE EARNED RS:%d OUT OF RS:5000",name,earn);
getch();
clrscr();


		//ask
gotoxy(24,11);
textcolor(6);
cprintf("Hay,%s Do You Want To Restart the Game??",name);
gotoxy(28,13);
cprintf("Press.1.to RESTART");
gotoxy(28,14);
cprintf("Press.2.to Exit");
gotoxy(3,17);
cprintf("Please Enter your Choice");
scanf("%d",&i);

	       //ask if \ else started
if (i==1)
{
clrscr();
goto menu;
}
else
{
goto exit;
}



break;
}


}



//End of Question
exit(0);


  //view answers (only in  menu)
view:
clrscr();
textcolor(15);
cprintf("HAY %s ALL THE ANSWERS ARE CHOICE [1]\n\n\n",name);
		//ask
gotoxy(28,11);
cprintf("Return To Menu??");
gotoxy(28,12);
cprintf("Press.1.to go to Menu");
gotoxy(28,13);
cprintf("Press.2.to Exit");
gotoxy(3,17);
cprintf("%s Please Enter your Choice",name);
scanf("%d",&i);
if (i==1)
{
clrscr();
goto menu;
}
else
{
clrscr();
goto exit;
}

getch();

exit(0);



help:
clrscr();
//textbackground(4);
printf("\n\tHELLO %s PLESE CONTACT YOUR ADMINISTRATION FOR HELP\n\n",name);
delay(1000);
printf(" \n TIHS IS A SIMPLE QUIZ GAME \n");
delay(670);
cprintf("\n ACCORDING TO THE PROGRAMMER IF YOU WANT ANY HELP FROM THE PROGRAMMER.\n\n");
delay(3000);
printf("\n\t\t\t 'I AM TOO BUSY',SORRY %s\n\n\n\n",name);
delay(650);
cprintf("PLESE PERSS ANY KEY TO RETURN TO THE MAIN MENU...");
getch();
clrscr();
goto menu;


exit:
clrscr();
gotoxy(25,9);
    textcolor(14);
     cprintf("EXITING NOW...");
    delay(500);
    gotoxy(25,11);
    textcolor(14);
    cprintf("%s THANK YOU FOR USING THIS CALCULATOR.",name);
    gotoxy(33,13);
    delay(700);
    cprintf("HOPE YOU LIKE IT :)");
    gotoxy(33,17);
    delay(1000);
    textcolor(7);
    cprintf("HAVE A NICE DAY %s",name);

    getch();
    exit(1);
}
}


