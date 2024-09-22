#include<bits/stdc++.h>
using namespace std;

void mapp() {
    // map<int, int> mapp;
    map<int, string> mapp;

    // mapp[1] = 5;
    // mapp.insert({3,15});
    // mapp.emplace(2,10);

    // for(auto it : mapp) {
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }
    int n, num;
    cout<<"Enter the test cases: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++) {
        cout<<"Enter the num: ";
        cin>>num;
        mapp.emplace(i, num);
    }

    cout<<"Key -> Value: "<<endl;
    for (auto it : mapp) {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    // assuming <key, value> -> <1, ram>, <2, shyam>, <3, ram>, <4, sita>, <5, ram>
    for (auto it : mapp) {
        if(it.second == "ram") {
            cout<<it.first<<endl;
        }
    }

}

void mmapp() {
    multimap<int, string> mmpp;

    mmpp.insert({1,"Brijesh"});
    mmpp.insert({1,"Rane"});;

    for(auto it : mmpp) {
        // cout<<it.first<<" -> "<<it.second<<endl;
        cout<<it.second<<" ";
        cout<<endl;
    }
}

int main() {

    // mapp();
    mmapp();
}