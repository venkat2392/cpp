#include<iostream>
using namespace std;

class binary
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"enter a and b values:"<<endl;
			cin>>a>>b;
		}
		binary operator+(const binary &s1)
		{
			binary s2;
			s2.a=this->a+s1.a;
			s2.b=this->b+s1.b;
			return s2;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};

int main()
{
	binary b1;
	b1.getdata();
	binary b2;
	b2.getdata();
	binary b3;
	b3=b1+b2;
	b3.display();
}
	
