//erasing and replacing string

#include<string>
#include<iostream>
using namespace std;
int main ()
{
	string str = "department of materials and metallurgical endineering";
	cout<<"original string is : "<<str<<endl;
	
	str.erase(14,14);
	cout<<"erased : "<<str<<endl;
	
	str.replace(23,4,"y and materials");
	cout<<"replaced : "<<str;
	
	return 0;
}
