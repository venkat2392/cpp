#include<iostream>
using namespace std;
int function(int a,int b=10,int c=24)
{
int sum;
sum=a+b+c;
cout<<"sum="<<sum<<endl;
}
int main()
{
cout<<"two default arguments"<<endl;
function(10);
cout<<"one default arguments"<<endl;
function(12,13);
cout<<"no default arguments"<<endl;
function(12,13,14);
}
