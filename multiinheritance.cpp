#include<iostream>
using namespace std;
class grandfather{
	public:
		void dis(){
			cout<<"I am his grandfather"<<endl;
		}
};
class father:public grandfather{
	public:
	void disp(){
	cout<<"I am his father"<<endl;
	}
};
class son:public father{
};
int main(){
	son s;
	char x;
	cout<<"enter your choice"<<endl;
	cout<<" your choice are :"<<endl<<"1. A  2. B"<<endl;
	cin>>x;
	switch(x)
	{
		case'A':
			s.dis();
			break;
		case'B':
			s.disp();
			break;
		default:
		  cout<<"enter the correct choice"<<endl;
		  break;		
	}
}
