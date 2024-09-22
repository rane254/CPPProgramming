#include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<n)
    {
        // multiple of 8
        if(i % 8 == 0)
        {
            cout<<i<<" ";
        }
        // multiple of both 3 & 4
        else if(i % 3 == 0 && i % 4 == 0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    return 0;
}