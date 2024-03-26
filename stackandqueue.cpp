#include <iostream>
#define MAX 50
using namespace std;

class stack
{
public:
    int top=0;
    int s[MAX];
    void push(int element)
    {
        if (top == MAX - 1) // if stack is full
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            top = top + 1; // stack is empty
            s[top] = element;
        }
    }
    void pop()
    {
        if (top <= -1) // if stack is empty
        {
            cout << "UNDERFLOW" << endl;
        }
        else
        {

            top--;
        }
    }
    display()
    {
        cout << "element in stack is:";
        for (int i = top; i > 0; i--)
        {
            cout << s[i] << endl;
        }
    }
};
class queue
{

public:
	int rear,front=0,q[MAX];
	int element;
	void insert(int element)
	{
		if(rear==MAX-1)//if queue is full
		{
			cout<<"OVERFLOW"<<endl;
		}
		else
		{
			rear=rear+1;
			q[rear]=element;
			
		}
		
	}
	void del()
	{
		if(front<=-1) //if queue is empty
		{
		cout<<"UNDERFLOW"<<endl;
		}
		else 
		{
		 	q[front]=0;
		 	front=front+1;
		 	
		}
		
	}
	void dis()
	{
		cout<<"Elements in Queue is :";
		for(int i=front ;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
};

int
main()
{
    stack s1;
    s1.push(30);
    
    s1.display();
    s1.pop();
    s1.display();
    cout<<" "<<endl;
    queue q1;
    q1.insert(34);
    q1.dis();
    q1.del();
    q1.dis();

    return 0;
}
