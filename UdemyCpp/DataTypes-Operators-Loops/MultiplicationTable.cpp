#include<iostream>
using namespace std;

int main()
{
    int i,j,x,y;
    cout<<"Enter two numbers for multiplication: "<<endl;
    cin>>x>>y;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
    }
    return 0;
}