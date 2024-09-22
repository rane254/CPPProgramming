#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter the year to check if"<<endl<<"it is a leap year or not:"<<endl;
    cin>>year;

    if(year%100==0 && year%400!=0)
    {
        cout<<year<<" is not a Leap year."<<endl;
    }
    else if(year%4==0)
    {
        cout<<year<<" is a Leap year."<<endl;
    }
    else
    {
        cout<<year<<" is not a Leap year."<<endl;
    }
    
    return 0;
}