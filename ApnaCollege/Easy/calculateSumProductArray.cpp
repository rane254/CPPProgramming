#include <iostream>
using namespace std;

void calculateSumProduct(int arr[], int len)
{
    int sum = 0, product = 1;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
}

int main()
{
    int size, ele;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements followed by space: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    calculateSumProduct(arr, size);

    return 0;
}