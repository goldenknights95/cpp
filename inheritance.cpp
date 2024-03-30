#include<iostream>
using namespace std;
class alcohol{
	public:
		void warning(){
			cout<<"alcohol consumption is injuries to health"<<endl;
		}
};
class beer:public alcohol{
};
int main()
{
	beer B;
	B.warning();
}
