//CONDITIONAL OPERATORS
//syntax is ; (text-expression) ? if true-do this : if false-do this;

#include<iostream>
using namespace std;
int main()
{
	int number1=13, number2=14;
	char letter;
	
	cout<<number1<<" is ";
	(number1%2 != 0)? cout<<"odd" : cout<<"even";
	
	cout<<endl<<number2<<" is ";
	(number2%2 != 0)? cout<<"odd" : cout<<"even";
	
	letter=(number2%2 != 0)? 'Y' : 'N';
	cout<<"\n Is "<<number2<<"odd? Ans-> "<<letter;
	
	return 0;
}
