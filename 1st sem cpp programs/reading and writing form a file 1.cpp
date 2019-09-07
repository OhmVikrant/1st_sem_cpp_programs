//reading/writing from a file

#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str = "\t department of metallurgical and materials engineering";
		str.append("\n\t Indian Institute of Technology");
		str.append("\n\t Roorkee");
		str.append("\n\t PIN-247667");
		
	system ("mkdir c:\\Vikrant\\Bajrang");
	ofstream ohm;
	ohm.open("c:/Vikrant/Bajrang/Jai Sri Ram.txt");
	
	if(!ohm)
	{
		cout<<"Error in opening the output file"<<endl;
	}
	
	ohm<<str<<endl;
	ohm.close();
	
	return 0;
	
}
