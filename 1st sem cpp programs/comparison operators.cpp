//Comparison operators

#include<iostream>
using namespace std;
int main()
{
	int zero=0, nil=0, one=1;
	char aa='A', a='a';
	
	cout<<"Equality->";
	cout<<"\n\t Is zero = nil ? "<<(zero==nil);
	cout<<"\n\t Is capital letter = small letter ? "<<(aa==a);
	
	cout<<"\n Inequality->";
	cout<<"\n\t Is zero not equal to one ? "<<(zero!=one);
	
	cout<<"\n Greater than->";
	cout<<"\n\t Is zero > one ? "<<(zero>one);
	
	cout<<"\n Less than->";
	cout<<"\n\t Is zero < one ? "<<(zero<one);
	
	cout<<"\n Greater than or equal to->";
	cout<<"\n\t Is zero >= nil ? "<<(zero>=nil);
	
	cout<<"\n Less than or equal to->";
	cout<<"\n\t Is one <= nil ? "<<(one<=nil);
	
	return 0;	
}
