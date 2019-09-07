//find largest among three numbers

#include<iostream>
using namespace std;
int main()
{
	float n1, n2, n3;
	
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	cout<<"Enter the third number: ";
	cin>>n3;
	
	if(n1>n2 && n1>n3)
	{
		cout<<"\nThe largest number is: "<<n1;
	}
	if(n2>n1 && n2>n3)
	{
		cout<<"\nThe largest number is: "<<n2;
	}
	if(n3>n1 && n3>n2)
	{
		cout<<"\nThe largest number is: "<<n3;
	}
	if(n1==n2 &&n1==n3)
	{
		cout<<"\nThe largest number is: "<<n1;
	}
	if((n1==n2 && n1>n3) || (n1==n3 && n1>n2))
	{
		cout<<"\nThe largest number is: "<<n1;
	}
	if(n2==n3 && n2>n1)
	{
		cout<<"\nThe largest number is: "<<n2;
	}
	
	return 0;
}
