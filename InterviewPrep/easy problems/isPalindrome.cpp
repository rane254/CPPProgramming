#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rev = 0, rem, temp;
        temp = x;
        while (x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }

        return rev == temp;
    }
};

int solve(string A)
{
    string rev = "";
    for (int i = 0; i < A.length(); i++)
    {
        rev = A[i] + rev;
        if (A.length() < 2)
        {
            return 0;
        }
        else
        {
            for (int i = 0, j = A.length() - 1; i < j; i++, j--)
            {
                if (A[i] != rev[j])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
}

int main()
{
    string A = "abcba";
    int res = solve(A);

    // int x = 123;
    // Solution s1;
    // bool result = s1.isPalindrome(x);
    // cout<<"Result of "<<x<<" is "<<result<<endl;

    return 0;
}