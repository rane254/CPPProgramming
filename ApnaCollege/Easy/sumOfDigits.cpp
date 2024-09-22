#include <iostream>
using namespace std;

void calculateDigits(int n)
{
    int rem, sum = 0, num = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        sum += rem;
    }

    cout << "Sum of digits of " << num << " is " << sum << endl;
}

int main()
{
    calculateDigits(234);
    return 0;
}