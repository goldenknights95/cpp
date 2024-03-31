#include<iostream>
using namespace std;
class Vehicle{
	protected:
		int price=300000;
	public:
		void dis(){
		
	cout<<"the price of vehicle :"<<price<<endl;	}
};
class car:public Vehicle{
};
int main()
{
	car c1;
	c1.dis();
}
