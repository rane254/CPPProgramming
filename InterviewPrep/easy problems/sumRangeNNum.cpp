#include<iostream>
using namespace std;

int main()
{
    int start,stop,i;
    int sum = 0;
    cout<<"Enter a num to start and stop:"<<endl;
    cin>>start>>stop;
    

    // using loop 
    for(i=start;i<=stop;i++)
    {
        sum += i;
    }
    // using formula n(n+1)/2
    // sum = (stop*(stop+1)/2) - (start*(start+1)/2) + start;
    cout<<"Sum between "<<start<<" and "<<stop<<" natural numbers is "<<sum<<endl;

    return 0;
}