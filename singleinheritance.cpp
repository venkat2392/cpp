#include<iostream>

using namespace std;

class A
{
	public:
		int m1,m2,m3,avg,total;
		void getdata()
		{
			cout<<"enter the first,second and third marks"<<endl;
			cin>>m1>>m2>>m3;
		}
		void display()
		{
			cout<<"class A display function"<<endl;
			cout<<"first lang:"<<m1<<endl<<"second lang:"<<m2<<endl<<"third lang:"<<m3<<endl; 
		}
};

class B:public A
{
	public:
		void averagemarks()
		{
			total=m1+m2+m3;
			avg=total/3;
			
		}
		void display()
		{
			cout<<"class B display function"<<endl;
			cout<<"total of three subjects:"<<total<<endl;
			cout<<"average of marks:"<<avg<<endl;
		}
};

int main()
{
	B b;
	b.getdata();
	b.A::display();
	b.averagemarks();
	b.B::display();
}
