//calculation of average of three numbers

#include<iostream>
using namespace std;
int main()
{
	int n, i;
	float num[150], sum=0.0, average;
	
	cout<<"Enter number of entries: ";
	cin>>n;
	
	while(n>150 || n<=0)
	{
		cout<<"\nERROR! The number of entries should be between 1 and 150"<<endl;
		cout<<"Enter the number of entries again: ";
		cin>>n;
	}
	
	for (i=1; i<=n; i++)
	{
		cout<<"Enter number"<<i<<" : ";
		cin>>num[i];
		sum += num[i];
	}
	
	average=sum/n;
	cout<<"\nAverage of the given numbers: "<<average;
	
	return 0;
}
