#include<iostream>
#include<cstring>
using namespace std;

class sharp
{
	private:
		string childname,parentname,clgname;
	public:	
	void setvalues()
	{
		cout<<"default constructor"<<endl;
		cout<<"enter child name:"<<endl;
		cin>>childname;
		cout<<"enter parent name:"<<endl;
		cin>>parentname;
		cout<<"enter college name:"<<endl;
		cin>>clgname;
	}

	friend void display(sharp);
};

void display(sharp s1)
{
cout<<"name of child:"<<s1.childname<<endl;
cout<<"parent name:"<<s1.parentname<<endl;
cout<<"college name:"<<s1.clgname<<endl;
}

int main()
{
sharp s1,s3;
s1.setvalues();
display(s1);
}
