#include <iostream>
using namespace std;

int main()
{
    int num, rem, temp;
    int rev = 0;
    cout << "Enter the number:" << endl;
    cin >> num;
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "Reverse of " << temp << " is " << rev << endl;
    return 0;
}
