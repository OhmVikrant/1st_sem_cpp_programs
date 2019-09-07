//getting characters form a string

#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str = "department of materials and metallurgical engineering";
	
	int lastindex = str.size() - 1;
	
	cout<<"first character: "<<str.at(0)<<endl;
	cout<<"25th character: "<<str.at(24)<<endl;
	cout<<"string size: "<<str.size()<<endl;
	cout<<"last character index: "<<lastindex<<endl;
	cout<<"last character: "<<str.at(lastindex);
	
	return 0;
}
