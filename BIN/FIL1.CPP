
  #include <conio.h>
  #include <stdio.h>
  #include <stdlib.h>


  int main()
  {
   clrscr();
   int n;
   FILE *fptr;
   fptr=fopen("C:\\program.txt","w");
   if(fptr==NULL){
      printf("Error!");
      exit(1);
   }
   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);
   //fclose(fptr);
   clrscr();


   //fptr=fopen("C:\\program.txt","r");
   if ((fptr=fopen("C:\\program.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         /* Program exits if file pointer returns NULL. */

   }
   fscanf(fptr,"%d",&n);
   printf("Value of n=%d",n);
   getch();
   fclose(fptr);
    return 0;

    }
