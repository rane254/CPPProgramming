#include <iostream>
using namespace std;

int main()
{
    int x, y;
    while (true)
    {
        cout << "\nEnter two numbers for division:" << endl;
        cin >> x >> y;

        if (y == 0)
        {
            cout << "one of the number is zero, Try other 2 numbers\n";
            continue; // will go start of the loop, rest of the code will not execute
        }
        cout << "Ans: " << x / y << endl;
        break; // will come out of the loop and print Bye
    }
    cout << "Bye\n";
    return 0;
}