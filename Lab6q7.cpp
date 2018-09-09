//include library
#include<iostream>
using namespace std;
//define a function toUpper() that takes a char variable inputChar as argument (passed by value)
char toUpper(char inputChar)
{
	//subtract 32 from the ASCII value of inputChar's character value
	inputChar-=32;
	//return inputChar
	return inputChar;
}
//define a function toLower() that takes a char variable inputChar as argument (passed by value)
char toLower(char inputChar)
{
	//add 32 to the ASCII value of InputChar's character value
	inputChar+=32;
	//return inputChar
	return inputChar;
}
//write the main function
int main()
{
	//define a char variable ch
	char ch;
	//ask for input of the value of ch
	cout<<"Enter an alphabet - ";
	cin>>ch;
	//check if ch lies between 'a' and 'z' (both included)
	if(ch>='a'&&ch<='z')
	{
		//if yes then call function toUpper() with the value of ch as the argument, then print the upper case value
		ch=toUpper(ch);
		cout<<"Upper Case Value - "<<ch;
	}
	//if not, check if ch lies between 'A' and 'Z' (both included)
	else if(ch>='A'&&ch<='Z')
	{
		//if yes then call function toLower() with the value of ch as argument, then print the lower case value
		ch=toLower(ch);
		cout<<"Lower Case Value - "<<ch;
	}
	//if not, print an ERROR message
	else cout<<"ERROR - Invalid Input";
	//Auf wiedersehen
	return 0;
}
