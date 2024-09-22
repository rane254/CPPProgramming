#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, digit, temp1, temp2, low, high;
    int len = 0;
    int arm = 0;
    int i = 0;
    cout << "Enter the lowest integer: ";
    cin >> low;
    cout << "Enter the highest integer: ";
    cin >> high;

    for (num = low; num <= high; num++)
    {
        temp1 = low;
        arm = 0;
        len = 0;
        while (num != 0)
        {
            num /= 10;
            len += 1;
        }

        num = temp1;
        while (num != 0)
        {
            digit = num % 10;
            temp2 = digit;
            arm += pow(temp2, len);
            num /= 10;
        }

        if (temp1 == arm)
        {
            cout << temp1 << " ";
        }
    }
    cout << endl;

    return 0;
}