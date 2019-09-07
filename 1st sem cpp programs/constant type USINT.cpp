//CONSTANT TYPE
//used to avoid repeated lengthy condtant definition

#include<iostream>
using namespace std;

typedef unsigned short int USINT;

int main()

{
	USINT length;
	USINT width;
	USINT area;
	
	length=25; width=20;
	area=length*width;
	
	cout<<area;
	
	return 0;
}
