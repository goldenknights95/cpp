#include<iostream>
#include<string>
using namespace std;
	class Base 
	{ 
	public:
		string name;
	virtual void input()
		{
			cout<<"enter the name :";
			cin>>name;
		}
		virtual void display()
	{
		cout<<"displaying the name"<<name<<endl;
	}
    };
	class child:public Base
	{
	public:
		int age;
		void input()
		{
			cout<<"enter the age :";
			cin>>age;
		}
		void display()
		{
			cout<<"displaying the age"<<age<<endl;
		}
	};
	int main()
	{
	Base* b1;
	child c1;
	b1=&c1;
	b1-> Base::input();
	b1->Base::display();
	b1->input();
	b1->display();
}
