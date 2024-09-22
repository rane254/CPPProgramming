// Example 1
// Example = 407 (order/length = 3)
// 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
// Example 2
// Example = 8208 (order/length = 4)
// 8208 = 84 + 24 + 04 + 84 = 4096 + 16 + 0 + 4096 = 8208

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,digit,temp1,temp2;
    int len=0;
    int arm=0;
    int i=0;
    cout<<"Enter the integer: ";
    cin>>num;
    temp1 = num;

    while(num!=0)
    {
        num /= 10;
        len += 1;
    }

    num = temp1;
    while(num!=0)
    {
        digit = num % 10;
        temp2 = digit;
        arm += pow(temp2, len);
        num /= 10;
    }

    if (temp1 == arm)
    {
        cout<<temp1<<" is Armstrong number."<<endl;
    }
    else
    {
        cout<<temp1<<" is not an Armstrong number."<<endl;
    }

    return 0;
}