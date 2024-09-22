#include <iostream>
using namespace std;

int decToBinary(int num)
{
    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow); // add the remainder to the answer
        pow *= 10; // increase the power by times 10
    }

    return ans;
}

int main()
{
    int decimalNum = 6;
    cout << "Decimal to Binary: " << decToBinary(decimalNum) << endl;
    return 0;
}