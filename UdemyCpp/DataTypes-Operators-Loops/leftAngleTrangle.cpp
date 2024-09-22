#include<iostream>
using namespace std;
int main()
{
    // int i=1,j=1,n;
    // cout<<"Enter the rows for the triangle:"<<endl;
    // cin>>n;
    // while(i<=n)
    // {
    //     j=i;
    //     while(j>0)
    //     {
    //         cout<<" *";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // left angle upside down
    int i=0,j=1,n;
    cout<<"Enter the rows for the triangle:"<<endl;
    cin>>n;
    while(n>i)
    {
        j=n;
        while(j>0)
        {
            cout<<"* ";
            j--;
        }
        cout<<endl;
        n--;
    }
    return 0;
}