//include library
#include<iostream>
using namespace std;
//write function sumnum to take two int arguments and add them together
int sumnum(int a, int b)
{
	int sum=a+b;
	return sum;
}
//define function maxnum with two int arguments
int maxnum(int a, int b)
{
	int x;
	//take the two int values and find out their maximum
	if(a>=b)
	x=a;
	else
	x=b;
	//return their maximum
	return x;
}
//define function minnum with two int arguments
int minnum(int a, int b)
{
	int x;
	//take the two int values and find out their minimum
	if(a<=b)
	x=a;
	else
	x=b;
	//return their minimum
	return x;
}
//write the main function
int main()
{
	//declare two int variables and ask for the input of these two variables' values
	int a,b;
	cout<<"Enter two integer values - "<<endl;
	cin>>a>>b;
	//declare an int variable ch and ask user to input an int value depending upon what function he/she wants to execute
	int ch;
	cout<<"Make your choice:"<<endl<<"1. Find the sum (1)"<<endl<<"2. Find the maximum (2)"<<endl<<"3. Find the minimum (3)"<<endl<<"Input ur choice - ";
	cin>>ch;
//use switch case for int variable ch
	switch(ch)
	{
		//for case ch=1, call the sum function and display the result
		case 1:cout<<"SUM - "<<sumnum(a,b);
		       break;
		//for case ch=2, call the max function and display the result
		case 2:cout<<"MAXIMUM - "<<maxnum(a,b);
		       break;
		//for case ch=3, call the min function and display the result
		case 3:cout<<"MINIMUM - "<<minnum(a,b);
		       break;
		//for an invalid input (default case), display an error message
		default:cout<<"ERROR - Invalid Input";
	}
	//Adios
	return 0;
}
