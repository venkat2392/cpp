#include<iostream>
using namespace std;
class sum
{
	public:
		int n1,n2,a,b;
		sum(sum &s1)
		{
		cout<<"copy constructor is called"<<endl;
		n1=s1.a;
		n2=s1.b;
		}
		void display()
		{
		cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
		}
		sum()
		{
		cout<<"default constructor is called"<<endl;
		cout<<"enter a and b values"<<endl;
		cin>>a>>b;
		}
	
};

int main()
{
sum s1;
sum s2=s1;
s2.display();
}

