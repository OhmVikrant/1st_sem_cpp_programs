//if-else

#include<iostream>
using namespace std;
int main()

{
	int number=2; bool flag = 0;
	
	if ((number==2) && (flag))
	{
		cout<<"The first test is true\n";
	}
	
	else if ((number==2) && (flag==0))
	{
		cout<<"The second test is true\n";
	}
	
	if ((number==2) && (!flag))
	{
		cout<<"The third test is true";
	}
	
	return 0;
}
