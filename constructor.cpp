#include<iostream>
using namespace std;
class sum
{
	public:
		int a,b;
		sum()
		{
		cout<<"constructor is called"<<endl;
		cout<<"enter a and b values"<<endl;
		cin>>a>>b;
		}
		void total()
		{
		cout<<"total function is called"<<endl;
		int sum;
		sum=a+b;
		cout<<"sum:"<<sum<<endl;
		}
};

int main()
{
sum s1;
s1.total();
}

