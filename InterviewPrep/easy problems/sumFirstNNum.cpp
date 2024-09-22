#include<iostream>
using namespace std;

int main()
{
    int target,i;
    int sum = 0;
    cout<<"Enter a num:"<<endl;
    cin>>target;

    // using loop 
    // for(i=1;i<=target;i++)
    // {
    //     sum += i;
        
    // }
    // using formula n(n+1)/2
    sum = target*(target+1)/2;
    cout<<"Sum of first n natural numbers is "<<sum<<endl;

    return 0;
}