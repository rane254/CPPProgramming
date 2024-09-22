#include <iostream>
using namespace std;

void checkPrime(int num)
{
    bool flag = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = true;
            break;
        }
    }

    if (num < 2)
    {
        cout << "Number entered must not be below 2!" << endl;
    }
    else
    {
        flag ? cout << num << " is not a prime number." << endl : cout << num << " is a prime number." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    checkPrime(num);

    return 0;
}