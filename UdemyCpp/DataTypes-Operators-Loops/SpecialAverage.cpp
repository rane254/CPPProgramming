#include <iostream>
using namespace std;
int main()
{
    int size, i, j = 0, sum = 0, avg_even, avg_odd;
    cout << "Enter the no. of elements" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements:" << endl;
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    for (j = 0; j <= size; j + 2)
    {
        sum = arr[j] * (arr[j] + 1) / 2;
    }
    avg_even = sum / 2;

    for (j = 1; j <= size; j = j + 2)
    {
        sum = arr[j] * (arr[j] + 1) / 2;
    }
    avg_odd = sum / 2;

    // cout<<"Array:"<<endl;
    // while(i<size)
    // {
    //     cout>>arr[i]<<" ";
    //     i++;
    // }

    cout << "Average of even elements is " << avg_even << endl;
    cout << "Average of odd elements is " << avg_odd << endl;

    return 0;
}