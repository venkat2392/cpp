#include<iostream>
using namespace std;
class rectan
{
	int h,w;
	public:
		void userenter()
		{
			cout<<"enter the two numbers:"<<endl;
			cin>>h>>w;
		}
		void rectangale(rectan r1,rectan r2)
		{
			//rectan h1;
			r1.h=r1.h+r2.h;
			r1.w=r1.w+r2.w;
			cout<<"result:"<<(r1.h*r1.w)<<endl;
		}
};
int main()
{
rectan r1,r2,r3;
r1.userenter();
r2.userenter();
r3.rectangale(r1,r2);
}

