#include<iostream>
#define MAX 5
using namespace std;

class stack
{
    int stk[MAX],ele,top;

public:
    void push()
    {
        int ele;
        if(top == MAX - 1)
        {
            cout<<"Stack is Full\n";
        }
        else
        {
            cout<<"Enter the Elements:\n";
            cin>>ele;
            cout<<"----------\n";
            top = top + 1;
            stk[top] = ele;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty\n";
        }
        else
        {
            ele=stk[top];
            top = top - 1;
            cout<<"Top Element Deleted:"<<ele<<endl;
        }
    }
    //Display function
    void Display()
    {
        int i;
        if(top == -1)
        {
            cout<<"Stack is Empty\n";
        }
        else
        {
            for(i=top;i>=0;i--)
            {
                cout<<"\t"<<stk[i];
            }
        }
    }
    stack() //constructor
            {
                top = -1;
            }
};

int main()
{
    stack S;
    int ch;
    while(1)
    {
        cout<<"\nMenu\n";
        cout<<"----------\n";
        cout<<"1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Display\n";
        cout<<"4.Exit\n";
        cout<<"Enter You Choice\n";
        cout<<"----------\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                S.push();
                break;
            }
        case 2:
            {
                S.pop();
                break;
            }
        case 3:
            {
                S.Display();
                break;
            }
        case 4:
            {
                exit(0);
                break;
            }
        }
    }
    return 0;
}
