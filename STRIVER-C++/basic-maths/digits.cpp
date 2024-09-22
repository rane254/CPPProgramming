#include<stdio.h>
#include<iostream>
using namespace std;

int main() {

    int n = 7789;
    int digit,count = 0;
    while(n>0) {
        digit = n % 10;
        n /= 10;
        count++;
        
        cout<<digit<<" ";
    }
    cout<<endl;
    cout<<count<<endl;

    return 0;
}