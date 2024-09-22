#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to find factorial:\n";
    cin>>n;
    int fact = 1;
    for (int i=2;i<=n;i++)
    {
        fact *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact;

    return 0;
}
