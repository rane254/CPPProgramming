#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the number: " << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    // pre-compute at-max = 12 
    int hash[13] = {0};
    for(int i=0;i<n;i++) {
        hash[arr[i]] += 1;
    }

    int num;
    cout << "Enter the size of the numbers: ";
    cin >> num;
    while(num--) {
        int number;
        cout<<"Enter the number: "<<endl;
        cin>>number;

        // fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}