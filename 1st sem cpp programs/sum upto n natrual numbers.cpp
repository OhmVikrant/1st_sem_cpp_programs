//sum upto n natural numbers

#include<iostream>
using namespace std;
int main()

{
	int n, i, sum=0;
	cout<<"Enter any natural number: ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	cout<<"Sum of the natural numbers upto "<<n<<" is : "<<sum;
	
	return 0;
}
