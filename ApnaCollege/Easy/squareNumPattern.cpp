#include <iostream>
using namespace std;

void printPattern(int n)
{
    int num = 1;
    // outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // inner loop for columns
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main()
{
    printPattern(4);
    return 0;
}