#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"Enter number 1, number 2 and number 3:\n";
    cin>>n1>>n2>>n3;

    if (n1 < n2 && n1 < n3)
    {
        cout<<"minimum number: "<<n1;
    }
    else if (n2 < n1 && n2 < n3)
    {
        cout<<"minimum number: "<<n2;
    }
    else
    {
        cout<<"minimum number: "<<n3;
    }
    return 0;
}
