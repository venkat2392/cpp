#include<iostream>
using namespace std;
class sum
{
public:
int a,b;
void getdata();
void add(sum s2)
{
sum total;
total.a=a+s2.a;
total.b=b+s2.b;
cout<<total.a<<endl<<total.b<<endl;
}
};

void sum::getdata()
{
cout<<"enter a and b values"<<endl;
cin>>a>>b;
}

int main()
{
sum s1,s2,s3;
s1.getdata();
s2.getdata();
s1.add(s2);
}


