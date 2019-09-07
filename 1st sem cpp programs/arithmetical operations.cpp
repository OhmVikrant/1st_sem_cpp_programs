//Arithmetical operations

#include<iostream>
using namespace std;
int main()

{
	int a=1, b=2, c=3, d=4, result;
	result=a+b;                      //similarly -, *, / can be used
	cout<<"addition=  "<<result<<endl;
	
	result=c%b;
	cout<<"modulus(3/2)=  "<<result<<endl;
	
	cout<<"postfix increment=  "<<a++<<endl;
	cout<<"a(a++)=  "<<a<<endl;
	
	cout<<"prefix increment=  "<<++a<<endl;
	cout<<"a(++a)=  "<<a;
	
	return 0;
}
