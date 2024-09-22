#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string n) {
    int left, right;
    left = 0;
    right = n.length() - 1;

    while(left < right) {
        if(n[left] != n[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string n;
    cout<<"Enter the string: ";
    cin>>n;

    bool res = isPalindrome(n);

    if(res) {
        cout<<n<<" is Palindrome."<<endl;
    }
    else {
        cout<<n<<" is not Palindrome."<<endl;
    }

    return 0;
}