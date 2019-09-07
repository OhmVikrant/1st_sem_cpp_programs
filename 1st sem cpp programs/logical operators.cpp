//logical operators
//AND(&&), OR(||), NOT(!). These will return 0(false) or 1(true)

#include<iostream>
using namespace std;
int main()

{
	int a=10, b=0;                       //a=10 => true, b=0 => false;
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
	
	cout<<"AND examples ->\n";
	cout<<"\t a && a = "<<(a&&a)<<" [true]\n";
	cout<<"\t a && b = "<<(a&&b)<<" [false]\n";
	cout<<"\t b && b = "<<(b&&b)<<" [false]\n";
	
	cout<<"OR examples ->\n";
	cout<<"\t a || a = "<<(a||a)<<" [true]\n";
	cout<<"\t a || b = "<<(a||b)<<" [true]\n";
	cout<<"\t b || b = "<<(b||b)<<" [false]\n";
	
	cout<<"NOT examples ->\n";
	cout<<"\t a = "<<a<<"	!a = "<<!a<<"\n";
	cout<<"\t b = "<<b<<"	!b = "<<!b<<"\n";
	
	return 0;
	
}
