#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	/* power the system through the program */
	string s1;
	cout<<"you want power the pc( enter on/off ):"<<endl;
	cin>>s1;
	if(s1 == "on")
	{
		cout<<"continue the process"<<endl;
	}
	else
	{
		system("poweroff");
	}
}

