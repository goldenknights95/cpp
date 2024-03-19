#include<iostream>
using namespace std;
class Area{
	public:
		int a,b,r;
		Area(){
			int len=a;
			int bre=b;
		}
		Area(int a,int b){
			int len=a;
			int bre=b;
			cout<<"area of rectangle:"<<len*bre<<endl;
		}
		 Area(double a,double b){
			float c=a*b;
			cout<<"area of rectangle :"<<c<<endl;
		}
		Area(int r){
			cout<<"Area of circle:"<<3.145*r*r<<endl;
		}
		
		void circum_of_circle(int r){
			cout<<"circumference of circle :"<<3.145*r<<endl;
		}
	float circum_of_circle(double r){
		cout<<"circumference of circle "<<3.145*r<<endl;
	}
};
int main(){
	Area a1(4,5);
	Area a4(5.6,9.8);
     Area a2(6);
	 Area a3;
	 a3.circum_of_circle(5);
	 a3.circum_of_circle(5.5);
}
