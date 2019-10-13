#include<iostream>
using namespace std;
class square
{
private:int x,y;
public:
void result(int a,int b)
{
x=a;
y=b;
cout<<"result:"<<(x*y)<<endl;
}
};

int main()
{
square s1;
int a,b;
cout<<"enter the two numbers:"<<endl;
cin>>a>>b;
s1.result(a,b);
}

