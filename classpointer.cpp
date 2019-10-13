#include<iostream>
using namespace std;
class sum
{
public:
	int a,b;
	void getdata()
	{
		cout<<"enter a and b values"<<endl;
		cin>>a>>b;
	}
	void total()
	{
		int sum;
		sum=a+b;
		cout<<"total of the two numbers:"<<sum<<endl;
	}
};

int main()
{
sum s1,*ptr;
ptr=&s1;
ptr->getdata();
ptr->total();
}


