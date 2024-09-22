#include <iostream>
using namespace std;

int main()
{
    int num1, num2 = 0, i = 0;
    while (i < 10)
    {
        cout << "Enter 10 integers:\n";
        cin >> num1;

        if (num1 > num2)
        {
            num2 = num1;
        }
        i++;
    }
    cout<<"Greatest number is "<<num2<<endl;

    return 0;
}