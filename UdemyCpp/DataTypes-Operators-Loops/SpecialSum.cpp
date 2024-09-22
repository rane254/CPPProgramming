#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, num;
    cout << "Enter the test cases:" << endl;
    cin >> t;
    while (t > 0)
    {
        cout<<"Enter the no. of elements: ";
        cin>>n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter the number: ";
            cin >> num;
            sum += pow(num, i);
        }
        cout << "Sum: " << sum << endl;
        t--;
    }

    return 0;
}