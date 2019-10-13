#include<iostream>
#include<cstdlib>
using namespace std;
inline void function(int a,int b)
{
cout<<"inline function is called"<<endl;
int sum,mul,div;
sum=a+b;
mul=a*b;
div=a/b;
cout<<"sum="<<sum<<endl;
cout<<"mul="<<mul<<endl;
cout<<"div="<<div<<endl;
}
int main(int argc,char *argv[])
{
int a,b;
cout<<"inline function is calling"<<endl;
a=atoi(argv[1]);
b=atoi(argv[2]);
function(a,b);
}

