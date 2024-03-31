#include<iostream>
using namespace std;
class alcohol{
	private:
	string exp_date;
	
	public:
		void set_price(string d1)
		{
			exp_date=d1;
		}
		void get_price()
		{
			cout<<"Expiry date of alcohol:"<<exp_date<<endl;
		 } 
		void warning(){
			cout<<"alcohol consumption is injuries to health"<<endl;
		}
};
class beer:public alcohol{
};
int main()
{
	beer B;
	
	B.set_price("24 March 2024");
	B.get_price();
    B.warning();
}
