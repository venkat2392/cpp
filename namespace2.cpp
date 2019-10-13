#include<iostream>
using namespace std;
namespace first
{
void f1()
{
cout<<"inter function of the first"<<endl;
}
namespace second
{
void f2()
{
cout<<"inter function of the second"<<endl;
}
}
}
int main()
{
first::second::f2();
first::f1();
}

