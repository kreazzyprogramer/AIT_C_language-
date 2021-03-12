#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  struct airline
       {
	      int ticket;

	      char f_name[25],m_name[25],l_name[25];
	      char passport[25],cnic[25],contect[25],email[25];

	      float fare;
       };

       void air(void)
       {      clrscr();
	      FILE *fp;
	      char ch;
	      struct airline air;

	      fp = fopen("c:\\waqar.txt","a");            //Statement   1

	      if(fp == NULL)
	      {
		     printf("\nCan't open file or file doesn't exist.");
		     exit(0);
	      }

	      do
	      {
	      fflush(stdin);
	      printf("\nEnter Roll : ");
	      scanf("%d",&air.ticket);
	      fflush(stdin);
	      printf("ENTER FIRST NAME : ");
	      gets(air.f_name);

	      fflush(stdin);
	      printf("ENTER MIDDLE NAME :* ");
	      gets(air.m_name);

	      fflush(stdin);
	      printf("ENTER LAST NAME : ");
	      gets(air.l_name);


	      fflush(stdin);
	      printf("ENTER CNIC NUMBER : ");
	      gets(air.cnic );

	      fflush(stdin);
	      printf("ENTER PASSPORT NUMBER : ");
	      gets(air.passport);

	      fflush(stdin);
	      printf("ENTER CONTECT NUMBER : ");
	      gets(air.contect);

	      fflush(stdin);
	      printf("Enter FARE : ");
	      scanf("%f",&air.fare);

	      fwrite(&air,sizeof(air),1,fp);

   printf("\nDo you want to add another data (y/n) : ");
      ch = getche();
      }
      while(ch=='y' || ch=='Y');

      printf("\nData written successfully...");
      fclose(fp);

       //====================================================

  clrscr();

  fp = fopen("c:\\waqar.txt","r");            //Statement   1

  if(fp == NULL)
     {
 printf("\nCan't open file or file doesn't exist.");
 exit(0);
     }

 printf("\nI.D\t NAME\t\t\tPASSPORT NO.\tCINC\tCONTECT\tFAIR\n");

 while(fread(&air,sizeof(air),1,fp))
 printf("\n%d\t%s\t\t%s\t\t%s\t\tkk\t\t%.2f",air.ticket,air.f_name,air.m_name,air.l_name,air.passport,air.cnic,air.contect,air.fare);
 getch();

 fclose(fp);
 }

