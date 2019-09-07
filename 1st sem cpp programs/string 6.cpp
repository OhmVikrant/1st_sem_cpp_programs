//comparing strings
/*
use == or != to compare
returns 0 if strings are identical
returns -1 or 1 if strings differ
-1 if second string of lower value otherwise 1
*/

#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1, str2, sum="Strings are ";
	
	cout<<"Enter a string: ";
	getline(cin,str1);
	
	cout<<"Enter another string: ";
	getline(cin,str2);
	
	sum += (str1==str2) ? "identical" : "different";
	if(str1.compare(str2)==0) sum += ": The same";
	else
	sum += (str1.compare(str2)>0 ) ? "Less" : "More";
	cout<<sum<<endl;
	
	(str1==str2)? cout<<"identical" : cout<<"different";
	cout<<endl;
	
	(str1.compare(str2)==0)? cout<<"identical" : cout<<"different";
	
	return 0;
	 
}
