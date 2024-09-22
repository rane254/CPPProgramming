#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size, target;
    vector<int> vec;

    cout << "Enter the size of an array: ";
    cin >> size;

    vec.resize(size); // Resize the vector to accommodate the elements

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> vec[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int result = linearSearch(vec, target);

    for (int v : vec)
    {
        cout << v << " ";
    }

    cout << endl;
    if (result > -1)
    {
        cout << target << " was found at index " << result << endl;
    }
    else
    {
        cout << target << " was not found" << endl;
    }

    return 0;
}