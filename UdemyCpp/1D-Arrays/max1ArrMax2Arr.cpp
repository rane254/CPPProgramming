#include <iostream>
using namespace std;
int main()
{
    int i, j, size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max1, max2;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                max1 = arr[i];
            }

            if (arr[i] < max1 && arr[i] > arr[j])
            {
                max2 = arr[i];
            }
        }
    }
    cout << "1st Max num is " << max1 << endl;
    cout << "2nd Max num is " << max2 << endl;
    return 0;
}