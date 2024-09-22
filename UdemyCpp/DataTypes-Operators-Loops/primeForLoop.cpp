#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 500)
    {
        if (n <= 1)
        {
            cout << n << " is not a Prime Number" << endl;
        }
        else
        {
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0 && n != 2)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout << n << " is Prime Number" << endl;
        }
        else
        {
            cout << n << " is not a Prime Number" << endl;
        }
    }
    else
    {
        cout << "Please enter number below 500." << endl;
    }

    return 0;
}