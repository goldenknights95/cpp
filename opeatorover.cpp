#include<iostream>  
using namespace std;  
class Name{
	public:
		int num=23;
		
		Name operator ++(){
			num=num+2;
			cout<<"number is:"<<num<<endl;
		}
		Name operator --(){
			num=num-2;
			cout<<"number is:"<<num<<endl;
		}
        Name operator *(){
        	num=num*2;
        	cout<<"number is:"<<num<<endl;
		}	
};
int main()  
{ 
   
   Name tt;
   ++tt;
   --tt;
   *tt;
   
    return 0;  
}  
