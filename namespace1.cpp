#include<iostream>
using namespace std;
namespace first
{
int a,b,sum;
int f1()
{
sum = a+b;
cout<<"sum="<<sum<<endl;
}
}
int main()
{
cout<<"enter a and b values:"<<endl;
cin>>first::a>>first::b;
first::f1();
}

