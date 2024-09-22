#include <iostream>
using namespace std;

int main()
{
    int x,i=1;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    while(i<=x)
    {
        if(i%3==0)
        {
            cout<<"Numbers divisible by 3 is "<<i<<endl;
        }
        i++;
    }
    return 0;
}