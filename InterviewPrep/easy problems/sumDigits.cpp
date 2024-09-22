#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,temp;
    cout<<"Enter the integer:"<<endl;
    cin>>num;
    temp = num;

    while(num>0)
    {
        sum += num%10;
        num /= 10; 
    }
    cout<<"Sum of the digits of Integer "<<temp<<" is "<<sum<<endl;

    return 0;
}