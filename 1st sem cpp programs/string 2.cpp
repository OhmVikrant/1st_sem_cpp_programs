//cin function with string
//only one word is taken by cin

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2, str3;
	cout<<"Please enter your full name: ";
	cin>>str1;
	
	str2=str1;
	cout<<str1<<endl<<str2;
	
	return 0;
}
