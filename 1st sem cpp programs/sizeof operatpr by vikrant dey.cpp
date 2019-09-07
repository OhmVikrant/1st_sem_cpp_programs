//saving memory space by using short,long+variable type
//here 'sizeof' operator is used to determine space

#include<iostream>
using namespace std;
int main()

{
	cout<<"short integer: "<<sizeof(short int)<<" bytes\n";
	cout<<"long integer: "<<sizeof(long int)<<" bytes\n";
	cout<<"default integer: "<<sizeof(int)<<" bytes\n";
	
	return 0;
}
