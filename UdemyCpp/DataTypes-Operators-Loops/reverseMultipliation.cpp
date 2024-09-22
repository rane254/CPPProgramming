#include <iostream>
using namespace std;

int main()
{
    int num,rev=0,rem,temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp = num;
    while(temp!=0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    cout<<"Orginal Num: "<<num<<endl<<"Reverse Num: "<<rev<<endl<<"Result: "<<rev*3<<endl;
    return 0;
}