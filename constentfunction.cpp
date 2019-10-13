#include<iostream>
using namespace std;

class sharp
{
	public:int a,b;
		sharp()
		{
			cout<<"default constructor"<<endl;
			a=10,b=20;
			a++,b++;
		}

		void display() const
		{
			cout<<"constent function"<<endl;
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};

int main()
{
	sharp s1;
	s1.display();
	sharp s2;
	s2.display();
}



