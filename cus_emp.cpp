#include<iostream>
using namespace std;
class person{
	public:
		string name;
		long phone_no;
		
		
};
class employee:public virtual  person{
	   
	   public:	
       string employee_id;

};
class customer:public virtual person{

		public:
		
		string add;
};
class employeecustomer:public employee,public customer{
	public:
		void input()
		{
		
			cout<<"enter the name"<<endl;
			
			cin>>name;
		
			cout<<"enter the phone no"<<endl;
		
			cin>>phone_no;
		
			cout<<"enter the employee id"<<endl;
			
			cin>>employee_id;
			
			cout<<"enter the address"<<endl;
		
			cin>>add;
			
		}
		void dis(){
		
			cout<<"displaying information"<<endl;
		
			cout<<"name:";
		
			cout<<name<<endl;
			
			cout<<"phone no:";
		
			cout<<phone_no<<endl;
		
			cout<<"employee id:";
		
			cout<<employee_id<<endl;
		
			cout<<"address:";
		
			cout<<add<<endl;
		}
};
int main(){
	employeecustomer a1;
	a1.input();
	a1.dis();
}
