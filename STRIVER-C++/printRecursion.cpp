#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
    // Write Your Code Here
    if (x == 1)
    {
        return {1};
    }

    vector<int> result = printNos(x - 1);
    result.push_back(x);

    return result;
}

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << endl;
    for (auto i : printNos(x))
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}