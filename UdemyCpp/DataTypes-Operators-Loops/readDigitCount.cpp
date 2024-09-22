#include <iostream>
using namespace std;

int main()
{
    int num, temp, count = 0;
    cout << "Enter the number:" << endl;
    cin >> num;

    temp = num;

    if (num == 0)
    {
        count = 1;
    }
    else if (num < 0)
    {
        while (num < 0)
        {
            num /= 10;
            count += 1;
        }
    }
    else
    {
        while (num > 0)
        {
            num /= 10;
            count += 1;
        }
    }
    cout << "Count of "<<temp<<" is " << count << endl;
    return 0;
}