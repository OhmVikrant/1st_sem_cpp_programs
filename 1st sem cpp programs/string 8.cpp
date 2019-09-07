//find -> to find substring
//returns index of first occurence of the substring
//index number starts from 0

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "metallurgical and materials engineering";
	string sub1 = "materials";
	string sub2 = "Roorkee";
	
	int position = str.find(sub1,0);          //index numner is 0
	
	cout<<str<<endl;
	
	if(position != string::npos)
	cout<<sub1<<" found at: "<<position<<endl;
	else
	cout<<sub1<<" not found"<<endl;
	
	position = str.find(sub2,0);
	
	if(position!= string::npos)
	cout<<sub2<<" found at: "<<position<<endl;
	else
	cout<<sub2<<" not found "<<endl;
	
	return 0;
	
}
