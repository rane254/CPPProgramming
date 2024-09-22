#include <iostream>
using namespace std;

int main()
{
    int t, n, min = 0, i = 0;
    cout << "Enter the no. of test cases: ";
    cin >> t;
    while (i < t)
    {
        cout << "Enter the no. of elements: ";
        cin >> n;
        cout << "Enter the num:" << endl;
        int num[n];
        int j=0;
        while (j < n)
        {
            cin >> num[j];
            j++;
        }
        min = num[0];
        for (int k = 1; k < n; k++)
        {
            if (num[k] <= min)
            {
                min = num[k];
            }
        }

        cout << "Minimum number is " << min << endl;
        i++;
    }
    return 0;
}