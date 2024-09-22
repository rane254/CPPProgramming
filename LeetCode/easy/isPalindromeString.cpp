#include<iostream>
#include<string>
using namespace std;

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            int temp,len;
            string str = to_string(x);
            len = str.length();
            int flag = true;
            for(int i=0;i<len;i++)
            {
                if(str[i] != str[len-1])
                {
                    flag = false;
                    break;
                }
                len--;
            }
            
            return flag;
        }
};

int main()
{
    Solution s1,s2,s3;
    bool result1 = s1.isPalindrome(121);
    bool result2 = s1.isPalindrome(-121);
    bool result3 = s1.isPalindrome(10);

    // Testing the results
    // For the first two cases, the numbers are palindromes, so the result should be true
    // For the third case, the number is not a palindrome, so the result should be false
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
}