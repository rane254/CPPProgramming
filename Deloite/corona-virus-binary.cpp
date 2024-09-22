/*
Problem Statement :

Every decimal number can be changed into its binary form. Suppose your computer has it’s own CoronaVirus, that eats binary digits from the right side of a number. Suppose a virus has 6 spikes, it will eat up 6 LSB binary digits in your numbers.
You will have a bunch of numbers, and your machine will have a virus with n spikes, you have to calculate what will be the final situation of the final numbers.

Input Format:
First line, a single Integer N
Second line N space separated integers of the bunch of values as array V
Third line a single integer n, the number of spikes in Corona for Computer

Output Format:
Single N space separated integers denoting the final situation with the array v.
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, num;

    cout<<"Enter the size of numbers: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the numbers with space-seperated: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<"Enter the spikes: ";
    cin>>num;

    for(auto i: arr) {
        cout<<(i >> num)<<" ";
    }
    cout<<endl;

    return 0;
}