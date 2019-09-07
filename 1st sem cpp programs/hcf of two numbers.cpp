//HCF of two natural numbers

#include<iostream>
using namespace std;
int main()

{
	int n1, n2, i, hcf;
	
	cout<<"Enter first natural number: ";
	cin>>n1;
	cout<<"Enter second natural number: ";
	cin>>n2;
	
	if(n2<n1)
	{
		for(i=1; i<=n2; i++)
		{
			if(n2%i==0 && n1%i==0)
			{
				hcf=i;
			}
		}
		cout<<"\nHCF of "<<n1<<" and "<<n2<<" is : "<<hcf;
	}
    
    else if (n1<n2)
    {
    	for(i=1; i<=n1; i++)
    	{
    		if(n1%i==0 && n2%i==0)
    		{
    			hcf=i;
			}
		}
		cout<<"\nHCF of "<<n1<<" and "<<n2<<" is : "<<hcf;
	}
	
	else if(n1=n2)
	{
		cout<<"\nHCF of "<<n1<<" and "<<n2<<" is : "<<n1;
	}
	
	return 0;
}
