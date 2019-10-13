#include<iostream>
using namespace std;
int function(int &a,int &b)
{
a=a+a;
b=b+b;
}
int main()
{
cout<<"before reference function calling:"<<endl;
int a=5,b=10;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<"after reference function calling:"<<endl;
function(a,b);
cout<<"a="<<a<<endl<<"b="<<b<<endl;
}


