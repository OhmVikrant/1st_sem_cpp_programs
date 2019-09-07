//continue
//stop current iteration of the loop

#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i<6)
	{
		++i;
		
		if(i==3) continue; //stop loop for i=3
		
		cout<<"\n loop iteration is "<<i;
		
	}
	return 0;
}
