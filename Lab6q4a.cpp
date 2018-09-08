//include library
#include<iostream>
using namespace std;
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
	//declare two int variables and input their values
	int a,b;
	cout<<"Input two integer values - ";
	cin>>a>>b;
	//call the function with the two int values as arguments and print the returned value as the minimum
	cout<<"The minimum is - "<<minnum(a,b);
	//Adios
	return 0;
}
