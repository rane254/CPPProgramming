#include <iostream>
#include <vector>
using namespace std;

int printUniqueValues(vector<int> &arr)
{
    int ans = 0;
    for (int val : arr)
        ans ^= val;
    return ans;
}

int main()
{
    int size, ele;
    cout << "Enter the size of an array: ";
    cin >> size;

    vector<int> arr(size, 0);

    cout << "Enter the elements followed by space: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = printUniqueValues(arr);
    cout << "Unique Value: " << result << endl;

    return 0;
}