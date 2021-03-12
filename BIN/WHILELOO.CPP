
   #include<conio.h>
   #include<stdio.h>
   #include<stdlib.h>
   #include<math.h>
   #include<dos.h>

   void main (void)

     {

     clrscr();
     int t;
     char name[21];
     clrscr();
     printf("eter name....:");
     gets(name);

     t=1;
     while(t<=15)
     {
    gotoxy(20,9);
    textcolor(RED);
    cprintf("%s you have %d sec remaning",name,t);
    sleep(1);
    t++;
     if (t>=10)
    {
    clrscr();
    printf("%s hurry",name);
    }
    if(t>=15)
    {
    clrscr();
    printf("%s time up",name);
    }


    }

    getch();
    }