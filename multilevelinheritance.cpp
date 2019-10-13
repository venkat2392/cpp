#include<iostream>

using namespace std;

class student1
{
	public:
		int m1,m2,m3,m4,m5,m6,total1,total2,avg;
		void getdata()
		{
			cout<<"enter the first student marks"<<endl;
			cin>>m1>>m2>>m3;
		}
		void total()
		{
			total1=m1+m2+m3;
			cout<<"total="<<total1<<endl;
		}
};

class student2 : public student1
{
	public:
		void getdata()
		{
			cout<<"enter the second student marks"<<endl;
			cin>>m4>>m5>>m6;
		}
		void total()
		{
			total2=m4+m5+m6;
			cout<<"total="<<total2<<endl;
		}
};

class school : public student2
{
	public:
		void average()
		{
			avg=total1+total2;
			cout<<"average="<<(avg/2)<<endl;
		}
};

int main()
{
	school s1;
	s1.student1::getdata();
	s1.student1::total();
	s1.student2::getdata();
	s1.student2::total();
	s1.average();
}

