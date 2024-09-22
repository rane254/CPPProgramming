#include <iostream>
using namespace std;

void swapMixMaxArr(int arr[], int len)
{

    int largest = INT_MIN, smallest = INT_MAX;
    int largestIndex, smallestIndex;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }

        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }

    arr[smallestIndex] = largest;
    arr[largestIndex] = smallest;
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

    swapMixMaxArr(arr, size);

    cout << "Array after swap: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}