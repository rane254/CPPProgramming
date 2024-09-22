#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int> &vec)
{
    int first = 0, second = vec.size() - 1;
    while (first < second)
    {
        int temp = vec[first];
        vec[first] = vec[second];
        vec[second] = temp;
        first++;
        second--;
    }
}

main()
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

    reverseVec(vec);
    cout << endl;

    cout << "Reverse Vector: ";
    for (int v : vec)
    {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}