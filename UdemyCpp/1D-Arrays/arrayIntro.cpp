#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int numbers[size];
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Index value of Number Array 2 is " << numbers[2] << endl;
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[0] = 10;
    cout << "The number at index 0 in arr[0] = 10 is now " << arr[0] << endl;
    arr[1] *= 10;
    cout << "The number at index 1 in arr[1] *= 10 is now " << arr[1] << endl;
    arr[size-1]++;
    cout << "The last element in arr[size-1]++ has been incremented by one and it becomes "<<arr[size-1] <<endl;
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}