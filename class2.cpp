#include<iostream>
using namespace std;
class square
{
int x,y;
public:
void result(int x,int y);
};
void square::result(int a,int b)
{
x=a;y=b;
cout<<"result:"<<(x*y)<<endl;
}

int main()
{
square s1;
int a,b;
cout<<"enter two numbers:"<<endl;
cin>>a>>b;
s1.result(a,b);
}

