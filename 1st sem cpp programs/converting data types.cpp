//CONVERTING DATA TYPES

#include<iostream>
using namespace std;
int main()

{
	int num1, num2, num3, num4;
	float decimalNo = 5.55;
	char letter = 'A';
	double precise = 125.12345;
	bool flag = true;
	
	num1 = (int) decimalNo;
	num2 = (int) letter;
	num3 = (int) precise;
	num4 = (int) flag;
	
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;
	cout<<num4<<endl;
	
	letter = (char) 119;
	cout<<letter;
	
	return 0;
}
