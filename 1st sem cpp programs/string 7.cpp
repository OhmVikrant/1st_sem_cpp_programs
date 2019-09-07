//swap
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1 = " this is first ";
	string str2 = " and this is second ";
	
	cout<<str1<<endl;
	cout<<str2<<endl;
	
	str1.swap(str2);
	
	cout<<str1<<endl;
	cout<<str2<<endl;
	
	return 0;
}
