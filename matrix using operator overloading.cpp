#include<iostream>
using namespace std;
class Matrix{
	public:
				int a[3][3];
				int b[3][3];
		Matrix operator >>(Matrix& obj)
		{
			int i,j;
	    cout<<"Enter the elements for matrix 1"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>obj.a[i][j];
				}
			}
			cout<<"Enter the elements for matrix 2"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>obj.b[i][j];
				}
			}
		}
		Matrix operator <<(Matrix& obj)
		{
			int i,j;
			cout<<"Matrix 1:\n";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<obj.a[i][j]<<"\t";
				}
				cout<<"\n";
			}
				cout<<"Matrix 2:\n";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<obj.b[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		Matrix operator +(Matrix& obj)
		{
			int sum[3][3];
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					sum[i][j]=obj.a[i][j]+obj.b[i][j];
				}
			}
			cout<<"sum of matrix:"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<sum[i][j]<<"\t";
				}cout<<"\n";
			}
			
		}
		Matrix operator -(Matrix& obj)
		{
			int sub[3][3];
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					sub[i][j]=obj.a[i][j]-obj.b[i][j];
				}
			}
				cout<<"substraction of matrix:"<<endl;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<sub[i][j]<<"\t";
				}cout<<"\n";
			}	
		}
		Matrix operator *(Matrix& obj)
		{
			int mul[3][3];
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					for(int k=0;k<3;k++)
				{
						mul[i][j]+=obj.a[i][k]*obj.b[k][j];
				}
			}
			}
				cout<<"multiplication of matrix:"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<mul[i][j]<<"\t";
				}cout<<"\n";
			}
		}
};
int main()
{
	Matrix a;
	Matrix b;
	Matrix c;
	b>>a;
    c<<a;
    b+a;
    b-a;
    b*a;
   
}
