#include<iostream>
using namespace std;
namespace first
{
int a;
int b;
}
namespace second
{
int a;
int b;
}
int main()
{
cout<<"enter a and b values of the first"<<endl;
cin>>first::a>>first::b;
cout<<"a="<<first::a<<endl<<"b="<<first::b<<endl;
cout<<"enter a and b values of the second"<<endl;
cin>>second::a>>second::b;
cout<<"a="<<second::a<<endl<<"b="<<second::b<<endl;
}

