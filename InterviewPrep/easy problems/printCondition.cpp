#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter an integer: \n";
    cin>>N;

    if (N % 2 == 0)
    {
        int lastDigit = N % 10;
        cout<<N<<" is Prime number.";
        cout<<"\nThe last digit of Prime number is "<<lastDigit;
    }
    else
    {
        int lastTwoDigits = N % 100;
        int lastFourDigits = N % 10000;
        cout<<N<<" is not a Prime number.";
        if (N < 1000)
        {
            cout<<"\nThe last two digits of not a Prime number is "<<lastTwoDigits;
        }
        else if (N > 1000 && N < 1000000)
        {
            cout<<"\nThe last four digits of not a Prime number is "<<lastFourDigits;
        }
        else
        {
            cout<<"\n"<<"-"<<N<<" is a negative value!";
        }
    }
    return 0;
}

// test cases
// 234 => even => 4
// 157 => odd => 57
// 567169 => odd => 7169
// 1000001 => odd => -1000001
