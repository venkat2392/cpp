#include<iostream>
using namespace std;

class sharp
{
	public:int a,b;
		sharp()
		{
			cout<<"default constructor"<<endl;
			a = 30;
			b = 40;
		}
		sharp(sharp &s1)
		{
			int n1,n2;
			cout<<"copy constructor"<<endl;
			n1 = s1.a;
			n2 = s1.b;
			cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
		}
};

int main()
{
	sharp s1;
	sharp s2 = s1;
}

