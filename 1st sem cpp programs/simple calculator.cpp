//simple calculator

#include<iostream>
using namespace std;
int main()

{
	char ch, choice;
	float num1, num2;
	
	do
	{
		cout<<"\nEnter any of the operations +, -, *, /, : ";
		cin>>ch;
		
		while (ch!='+' && ch!='-' && ch!='*' &&ch!='/')
		{
			cout<<"\nERROR! Incorrect operator entered.";
			cout<<"\nAgain enter any of the operations +, -, *, /, : ";
			cin>>ch;
		}
		
		if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
		{
			cout<<"\nEnter operand1 : ";
			cin>>num1;
			cout<<"Enter operand2 : ";	
			cin>>num2;
			
			switch(ch)
			{
				case '+' : cout<<"\n"<<num1<<"+"<<num2<<"="<<num1+num2; break;
				case '-' : cout<<"\n"<<num1<<"-"<<num2<<"="<<num1-num2; break;
				case '*' : cout<<"\n"<<num1<<"*"<<num2<<"="<<num1*num2; break;
				case '/' : cout<<"\n"<<num1<<"/"<<num2<<"="<<num1/num2; break;	
			}
		}
		
		cout<<"\n\nTo do any of the operations again, type 'Y' and then press enter. \nOtherwise press any other key and press enter\n"<<endl;
		cin>>choice;
	}
	
	while(choice=='Y');
	
	return 0;
	
}
