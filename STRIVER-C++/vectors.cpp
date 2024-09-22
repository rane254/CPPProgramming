#include <bits/stdc++.h>
using namespace std;
int main()
{
    // empty container
    vector<string> v1;
    vector<int> v(5, 10);
    v.push_back(1);
    v.emplace_back(2); // faster

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // faster

    // vector<int>::iterator it = v.begin(); // v -> [1],[2]
    // cout<<"First element in vector v"<<endl;
    // cout<<*(it)<<" "<<endl; // [1]
    // it++; //increase by 1 iterator
    // cout<<"Second element in vector v"<<endl;
    // cout<<*(it)<<" "<<endl; // [2]

    // two ways to access element from vector using [index] or using .at(index)
    cout<<v[1]<<" "<<vec.at(0).first<<endl;

    // for loop to print all vectors elements
    cout << "Printing vector elements using iterator and for loop" << endl;
    // auto keyword is like intellisense -> automatically knows what type of datatype it is
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // automatically identifies str as string datatype
    auto str = "Brijesh";
    cout << str << endl;

    // automatically identifies it as iterator datatype
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // removing elements based on address
    v.erase(v.end() - 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // removing elements based on range vector.erase(start address, end address)
    // end address should be the element above the element you want to delete
    v.erase(v.begin(), v.begin() + 5);
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << endl;

    v1.insert(v1.begin(), "brijesh");
    cout<<v1[0]<<endl;

    v1.insert(v1.end(), "rane");
    cout<<v1[1]<<endl;

    v1.insert(v1.end()-1, "s");
    cout<<v1[1]<<endl;

    for(auto s : v1) {
        cout<<s<<" ";
    }
    cout<<endl;

    // inserts elements (pos, occurence, element)
    v1.insert(v1.end()-1,2,"s");
    for(auto s : v1) {
        cout<<s<<" ";
    }
    cout<<endl;

    // removes the last element from the stack
    v1.pop_back();
    for(auto s : v1) {
        cout<<s<<" ";
    }
    cout<<endl;

    vector<int> v2;
    v.swap(v2);
    for(auto s : v2) {
        cout<<s<<" ";
    }
    cout<<endl;

    v2.clear();
    cout<<v.empty();

    return 0;
}