#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    // q1
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    // q2
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    // q3
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    // q4
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // q5
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    // q6
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    // q7
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n-i-1;j++) {
    //         cout<<" ";
    //     }

    //     for(int j=0;j<2*i+1;j++) {
    //         cout<<"*";
    //     }

    //     for(int j=0;j<n-i-1;j++) {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    // q8
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n - i; j <= n - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    // striver patterns a2zdsa
    int n;
    cout << "Enter the rows: ";
    cin >> n;
    pattern8(n);

    return 0;
}