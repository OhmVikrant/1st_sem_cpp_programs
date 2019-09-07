//check prime number

#include<iostream>
using namespace std;
int main()

{
	int n, i;
	
	cout<<"Enter a positive integer: ";
	cin>>n;
	
	while(n<1)
	{
		cout<<"\nERROR!";
		cout<<"\nPlease enter a positive integer greater than 1: ";
		cin>>n;
	}
	
	if(n==1)
	{
		cout<<"1 is neither prime nor composite.";
	}
	
	else if (n>=2)
	{
		for(i=2; i<n; i++)
		{
			if(n%i==0)
			{
				cout<<"The number entered is composite.";
				break;
			}
			else 
			{
				cout<<"The number entered is prime.";
				break;
			}
		}
	}
	return 0;
}
