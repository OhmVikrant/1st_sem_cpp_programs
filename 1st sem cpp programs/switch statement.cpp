//switch statement

#include<iostream>
using namespace std;
int main()

{
	char letter;
	cout<<"Enter any a-z character: ";
	cin>>letter;
	
	switch(letter)
	{
		case 'a' : cout<<"letter 'a' found\n"; break;
		case 'b' : cout<<"letter 'b' found\n"; break;
		case 'c' : cout<<"letter 'c' found\n"; break;
		default : cout<<"letter is not a, b or c\n"; 
		
	}
	
	return 0;
}
