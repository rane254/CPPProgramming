#include<iostream>
#include<utility>
using namespace std;
int main() {
    // use to combine together two values
    pair<int, int> p = {2, 3};
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first+p.second<<endl;

    // nested pair
    pair<int, pair<string, string>> q = {2, {"Hello", "World!"}};
    cout<<q.first<<" "<<q.second.first<<endl;

    // pair array
    pair<int, int> arr[] = {{1,2}, {2,3}, {3,4}};
    cout<<arr[1].second<<endl;

    return 0;
}