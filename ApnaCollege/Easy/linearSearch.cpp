#include <iostream>
using namespace std;

int linearSearchOp(int *arr, int len, int target)
{
    int size = len;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
};

int main()
{
    int arr[7] = {4, 2, 7, 8, 1, 2, 5};
    int res = linearSearchOp(arr, 7, 8);
    if (res != -1)
    {
        cout << "Found element 8 at index " << res << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}