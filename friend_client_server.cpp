#include<iostream>
#include<cstring>
using namespace std;

class client;
class server
{
	string mes1;
	public:
		void servermessage()
		{
		cout<<"server receive message :\t"<<mes1<<endl;
		}
		void servergetfromclient(client);
		friend class client;
};

class client
{
	string mes2;
	public:
		void clientmessage()
		{
		cout<<"client receive message :\t"<<mes2<<endl;
		}
		void clientgetfromserver(server);
		friend class server;
};

void server::servergetfromclient(client s1)
{
	cout<<"enter server message:\t";
	if(getline(cin,s1.mes2))
	{
	s1.clientmessage();
	}
}

void client::clientgetfromserver(server s2)
{
	cout<<"enter client message:\t";
	if(getline(cin,s2.mes1))
	{
	s2.servermessage();
	}
}

int main()
{
	client c1;
	server s1,s2;
	int i;
	for(i=0;i<=10;i++)
	{
	s1.servergetfromclient(c1);
	c1.clientgetfromserver(s1);
	}
}

