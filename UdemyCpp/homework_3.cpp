// print asterisk like triangle
/*
            *
           * *
          * * *
         * * * *
        * * * * *
*/
#include<iostream>
using namespace std;

void pyramid1(int n)
{
    int i,j,k;

    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter Number of Levels of the pattern:"<<endl;
    cin>>n;
    pyramid1(n);

    return 0;
}
