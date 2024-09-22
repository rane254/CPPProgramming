#include <iostream>
using namespace std;

int main()
{
    // int arr2 [100] = {5};
    // int arr1[100] {5};
    // cout<<arr2[0]<<endl;
    // cout<<arr1[1]<<endl;
    int arr3[] {1};
    cout<<arr3[0]<<endl;
    int i, num, min, size;
    cout << "Enter the number of elements you want in array: ";
    cin >> size;

    int arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum number in array is " << min << endl;
    return 0;
}