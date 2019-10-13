#include<iostream>
#include<cstring>
using namespace std;
int main()
{
class s2
{
};
string s1;
wchar_t c1;
cout<<"size of string:"<<sizeof(s1)<<endl;
cout<<"size of wide charector:"<<sizeof(c1)<<endl;
cout<<"size of constant charector:"<<sizeof('a')<<endl;
cout<<"size of empty class:"<<sizeof(s2)<<endl;
}


