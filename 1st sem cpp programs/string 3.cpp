//getline function
//to read whole sentence

#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1, str2, str3;
	cout<<"Enter your full name: ";
	getline(cin,str1);             //note use of getline
	cout<<str1<<endl;
	
	cout<<"Enter two words separated by a tab: ";
	getline(cin,str2,'\t');        //delimiter character '\t' 

	cout<<str2<<endl;
	
	return 0;
	
}
