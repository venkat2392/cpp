#include<iostream>
#include<cstring>
using namespace std;

class venkat;
class subbu
{
	int width,height;
	public:
	void getdata(venkat);
	void display()
	{
	cout<<"width="<<width<<endl;
	cout<<"height="<<height<<endl;
	}
	void area()
	{
	int result;
	result = width*height;
	cout<<"area result="<<result<<endl;
	}
};

class venkat
{
	int side;
	public:
	void data()
	{
	cout<<"enter the side:"<<endl;
	cin>>side;
	}
	friend class subbu;
};

void subbu::getdata(venkat s1)
{
	width = s1.side;
	height = s1.side;
}

int main()
{
	venkat s2;
	s2.data();
	subbu s1;
	s1.getdata(s2);
	s1.display();
	s1.area();
}


