
   #include<conio.h>
   #include<stdio.h>
   #include<stdlib.h>
   #include<math.h>
   #include<dos.h>


    /*MCQS Multiple Choice Question
     And Answers Program*/

     void main (void)

     {

     clrscr();
     int r=0,i,w=0;
     char right=NULL;

     clrscr();

     i=1;
     while(i<=10)

     {

    gotoxy(20,9);
    textcolor(RED);
    textbackground(2);
    printf("Just wait program is Loading %d",i);

    sleep(1);

    i++;
    clrscr();

	   }

    gotoxy(10,2);
    printf("Muliple Choice Questions");
    gotoxy(10,4);
    printf("------------------------");
    gotoxy(10,6);
    printf("Q1.C Language has been developed by ");
    gotoxy(10,8);
    printf("a.Ken Thompson");
    gotoxy(10,10);
    printf("b.Dennis Ritchie");
    gotoxy(10,12);
    printf("c.Peter Norton");
    gotoxy(10,14);
    printf("d.Steve Jobs");

    gotoxy(10,16);
    printf("Press The Key ('a/A' , 'b/B','c/C','d/D') to make the right choice:");
    right=getch();

    if(right=='b' || right=='B')

       {
     gotoxy(10,18);
     printf("Correct Answer");
     r++;

	}

	else

	 {

	gotoxy(10,20);
	printf("Wrong answer");
	w++;

	 }

       gotoxy(10,22);
       printf("Press any character to proceed the next question");
       getchar();
       clrscr();

       gotoxy(10,2);
       printf("Muliple Choice Questions");
       gotoxy(10,4);
       printf("------------------------");
       gotoxy(10,6);
       printf("Q2.Which of the following is a string constant");
       gotoxy(10,8);
       printf("a.\"A\"");
       gotoxy(10,10);
       printf("b.\'a\'");
       gotoxy(10,12);
       printf("c.abc");
       gotoxy(10,14);
       printf("d.None of the above");

       gotoxy(10,16);
       printf("Press The Key ('a' OR 'b' OR 'c' OR 'd') to make the right choice:");
       right=getchar();


       if(right=='a' || right=='A')

       {
       gotoxy(10,18);
       printf("Correct Answer");
       r++;

	}

       else

	{
       gotoxy(10,20);
       printf("Wrong answer");
	     w++;

	     }


       gotoxy(10,22);
       printf("Press any character to proceed the next question");
       getch();
       clrscr();

       gotoxy(10,2);
       printf("Muliple Choice Questions");
       gotoxy(10,4);
       printf("------------------------");
       gotoxy(10,6);
       printf("Q3.The statements char ch='z' would store in ch");
       gotoxy(10,8);
       printf("a.The character z");
       gotoxy(10,10);
       printf("b.ASCII alue of z");
       gotoxy(10,12);
       printf("c.Z along with the single inverted commas");
       gotoxy(10,14);
       printf("d.All the above");

       gotoxy(10,16);
       printf("Press The Key ('a' OR 'b' OR 'c' OR 'd') to make the right choice:");
       right=getche();


       if(right=='b' || right=='B')

       {

       gotoxy(10,18);
       printf("Correct Answer");
       r++;

	}

       else

	{

       gotoxy(10,20);
       printf("Wrong answer");
       w++;

	     }

       gotoxy(10,22);
       printf("Press any character to proceed the next question");
       getch();
       clrscr();

       gotoxy(10,2);
       printf("Muliple Choice Questions");
       gotoxy(10,4);
       printf("------------------------");
       gotoxy(10,6);
       printf("Q4.A relational operator is used to");
       gotoxy(10,8);
       printf("a.combine Values");
       gotoxy(10,10);
       printf("b.Compare Values");
       gotoxy(10,12);
       printf("c.Distinguage different types of Variables");
       gotoxy(10,14);
       printf("d.Change variables to local values");
       gotoxy(10,16);
       printf("Press The Key ('a' OR 'b' OR 'c' OR 'd') to make the right choice:");
       right=getch();


       if(right=='b' || right=='B')

       {

       gotoxy(10,18);
       printf("Correct Answer");
       r++;

	}

       else

	{

       gotoxy(10,20);
       printf("Wrong answer");
	     w++;

	     }

	gotoxy(10,23);
	printf("Total Right Answers= %d",r);
	gotoxy(10,24);
	printf("Total Wrong Answers= %d",w);
	getch();

	 }





