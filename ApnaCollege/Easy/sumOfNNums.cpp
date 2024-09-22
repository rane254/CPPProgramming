#include <iostream>
using namespace std;

int calculateOddSum(int num)
{
    int result = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
        }
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter the n number: ";
    cin >> num;

    int sum = calculateOddSum(num);

    // int sum = (num * (num + 1)) / 2; // using math formula
    cout << "Sum of " << num << " is " << sum << endl;

    return 0;
}