#include<iostream>
using namespace std;
int main()
{
cout<<"****dynamic memory allocation with value*****"<<endl;
int *ptr;
ptr = new int(10);
cout<<"\t ptr value is:"<<*ptr<<endl;
delete ptr;
}

