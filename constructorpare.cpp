#include<iostream>
using namespace std;
class sum
{
	public:
		int n1,n2;
		sum(int a,int b)
		{
		cout<<"parameterized constructor is called"<<endl;
		n1=a;
		n2=b;
		}
		void display()
		{
		cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
		}
};

int main()
{
sum s1(10,20);
s1.display();
}

