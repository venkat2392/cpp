#include<iostream>
using namespace std;

class sharp
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"enter a and b values:"<<endl;
			cin>>a>>b;
		}
		sharp(int c1,int c2)
		{
			a=c1,b=c2;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		sharp operator+()
		{
			a=a+a;
			b=b+b;
			return sharp(a,b);
		}
};

int main()
{
	sharp s1(3,4);
	s1.getdata();
	+s1;
}

