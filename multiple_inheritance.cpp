#include<iostream>
using namespace std;
class dairy_milk{
	public:
		void dis(){
			cout<<"Kiss me, close your eyes"<<endl;
		}
};
class five_star{
	public:
		void disp()
		{
			cout<<"do nothing"<<endl;
		}
};
class chocolate:public dairy_milk,public five_star{
};
int main(){
	chocolate C;
	C.dis();
	C.disp();
}
