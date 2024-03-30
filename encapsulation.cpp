#include<iostream>
using namespace std;
class Car{
int price;
public:
int set_price(double p)
{
	price=p;
		}
	int get_price(){
		cout<<price;
	}
	};
	int main(){
		Car c1;
		c1.set_price(300000);
		c1.get_price();
		return 0;
			}
