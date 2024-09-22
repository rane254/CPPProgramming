#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the num1 and num2"<<endl;
    cin>>num1>>num2;

    if(num1>num2)
    {
        cout << "largest number is " << num1 <<endl;
    }
    else
    {
        cout << "largest number is " << num2 <<endl;
    }
    

    return 0;
}