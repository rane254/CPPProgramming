#include<bits/stdc++.h>
using namespace std;

// int function which returns int value
int setBits(int n) {
    int result = __builtin_popcount(n);
    return result;
}

int main() {

    int num;
    cout<<"Enter the num: ";
    cin>>num;

    int res = setBits(num);
    cout<<"The Set Bits of "<<num<<" is "<<res<<endl;

    return 0;
}