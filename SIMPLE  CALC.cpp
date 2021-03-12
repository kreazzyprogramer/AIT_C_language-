#include<iostream>
#include <stdlib.h>
#include<conio.h> 
using namespace std;

int main()
{
	top:
	system("cls");	
	int a,n1,n2;
	
	cout<<"\t\t\t\tSIMPLE CALCULATOR\n\n\n";
	cout<<"\n\n	PRESS 1) FOR ADDITION      [+]";
	cout<<"\n\n	PRESS 2) FOR SUBTRACTION   [-]";
	cout<<"\n\n	PRESS 3) FOR DIVISION	   [/]";
	cout<<"\n\n	PRESS 4) FOR MULTIPLICTION [*]";
	
	cout<<"\n\n\n\nPLESE ENTER YOUR DESIRE NUMBER : ";
	cin>>a;
	
	if (a==1)
	{
	
	cout<<"\n\nPROVIDE FIRST NUMBER FOR ADDITION   : ";
	cin>>n1;
	
	cout<<"\n\nPROVIDE SECOUND NUMBER FOR ADDITION : ";
	cin>>n2;
	
	cout<<"\n\nYOUR ANSWER FOR ADDITION IS = "<<n1+n2;
	getch();
	goto top;
	}
	
	else if(a==2)
	{
	
	cout<<"\n\nPROVIDE FIRST NUMBER FOR SUBTRACTION   : ";
	cin>>n1;
	
	cout<<"\n\nPROVIDE SECOUND NUMBER FOR SUBTRACTION : ";
	cin>>n2;
	
	cout<<"\n\nYOUR ANSWER FOR SUBTRACTION IS = "<<n1-n2;
	getch();
	goto top;
	}
	
	else if(a==3)
	{
	
	cout<<"\n\nPROVIDE FIRST NUMBER FOR DIVISION   : ";
	cin>>n1;
	
	cout<<"\n\nPROVIDE SECOUND NUMBER FOR DIVISION : ";
	cin>>n2;
	
	cout<<"\n\nYOUR ANSWER FOR DIVISION IS = "<<n1/n2;
	getch();
	goto top;
	}
	
	else if(a==4)
	{
	
	cout<<"\n\nPROVIDE FIRST NUMBER FOR MULTIPLICTION   : ";
	cin>>n1;
	
	cout<<"\n\nPROVIDE SECOUND NUMBER FOR MULTIPLICTION : ";
	cin>>n2;
	
	cout<<"\n\nYOUR ANSWER FOR MULTIPLITION IS = "<<n1*n2;
	getch();
	goto top;
	}
	
	
	else 
	{
	
	system("cls");
	cout<<"YOU HAVE ENTERED WRONG NUMBER";
}
}
