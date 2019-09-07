//size, empty, append

#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str1;
	string str2 = "i am going";
	cout<<"string size is : "<<str2.size()<<endl;
//--------------------------------------------------------------------------------------
	while(str1.empty())
	{
		cout<<"Enter your name: ";
		getline(cin,str1);
		
	}
	cout<<"\nyour name is: "<<str1;
//--------------------------------------------------------------------------------------------
	cout<<"\nEnter your last name: ";
	cin>>str2;
	str1.append("  ");
	cout<<(str1.append(str2))<<endl;
	cout<<(str1)<<endl;
	cout<<(str1+"  "+str2)<<endl;
	cout<<(str1)<<endl;
	cout<<(str1.append(str2,3,4));
	
	return 0;

}
