#include<iostream>
using namespace std;
void swap(int &x,int &y){
	int z=x;
	x=y;
	y=z;
}
int main()
{
	int n1,n2;
	cout<<"enter first no";
	cin>>n1;
	cout<<"enter second no";
	cin>>n2;
	swap(n1,n2);
	cout<<"Numbers after swapping"<<endl;
	cout<<"first no"<<n1<<endl;
	cout<<"second no"<<n2<<endl;
}
