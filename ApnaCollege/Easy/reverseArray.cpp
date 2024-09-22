#include <iostream>
using namespace std;

void reverseArr(int arr[], int len)
{
    int first, last;
    first = 0;
    last = len - 1;

    while (first < last)
    {
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverseArr(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}