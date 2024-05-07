#include<iostream>
using namespace std;
class name{
	public:
		name(){
			cout<<"code is executed"<<endl;
		}
		~name()
		{
			cout<<"code is not executed"<<endl;
		}
		name(int x){
			cout<<"code is X"<<x<<endl;
		}
};
int main(){
	name t1;
	name t2(2);
}
