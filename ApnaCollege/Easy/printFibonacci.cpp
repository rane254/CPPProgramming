#include <iostream>
#include <vector>
using namespace std;

void printFibonacciSeries(int num)
{
    int firstTerm = 0, secondTerm = 1, nextTerm;

    cout << firstTerm << ", " << secondTerm << ", ";

    for (int i = 2; i < num; i++)
    {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        cout << nextTerm << ", ";
    }
}

void printFibArray(int num)
{
    vector<int> arr;

    if (num <= 0)
    {
        cout << "Invalid number" << endl;
        return;
    }

    arr.push_back(0);

    if (num > 1)
    {
        arr.push_back(1);
    }

    for (int i = 2; i < num; i++)
    {
        int next = arr[i - 1] + arr[i - 2];
        arr.push_back(next);
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    printFibArray(2);

    return 0;
}