#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp, sum = 0, start = 0;
    cout << "Enter the test cases:" << endl;
    cin >> num1;

    while (num1 > 0)
    {
        cout << "Enter the number to find the sum:" << endl;
        cin >> num2;
        temp = num2;

        while (start < num2)
        {
            sum = num2*(num2+1)/2;
            start++;
        }
        num1--;
        cout<<"The sum of "<<temp<<" is "<<sum<<endl;
    }
    return 0;
}