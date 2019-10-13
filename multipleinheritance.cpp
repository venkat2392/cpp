#include<iostream>

using namespace std;

class student1
{
	public:
		int m1,m2,m3,total1,avg;
		void getdata()
		{
			cout<<"enter marks of first student"<<endl;
			cin>>m1>>m2>>m3;
		}
		void total()
		{
			total1=m1+m2+m3;
			cout<<"total="<<total1<<endl;
		}
};

class student2
{
	public:
		int m4,m5,m6,total2;
		void getdata()
		{
			cout<<"enter marks of second student"<<endl;
			cin>>m4>>m5>>m6;
		}
		void total()
		{
			total2=m4+m5+m6;
			cout<<"total="<<total2<<endl;
		}
};
		
class school : public student1, public student2
{
	public:
		void total()
		{
			cout<<"both student total:"<<total1+total2<<endl;
		}
		void average()
		{
			avg=(total1+total2)/2;
			cout<<"average of marks of both students:"<<avg<<endl;
		}
};

int main()
{
	school std1;
	std1.student1::getdata();
	std1.student1::total();
	std1.student2::getdata();
	std1.student2::total();
	std1.total();
	std1.average();
}

