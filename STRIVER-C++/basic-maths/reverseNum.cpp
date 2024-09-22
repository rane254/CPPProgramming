#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num)
{
    int digit;
    long long int rev = 0;
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Check for overflow eg: 1534236469
    if (rev > INT_MAX || rev < INT_MIN)
    {
        return 0;
    }

    return rev;
}

int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int result = reverseNum(num);

    cout << "The reverse of " << num << " is " << result << endl;
    return 0;
}