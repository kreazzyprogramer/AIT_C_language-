/*
Name:
Copyright: Deitel C How to Program
Author: StackOverflow1453
Date: 5/8/2013 9:00:08 AM
Description:

(Airline Reservations System) A small airline has just purchased a computer for its new automated reservations system. The
president has asked you to program the new system. You are to write a program to assign seats on each flight of the airline's only
plane (capacity: 10 seats). Your program should display the following menu of alternatives:

Please type 1 for "first class"
Please type 2 for "economy"

If the person types 1, then your program should assign a seat in the first class section (seats 1-5).
If the person types 2, then your program should assign a seat in the economy section (seats 6-10).
Your program should then print a boarding pass indicating the person's seat number and whether it is in the first class or economy section of the plane.
Use a single-subscripted array to represent the seating chart of the plane.
Initialize all the elements of the array to 0 to indicate that all seats are empty.
As each seat is assigned, set the corresponding elements of the array to 1 to indicate that the seat is no
longer available. Your program should, of course, never assign a seat that has already been assigned.
When the first class section is full, your program should ask the person if it is acceptable to be placed in the economy section (and vice versa).
If yes, then make the appropriate  seat assignment. If no, then print the message "Next flight leaves in 3 hours."
*/

#include <stdio.h>
#include <coino.h>
int findFreeLocationFirstClass(int b[]);
int findFreeLocationEconomyClass(int b[]);
int isEmptyFirstClass(int b[]);
int isEmptyEconomyClass(int b[]);
void printBoardingPass(int seatNumber);
int arrangeAndPrintFirstClass(int b[],int counter);
int arrangeAndPrintEconomyClass(int b[],int counter);

int main(void) {

	int choice=0;
	int seats[11]={0};
	static int countFirstClass=0;
	static int countEconomyClass=0;
	int emptyEconomyClassLocation=0;
	int emptyFirstClassLocation=0;
	int freePlace=0;
	char charChoice=8;

	while (choice!=-1)
	{
		printf("Please type 1 for first class(-1 to exit)(%d First Class Available) :",5-countFirstClass);
		printf("\nPlease type 2 for economy class(-1 to exit)(%d Economy Class Available) :",5-countEconomyClass);
		scanf("%d",&choice);

		if (choice==1 && isEmptyFirstClass(seats))  { //ok
			countFirstClass=arrangeAndPrintFirstClass(seats,countFirstClass);


		}
		else if (choice==2 &&  isEmptyEconomyClass(seats)) //ok
		{	
			countEconomyClass=arrangeAndPrintEconomyClass(seats,countEconomyClass);

		}
		else {

			printf("\nNext flight leaves in 3 hours.\n\n");
			if(choice==1 && (5-countEconomyClass)>0 ){

				printf("\or You can choose Economy Class if you want.\nWe have empty places in there. (y or n) : "); 
				scanf(" %c",&charChoice);		//You have to clean the buffer by putting one space before format specifier
				if (charChoice=='y')
				{  
					countEconomyClass=arrangeAndPrintEconomyClass(seats,countEconomyClass);



				}

				else printf("Good Bye");

			}
			else if (choice==2 && (5-countFirstClass)>0 ) {

				printf("\nr You can choose First Class if you want.\nWe have empty places in there. (y or n) : ");
				scanf(" %c",&charChoice);

				if (charChoice=='y')
				{
					countFirstClass=arrangeAndPrintFirstClass(seats,countFirstClass);


				}

				else printf("Good Bye");
			}

			else {
				printf("\nNext flight leaves in 3 hours.\n\n");
			}

			getch();
			return 0;
		}
	}

}
int findFreeLocationFirstClass(int b[]){

	int i;
	for (i = 1; i <=5 ; i++)
	{
		if(b[i]==0)
			return i;

	}
	printf("\nNo place left in First Class\n");
	getch();
	exit(1);
}

int findFreeLocationEconomyClass(int b[]){

	int i;
	for (i = 6; i <=10 ; i++)
	{
		if(b[i]==0)
			return i;

	}
	printf("\nNo place left in Economy Class");
	getch();
	exit(1);
}

int isEmptyFirstClass(int b[]){

	int i;
	for (i = 1; i <=5 ; i++)
	{
		if(b[i]==0)
			return 1;

	}
	return 0;
}

int isEmptyEconomyClass(int b[]){

	int i;
	for (i = 6; i <=10 ; i++)
	{
		if(b[i]==0)
			return 1;

	}
	return 0;
}

void printBoardingPass(int seatNumber){

	printf("Seat Number %d is reserved for you.\nHave a nice and safe flight.\n\n",seatNumber);

}

int arrangeAndPrintFirstClass(int b[],int counter){

	int freePlace=0;
	int countFirstClass=counter;
	freePlace=findFreeLocationFirstClass(b);
	b[freePlace]=1;
	printBoardingPass(freePlace); 
	countFirstClass++;
	return countFirstClass;

}

int arrangeAndPrintEconomyClass(int b[],int counter){

	int freePlace=0;
	int countEconomyClass=counter;
	freePlace=findFreeLocationEconomyClass(b);
	b[freePlace]=1;
	printBoardingPass(freePlace);
	countEconomyClass++;
	return countEconomyClass;

}
