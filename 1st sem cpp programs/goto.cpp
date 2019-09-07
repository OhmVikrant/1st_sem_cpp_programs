//goto

#include<iostream>
using namespace std;
int main()
{
	int i, j;
	
	for(i=1; i<4; ++i)
	{
		cout<<"outer loop iteration "<<i<<endl;
		for(j=1; j<4; j++)
		{
			if(j==3) goto dev;                  //jump to label
			cout<<"\t inner loop iteration "<<j<<endl;
			
		}
	dev :	;
	}
	
	return 0;
	
}
