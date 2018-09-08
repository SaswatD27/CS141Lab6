//include library
#include<iostream>
using namespace std;
//write function sumnum to take two int arguments and add them together
int sumnum(int a, int b)
{
	int sum=a+b;
	return sum;
}
//write main function
int main()
{
	//declare two int variables
	int a,b;
	//input the values of the variables
	cout<<"Enter the values of the two numbers - ";
	cin>>a>>b;
	//call the function with the numbers as arguments and print the sum obtained
	cout<<"The sum is "<<sumnum(a,b);
	//Arrivederci
	return 0;
}

