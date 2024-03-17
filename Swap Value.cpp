/* MUHAMMAD HAYYAN
23I-2041__CY-A
Assignment#03___Q7a */

#include<iostream>
using namespace std;

int main()
{
	//Program 1 to swap values without third variable (Using XOR)
	
	int num1, num2;
	
	cout<<"\n      ------- First Program to Swap Values -------";
	
	cout<< "\nEnter first number \"A\": ";
	cin >> num1;
	
	cout<< "\nEnter second number \"B\": ";
	cin>> num2;
	
	num1 = num1^num2;
	num2 = num1^num2;		//Using XOR operator to swap values
	num1 = num1^num2;
	
	cout<< "\n\nValue of A after swapping = "<<num1;
	cout<< "\nValue of B after swapping = "<<num2;
	
	return 0;
}
	
