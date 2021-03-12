  #include<stdio.h>
  #include<conio.h>
  void main (void)
  {
  clrscr();

  int r, c,n;
  int num[2][2];
  float sum,avg,per,t;
  char n1[20];
  char n2[30];
  char n3[20];
  //char r;
  n1:
  printf("please enter your name : ");
  gets(n1);
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {
  printf("%s please enter marks obtain: ",n1);
  scanf("%d",&num[r][c]);
  }
  }
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {

  //printf("%s your marks total is:  %d\t\n",name,num[r][c]);
  sum=sum+num[r][c];
  }
  }
  printf("total marks of all subject?? \n");
  scanf("%f",&t);

  printf("\n\ndo you want to entre another record?? ");
  scanf("%d",&n);
  if (n==1)
  {
  goto n2;
  }
  else
  {
  goto calc;
  }

  n2:

  clrscr();
  printf("please enter your name : ");
  gets(n2);
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {
  printf("%s please enter marks obtain: ",n2);
  scanf("%d",&num[r][c]);
  }
  }
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {

  //printf("%s your marks total is:  %d\t\n",name2,num[r][c]);
  sum=sum+num[r][c];
  }
  }
  printf("total marks of all subject?? ");
  scanf("%f",&t);
	  /*
  printf("do you want to entre another record?? ");
  scanf("%d",&r);
  if (n==1)
  {
  goto name3;
  }
  else
  {
  goto calc;
  }



  name3:
  clrscr();
  printf("please enter your name : ");
  gets(name3);
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {
  printf("%s please enter marks obtain: ",name3);
  scanf("%d",&num[r][c]);
  }
  }
  for (r=0;r<2;r++)
  {
  for(c=0;c<2;c++)
  {

  //printf("%s your marks total is:  %d\t\n",name,num[r][c]);
  sum=sum+num[r][c];
  }
  }
  printf("total marks of all subject?? ");
  scanf("%f",&t);
	    */

  printf("viwe result of ?? ");
  scanf("%d",&r);
  if (r=='n1')
  {
  goto calc1;
  }
  else if(r=='n2')
  {
  goto calc2;
  }

  calc1:
  clrscr();
  avg=sum/4;
  per=sum*100/t;

  printf("\nsum is: %.2f\n",sum);
  printf("avg is :%.2f\n",avg);
  printf("per is : %.2f\n",per);
  if (per>80)
  {
  printf(" your grade is 'A+'");
  }
  else if(per>70&&per<=80)
  {
  printf(" your grade is 'A'");
  }
  else if(per>60&&per<=70)
  {
  printf(" your grade is 'B'");
  }
  else if(per>50&&per<=60)
  {
  printf("your grade is 'C'");
  }
  else
  {
  printf("fail");
  }


  calc2:
  clrscr();
  avg=sum/4;
  per=sum*100/t;

  printf("\nsum is: %.2f\n",sum);
  printf("avg is :%.2f\n",avg);
  printf("per is : %.2f\n",per);
  if (per>80)
  {
  printf(" your grade is 'A+'");
  }
  else if(per>70&&per<=80)
  {
  printf(" your grade is 'A'");
  }
  else if(per>60&&per<=70)
  {
  printf(" your grade is 'B'");
  }
  else if(per>50&&per<=60)
  {
  printf("your grade is 'C'");
  }
  else
  {
  printf("fail");
  }




  getch();
  }








