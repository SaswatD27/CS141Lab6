//include library
#include<iostream>
using namespace std;
//define a void function which takes three arguments the third is passed by reference, finds out the maximum of the first two no.s, and assigns that max value to the third (passed by reference) variable
void maxn(int a, int b, int &c)
{
	if(a>=b)
	c=a;
	else
	c=b;
}
//write the main function
int main()
{
	//declare three int variables
	int a,b,c;
	//input values in the first two int variables
	cout<<"Enter two int values - ";
	cin>>a>>b;
	//call the function with the three int variables as arguments (in order)
	maxn(a,b,c);
	//print the value of the third variable as the maximum
	cout<<"Maximum - "<<c;
	//That's all folks!
	return 0;
}
