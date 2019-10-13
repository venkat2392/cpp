#include<iostream>
using namespace std;

class server;
class client
{
	int num1;
	public:
		client()
		{
		cout<<"default constructor in (client)"<<endl;
		cout<<"enter the client number:"<<endl;
		cin>>num1;
		}
		friend int add(client,server);
};

class server
{
	int num2;
	public:
		server()
		{
		cout<<"default constructor in (server)"<<endl;
		cout<<"enter the server number:"<<endl;
		cin>>num2;
		}
		friend int add(client,server);
};

int add(client c1,server s1)
{
	int result;
    	result=c1.num1+s1.num2;
	cout<<"result="<<result<<endl;
}

int main()
{
	client c2;
	server s2;
	add(c2,s2);
}


