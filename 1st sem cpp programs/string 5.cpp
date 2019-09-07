//assign -> for copying strings

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "who is there";
	string str2 = str1;
	string str3;
	
	str3.assign(str1);
	
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;
	
	str3.assign(str1,8,3);
	cout<<str3<<endl;
	
	return 0;
}
