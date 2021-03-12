#include<iostream>

using namespace std;
main()

{
	int a;
	
	
	cout<<"\t\t\t\tTO CALCULATE THE GRADS\n";	//top heading in center.
	
	cout<<"\t\t\t\t\t TO EXIT PROGRAM PRESS '000' \n";  //exit option.
	cout<<"\t\t\t\t\t ************************** ";  //exit option underline.
	cout<<"\n\n\t\t\tPLEASE ENTER THE PERCENTAGE: ";  //asking for input.
	
	cin>>a;		//geting input.
	
	//IF AND ELSE IF  conditions starting.
	
	if(a==000)		//exit command
	exit (0);

	else if(a>=80)
	cout<<"\t\t\t\tyour grade is A+";
	
	else if(a>=70)
	cout<<"\t\t\t\tyour garade is A";
	
	else if(a>=60)
	cout<<"\t\t\t\tyour garade is B";
	
	else if(a>=50)
	cout<<"\t\t\t\tyour garade is C";
	
	else if(a>=40)
	cout<<"\t\t\t\tyour garade is d";
	
	else if(a<=30)
	cout<<"\t\t\t\tyour grade is F";
		}
