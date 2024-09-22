#include <iostream>
using namespace std;

int main()
{
    int num,pow,result=1;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"Enter the power:"<<endl;
    cin>>pow;
    while(pow >= 1)
    {
        result *= num;
        pow--;
    }
    cout<<"Result is "<<result<<endl;
    return 0;
}