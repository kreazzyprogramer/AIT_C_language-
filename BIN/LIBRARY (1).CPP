 /*A library developing program*/
 #include <conio.h>
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #define N 5

 typedef struct {	/*Typedef structure declaration*/
    int b_no;
    char b_title[50];
    char b_author[50];
    int b_price;
  } library;

 int add_book(library add[N]);/*Several functions declarations*/
 void display_book(library dis[N]);
 void edit_book(library edit[N]);
 int remove_book(library remove[N],int);
 void display_title(library title[N], int booksnum);
 void books_count(int booksnum);
 void display_ascend(library dis[N],int booksnum);

/*Add function starting*/
 int add_book(library add[])
 {
     system("cls");
     int i=0, no=0;
     char temp[100];

     printf("You can enter a maximum of 5 boooks!\n");
     printf("How many books you'd like to enter?");
     scanf("%d", &no);
     fflush(stdin);

     for(i = 0; i < no; i++)
     {
	   printf("\n");
	   printf("Add book number....");
	   gets(temp);
	   add[i].b_no = atoi(temp);
	   fflush(stdin);

	   printf("Add book title....");
	   gets(add[i].b_title);
	   fflush(stdin);

	   printf("Add Author's Name....");
	   gets(add[i].b_author);
	   fflush(stdin);

	   printf("Add book price....");
	   gets(temp);
	   add[i].b_price = atoi(temp);
	   fflush(stdin);
      }

     system("cls");

     for(i = 0; i < no; i++)
     {
	   printf("\n\n");

	   printf("Book number....");
	   printf("%d", add[i].b_no);
	   printf("\n");

	   printf("Book title....");
	   puts(add[i].b_title);


	   printf("Book Author....");
	   puts(add[i].b_author);


	   printf("Book Price....");
	   printf("%d", add[i].b_price);
     }

     printf("\n");
     printf("Book(s) added Successfully!");
     printf("\nPress Anykey to continue");
     getch();
     return no;

}
/*Add function ended*/

/*Display function starting*/
void display_book(library dis[])
{
     system("cls");

     int i=0, compare=0, j=0;
     char temp_title[50];
     printf("Please Enter the title of the book you'd want to search: ");
     gets(temp_title);
     for(i = 0; i < N; i++)
     {
	   compare = strcmp(dis[i].b_title, temp_title);
	   if(compare == 0)
	   {
		      j++;
		      printf("Book Found!\n\n");
		      printf("Book number....%d", dis[i].b_no);
		      printf("\n");

		      printf("\nBook title....");
		      puts(dis[i].b_title);

		      printf("\nAuthor's Name....");
		      puts(dis[i].b_author);

		      printf("\nBook price....%d", dis[i].b_price);
		      break;
	   }
     }

     if(j == 0)
     {
	  printf("Sorry no book found in record...");
     }
     printf("\nPress Anykey to continue");
     getch();

}
/*Display function starting*/

/*Edit function starting*/
 void edit_book(library edit[N])
 {
     system("cls");

     int i = 0, compare = 0, j = 0;
     char temp_title[50];
     char temp[100];

     printf("Please Enter the title of the book you want to edit: ");
     gets(temp_title);

     for(i = 0; i < N; i++)
     {
	   compare = strcmp(edit[i].b_title, temp_title);
	   if(compare == 0)
	   {
		      /*Editting Starting*/
		      j++;
		      printf("Book Found!\n\n");
		      printf("Book number....%d", edit[i].b_no);
		      printf("\n");

		      printf("\nBook title....");
		      puts(edit[i].b_title);

		      printf("\nAuthor's Name....");
		      puts(edit[i].b_author);

		      printf("\nBook price....%d", edit[i].b_price);
		      printf("\n\n");

		      printf("Add New book title....");
		      gets(edit[i].b_title);
		      fflush(stdin);

		      printf("Add New Author's Name....");
		      gets(edit[i].b_author);
		      fflush(stdin);

		      printf("Add New book price....");
		      gets(temp);
		      edit[i].b_price = atoi(temp);
		      fflush(stdin);

	   /*Editting Finished, Printing edited book starting*/
		      printf("\n");
		      printf("New Book number....%d", edit[i].b_no);
		      printf("\n");

		      printf("\nNewBook title....");
		      puts(edit[i].b_title);

		      printf("\nNew Author's Name....");
		      puts(edit[i].b_author);

		      printf("\nNew Book price....%d", edit[i].b_price);
		      printf("\n\n");

		      printf("Book edited successfully!");
		      break;
	   }
     }


     if(j == 0)
     {
	  printf("Sorry no book found in record...");
     }

     printf("\nPress Anykey to continue");
     getch();

}
/*Edit function ended*/

/*Remove function starting*/
int remove_book(library remove[N], int booksnum)
{
     system("cls");
     int i = 0, compare = 0, j = 0;
     char temp_title[50];
     char removal;
     if(booksnum == 0)
	{
	 printf("No books in the library...");
    }

    else
    {
     printf("Please Enter the title of the book you want to remove: ");
     gets(temp_title);

     for(i = 0; i < N; i++)
    {
	   compare = strcmp(remove[i].b_title, temp_title);
	   if(compare == 0)
	    {
		      /*Editting Starting*/
		      j = i;
		      printf("Book Found!\n\n");
		      printf("Book number....%d", remove[i].b_no);
		      printf("\n");

		      printf("\nBook title....");
		      puts(remove[i].b_title);

		      printf("\nAuthor's Name....");
		      puts(remove[i].b_author);

		      printf("\nBook price....%d", remove[i].b_price);
		      printf("\n\n");

		      printf("Are you sure you want to remove selected book?(Y/N)");
		      scanf("%c", &removal);
		      fflush(stdin);

					  break;
	    }
	}
		   if(removal == 'Y')
		    {
				for(i = j; i < N; i++)
				{
					if(i != N-1)
					{
						remove[i] = remove[i+1];
					}
					else
					{
						booksnum--;
						break;
					}
				}
				printf("Book removed succesfully!");
			}
			else
			{
				printf("Book Not removed");
			}
	}
			printf("\nPress Anykey to continue");

			getch();
		    return booksnum;
}
/*Remove function ended*/

/*Title displaying function starting*/
void display_title(library title[N], int booksnum)
{
	system("cls");
	int i=0;

	if(booksnum == 0)
	{
	 printf("No books in the library...");
	 }

    else
    {

	printf("Book(s) titles are: ");

	for(i = 0; i < booksnum; i++)
	    {
		      printf("Book %d title is:", i);
	      puts(title[i].b_title);
	      printf("\n");
	}

    }
	printf("\nPress Anykey to continue");
	getch();
}
/*Title Displaying function ended*/

/*Total book function starting*/
void books_count(int booksnum)
{
	system("cls");
	printf("Database has %d, books....", booksnum);
	printf("\nPress Anykey to continue");

	getch();
}
/*Total book function ended*/

/*Ascendingly displaying function starting*/
 void display_ascend(library ascend[N], int booksnum)
 {
	system("cls");
	int i=0;
	library temp1;

	if(booksnum == 0)
	{
	 printf("No books in the library...");
	 }

    else
    {

	for(i = 0; i < booksnum; i++)
	{
		if(ascend[i].b_no > ascend[i+1].b_no)
		{
			temp1 = ascend[i];
			ascend[i] = ascend[i+1];
			ascend[i+1] = temp1;
		}
	}

	printf("Boooks in ascending order are....");
	printf("\n");


	for(i = 0; i < booksnum; i++)
    {
	printf("\n");
	printf("Book number....");
	printf("%d", ascend[i].b_no);
	printf("\n");

	printf("Book title....");
	puts(ascend[i].b_title);


	printf("Book Author....");
	puts(ascend[i].b_author);


	printf("Book Price....");
	printf("%d", ascend[i].b_price);
    }
    }

    printf("\nPress Anykey to continue");
    getch();

 }
/*Ascendingly displaying function ended*/

 //int main()
 void main(void)
 {
    int booksnum = 0, choice = 0;
    library books[N];

	do
    {
		system("cls");
	printf("		****WELCOME TO MYCFILE LIBRARY DATABASE****\n\n");
		printf("1. Add book information\n");
		printf("2. Display book information\n");
		printf("3. Edit book information\n");
		printf("4. Remove book information\n");
		printf("5. Display all books\n");
		printf("6. Display number of books\n");
		printf("7. List the books in ascending order of book number\n");
		printf("8. Exit\n\n");
		printf("What would you like to do.....?");
		scanf("%d", &choice);
		fflush(stdin);

		switch(choice)
		{
			case 1: booksnum = add_book(books); /*Add function call*/
			break;

			case 2:	display_book(books); /*Displaying function call*/
			break;

			case 3:	edit_book(books); /*Editting books function call*/
			break;

			case 4:	booksnum = remove_book(books, booksnum); /*Removing book function call*/
			break;

			case 5:	display_title(books, booksnum); /*Title displaying function call*/
			break;

			case 6: books_count(booksnum); /*Total book counting function call*/
			break;

			case 7: display_ascend(books, booksnum);	/*Ascendingly displaying function call*/
			break;

			case 8: break;

			default:
			printf("Sorry you entered an invalid choice....");
			printf("\nPlease try again..");
		}
	}while(choice != 8);

	printf("Program will exit now......... Allah Hafiz!");
    printf("\nPress Anykey to exit....");
    getch();
	//return 0;
}
