#include<iostream>
using namespace std;
int main()
{
int *ptr = NULL,i;
ptr = new int[5];
for(i=1;i<=5;i++)
{
ptr[i] = i;
cout<<"array values are:"<<ptr[i]<<endl;
}
delete [] ptr;
}

