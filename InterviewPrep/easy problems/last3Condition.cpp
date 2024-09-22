#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter an integer: \n";
    cin>>N;

    if (N < 10000)
    {
        cout<<N<<" is a small number.";
    }
    else
    {
        int last3Digits = N % 1000;
        int digit1 = last3Digits / 100;
        int digit2 = (last3Digits % 100) / 10;
        int digit3 = last3Digits % 10;
        int sum = digit1 + digit2 + digit3;

        if (sum % 2 == 0)
        {
            if (digit1 % 2 == 1 || digit2 % 2 == 1 || digit3 % 2 == 1)
            {
                cout<<N<<" is a good number.";
            }
            else
            {
                cout<<N<<" is a bad number.";
            }
        }
        else
        {
            cout<<N<<" is a great number.";
        }
    }
    return 0;
}

// test cases
// 100 small number
// 10111 great number
// 10330 good number
// 10303 good number
// 10033 good number
// 10000 bad number
