#include<bits/stdc++.h>
using namespace std;

void sortLib(int arr[], int size) {
    sort(arr, arr+size);;
}

int main() {
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    sortLib(arr, size);
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}