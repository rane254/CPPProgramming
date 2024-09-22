#include <iostream>
using namespace std;

int main()
{
    // int start,end;
    // cout<<"Enter the starting and ending num:"<<endl;
    // cin>>start>>end;

    // cout<<"Output:"<<endl;
    // while(start <= end)
    // {
    //     cout<<start<<endl;
    //     start++;
    // }

    int target;
    char character;
    cout<<"Enter the number of time the character should be displayed"<<endl;
    cout<<"Enter number followed by single character:"<<endl;
    cin>>target>>character;

    while(target>0)
    {
        cout<<character;
        target--;
    }
    cout<<endl;
    return 0;
}