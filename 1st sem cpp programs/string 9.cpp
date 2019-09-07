/*
find_first_of
find_first_not_of
find_last_of
find_last_not_of
*/
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str = "department of materials and metallurgical engineering";
	
	int position = str.find_first_of("by long");
	if (position!=string::npos)
	cout<<"first occurred at position: "<<position<<endl;
	
	position = str.find_first_not_of("delhi");
	if(position!=string::npos)
	cout<<"first not occurred at position: "<<position<<endl;
	
	position = str.find_last_of("by long");
	if(position!=string::npos)
	cout<<"from last occurred at position: "<<position<<endl;
	
	position = str.find_last_not_of("delhi");
	if(position!=string::npos)
	cout<<"from last not occurred at position: "<<position<<endl;
	
	return 0;
	
}
