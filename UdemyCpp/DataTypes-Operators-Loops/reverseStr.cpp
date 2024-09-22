#include<iostream>
using namespace std;

int main()
{
    int i;
    string str;
    string rev ="";
    cout<<"Enter the string"<<endl;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        rev = str[i]+rev;
    }
    cout<<rev<<endl;
    
    return 0;
}