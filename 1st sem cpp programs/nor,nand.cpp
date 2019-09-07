//logical operators
//NAND, NOR;

#include<iostream>
using namespace std;
int main()
{
	int a=1, b=0;           //a=1=>true, b=0=>false;
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
	
	cout<<"NOR examples->"<<endl;
	cout<<"\t a nand a = "<<!(a&&a)<<" [false]\n";
	cout<<"\t a nand b = "<<!(a&&b)<<" [true]\n";
	cout<<"\t b nand a = "<<!(b&&a)<<" [true]\n";
	cout<<"\t b nand b = "<<!(b&&b)<<" [true]\n";
	
	cout<<"NAND examples->"<<endl;
	cout<<"\t a nor a = "<<!(a||a)<<" [false]\n";
	cout<<"\t a nor b = "<<!(a||b)<<" [false]\n";
	cout<<"\t b nor a = "<<!(b||a)<<" [false]\n";
	cout<<"\t b nor b = "<<!(b||b)<<" [true]\n";
	
	return 0;
}
