#include<iostream>
using namespace std;
namespace first
{
int a,b;
}
namespace second
{
int a,b;
}
int main()
{
{
using namespace first;
cout<<"enter the a and b values of the first"<<endl;
cin>>a>>b;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
{
using namespace second;
cout<<"enter the a and b values of the second"<<endl;
cin>>a>>b;
cout<<a<<endl<<b<<endl;
//cin>>second::a>>second::b;
//cout<<"a="<<second::a<<endl<<"b="<<second::b<<endl;
}
}

