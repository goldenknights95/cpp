#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"HELLO!!!"<<endl;
	
	cout<<"Hello"<<setw(10)<<"World!" << endl;
	  int a=15,b=20;
              cout << a << setw(10) << b << endl; 
         
              cout<< a << setfill('x') << setw(10) << b <<endl;
                float A = 1.34255;

              cout <<" setprecision: "<< setprecision(3) << A << endl;
               cout<< a <<" decimal value: "<< dec << a <<endl;
                cout<< a <<" hex value: "<< hex << a <<endl;
             
