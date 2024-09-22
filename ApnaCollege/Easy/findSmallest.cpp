#include <iostream>
#include <vector>
using namespace std;

int findSmallest(vector<int> arr)
{
    arr.push_back(-1);  
    int smallest = INT_MAX; // +OO, if largest -> INT_MIN == -OO
    int len = arr.size();
    int smallestIndex;

    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }

        // smallest = min(arr[i], smallest); // implicit function
    }

    return smallestIndex;
}

int main()
{
    vector<int> arr = {5, 15, 22, 1, -15, 24};
    int result = findSmallest(arr);
    cout << "Array: { ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
    // cout << "Smallest Number: " << result << endl;
    cout << "Smallest Index: " << result << endl;

    return 0;
}