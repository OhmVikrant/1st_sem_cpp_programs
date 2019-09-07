//to check a number is prime or not

#include<iostream>
using namespace std;
int main()
{
	int i, n;
	bool flag = true;

    cout<<"Enter a positive integer: ";
    cin>>n;

    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag) cout<<"the number is prime";
    else cout<<"the number is not prime";

    return 0;
}
