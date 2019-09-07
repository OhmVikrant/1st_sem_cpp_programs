//Assignment operators

#include<iostream>
using namespace std;
int main()

{
	int a,b;
	cout<<"assign value->\n";
	cout<<"\t a = "<<(a=8);
	cout<<"\n\t b = "<<(b=4);
	
	cout<<"\n Add and assign->\n";
	cout<<"\t a += b, a = "<<(a+=b);
	
	cout<<"\n Substract and assign->\n";
	cout<<"\t a -= b, a = "<<(a-=b);
	
	cout<<"\n Multiply and assign->\n";
	cout<<"\t a *= b, a = "<<(a*=b);
	
	cout<<"\n DIvide and assign->\n";
	cout<<"\t a /= b, a = "<<(a/=b);
	
	cout<<"\n modulus and assign->\n";
	cout<<"\t a %= b, a = "<<(a%=b);
	
	return 0; 
}
