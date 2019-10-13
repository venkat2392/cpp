#include<iostream>
using namespace std;
/* "this" is a heddin pointer supplied by the compiler, which holds the address of current calling object */
class sharp
{
	int a,b,num1,num2;
	public:
		sharp()
		{
			cout<<"enter a and b values"<<endl;
			cin>>a>>b;
		}
		void getdata()
		{
			num1 = this->a;
			num2 = this->b;
		}
		void display()
		{
			cout<<"num1 = "<<num1<<endl;
			cout<<"num2 = "<<num2<<endl;
		}
};

int main()
{
sharp s1;
s1.getdata();
s1.display();
}

