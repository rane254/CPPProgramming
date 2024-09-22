#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int num) {
    int digit;
    int rev = 0;
    while(num!=0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    return rev;
}

int main() {

    int num;
    cout<<"Enter the num: ";
    cin>>num;

    int temp = num;

    int res = isPalindrome(num);

    if(temp == res) {
        cout<<temp<<" is a Palindrome number."<<endl;
    }
    else {
        cout<<temp<<" is not a Palindrome number."<<endl;
    }

    return 0;
}