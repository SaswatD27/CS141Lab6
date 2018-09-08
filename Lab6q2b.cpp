//include library
#include<iostream>
using namespace std;
//declare a void function sumnum with three int arguments, with the third one being passed by reference
void sumnum(int a,int b,int &c)
{
	//add the values of the first two arguments and store it in the third
	c=a+b;
}
//write the main function
int main()
{
	//declare three int variables
	int a,b,c;
	//ask for input in two of these variables
	cout<<"Input two int values - ";
	cin>>a>>b;
	//call the function with the three declared int variables as arguments
	sumnum(a,b,c);
	//print the third (passed by reference) int variable's value as the sum
	cout<<"The sum is - "<<c;
	//...I say,"Adieu!"
	return 0;
}
