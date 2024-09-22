#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=n)
    {
        // multiple of 3 but not multiple of 4
        if(i % 3 == 0 && i % 4 != 0)
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    return 0;
}