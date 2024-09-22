#include<bits/stdc++.h>
using namespace std;

void lst() {
    list<int> ls;

    ls.push_back(5);
    for(auto it : ls) {
        cout<<it<<" ";
    }
    cout<<endl;

    ls.emplace_back(10);
    for(auto it : ls) {
        cout<<it<<" ";
    }
    cout<<endl;

    ls.push_front(15);
    for(auto it : ls) {
        cout<<it<<" ";
    }
    cout<<endl;

    ls.emplace_front(20);
    for(auto it : ls) {
        cout<<it<<" ";
    }
    cout<<endl;
}

void stackk() {
    stack<int> stk1, stk2;

    stk1 = {1, 2, 3}
    //push-> pop-> top -> size-> clear-> empty
    int ele;
    for(auto i=0;i<5;i++) {
        cin>>stk1.emplace(ele);
    }
    // stk1.push(1);
    int len = stk1.size();
    cout<<"Length: "<<len<<endl;
    cout<<"Top element: "<<stk1.top()<<endl;
    cout<<"Deleted element: "<<stk1.top()<<endl;
    stk1.pop();
    cout<<"Top element: "<<stk1.top()<<endl;
}


// remember main function is bottom of any function
int main() {
    // lst();
    // rest functions are similar to vector

    // dequeue is similar container like list with front and rear insertions and deletions
    // and can access elements using index like vector unlike list

    // stackk();

    

    return 0;
}