//include library
#include<iostream>
using namespace std;
//define a function askuser to obtain input for unitCst, units and taxRt (all passed by reference)
void askuser(float &unitCst,float &units, float &taxRt)
{
	cout<<"Enter Unit Cost - ";
	cin>>unitCst;
	cout<<"Enter the no. of units - ";
	cin>>units;
	cout<<"Enter the Tax Rate (absolute value, not percentage) - ";
	cin>>taxRt;
}
//define a function processdat to take the values of unitCst, units,taxRt and calculate and determine the values of (the called by reference) variables salesTx and totDue
void processdat(float unitCst, float units, float taxRt, float &salesTx, float &totDue)
{
	salesTx=units*unitCst*taxRt;
	totDue=salesTx+(units*unitCst);
}
//define a function displaydat to receive the unitCst, units, taxRt, salesTx and totDue values and output them
void displaydat(float unitCst, float units, float taxRt,float salesTx,float totDue)
{
	cout<<"BILL"<<endl<<"Unit Cost = Rs. "<<unitCst<<endl<<"No. of Units = "<<units<<endl<<"Tax Rate = "<<taxRt<<endl<<"Sales Tax Amount = "<<salesTx<<endl<<"Total Due = "<<totDue<<endl<<"Thank You";
}
//write the main function
int main()
{
	//declare float variables unitCst, unitsPurch, taxRate, salesTax and totalDue to store the eponymous values
	float unitCst, unitsPurch,taxRate,salesTax,totalDue;
	//call the askuser function
	askuser(unitCst,unitsPurch,taxRate);
	//call the processdat function
	processdat(unitCst,unitsPurch,taxRate,salesTax,totalDue);
	//call the displaydat function
	displaydat(unitCst,unitsPurch,taxRate,salesTax,totalDue);
	//Adios
	return 0;
}
