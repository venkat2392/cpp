#include<iostream>
using namespace std;
void function(int a,int b)
{
int sum;
sum=a+b;
cout<<"sum of integers="<<sum<<endl;
}
void function(float a,float b)
{
float sum;
sum=a+b;
cout<<"sum of the floats="<<sum<<endl;
}
void function(double a,double b)
{
double sum;
sum=a+b;
cout<<"sum of the doubles="<<sum<<endl;
}

int main()
{
function(10,20);
function(10.5,20.5);
function(12.222,34.456);
}

