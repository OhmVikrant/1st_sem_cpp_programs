//ENUMERATING CONSTANTS

#include<iostream>
using namespace std;
int main()

{
	enum balls{red,blue,green,yellow,white,black=2};
	cout<<"number corresponding to green: "<<green<<endl;
	int total=white+black;
	cout<<"white+black= "<<total<<endl;
	
	return 0;
}
