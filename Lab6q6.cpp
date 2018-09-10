//include libraries
#include<iostream>
#include<math.h>
using namespace std;
//define a function sumEvenNumbers() to take two numbers (firstNum and secondNum) and adds all the even numbers between the two inputted numbers and display the result using a loop and call by value
int sumEvenNumbers(int firstNum, int secondNum)
{
	int sum=0;
	for(int i=firstNum+1;i<secondNum;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	cout<<endl<<"The sum of even numbers between "<<firstNum<<" and "<<secondNum<<" = "<<sum;
	return sum;
}			
//define a function sumOddNumbers() to take two numbers (firstNum and secondNum) and adds all the odd numbers between the two inputted numbers and display the result using a loop and call by value
int sumOddNumbers(int firstNum, int secondNum)
{
	int sum=0;
	for(int i=firstNum+1;i<secondNum;i++)
	{
		if(i%2==1)
		{
			sum+=i;
		}
	}
	cout<<endl<<"The sum of odd numbers between "<<firstNum<<" and "<<secondNum<<" = "<<sum;
	return sum;
}	
//define a function sumSquareOddNumbers() to take two numbers (firstNum and secondNum) and add the squares of the odd numbers between the two inputted numbers using a while loop and call by value
int sumSquareOddNumbers(int firstNum, int secondNum)
{
	int sum=0;
	for(int i=firstNum+1;i<secondNum;i++)
	{
		if(i%2==1)
		{
			sum+=pow(i,2);
		}
	}
	cout<<endl<<"The sum of squares of the odd numbers between "<<firstNum<<" and "<<secondNum<<" = "<<sum;
	return sum;
}	
//define a function sumSquareEvenNumbers() to take two numbers (firstNum and secondNum) and add the squares of the even numbers between the two inputted numbers using a while loop and call by value
int sumSquareEvenNumbers(int firstNum, int secondNum)
{
	int sum=0;
	for(int i=firstNum+1;i<secondNum;i++)
	{
		if(i%2==0)
		{
			sum+=pow(i,2);
		}
	}
	cout<<endl<<"The sum of the squares of the even numbers between "<<firstNum<<" and "<<secondNum<<" = "<<sum;
	return sum;
}	
//write the main function
int main()
{
	//declare int variable sumEven to holf the returned value of sumEvenNumbers()
	//declare int variable sumOdd to hold the returned value of sumOddNumbers()
	//declare int variable sumSquareEven to hold the returned value of sumSquareEvenNumbers()
	//declare int variable sumSquareOdd to hold the returned value of sumSquareOddNumbers()
	int sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	//declare two int variables (firstNum and secondNum) to take inputs and ask for input of their values
	int firstNum,secondNum;
	cout<<"Enter the first (lesser) number - ";
	cin>>firstNum;
	cout<<"Enter the second (greater) number - ";
	cin>>secondNum;
	//call all the functions using the two inputted values one by one
	sumEven=sumEvenNumbers(firstNum,secondNum);
	sumOdd=sumOddNumbers(firstNum,secondNum);
	sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
	sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);
	//Auf wiedersehen
	return 0;
}

