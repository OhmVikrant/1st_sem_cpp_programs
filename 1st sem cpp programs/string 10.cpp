//inserting a string

#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str = "department of metallurgical engineering";
	string substr = "and materials";
	
	cout<<"original string is : "<<str<<endl;
	
	str.insert(28,substr);
	
	cout<<"new string is : "<<str;
	
	return 0;
}
