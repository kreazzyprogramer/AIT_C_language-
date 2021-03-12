#include<iostream>
using namespace std;
main()
{
	int i,j,a;
	for(i=0;i<=5;i++)
	{
		for(a=5;a<=1;a++)
	{
		cout<<endl;
	for(a=5;a>i;a--)
	{
		cout<<" ";
	}
		for(j=0;j<=i;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
}
