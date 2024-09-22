#include <iostream>
using namespace std;

int main()
{
    int add,sub,div,mul;
    int num1,num2;
    int choice;

    while(true)
    {
        cout<<"\nEnter your choice:\n 1. Addition\n 2. Subtraction\n 3. Division\n 4. Multiplication\n";
        cin>>choice;


        if (choice == 5)
        {
            cout<<"Exiting...";
            break;
        }

        cout<<"Enter the number 1:\n";
        cin>>num1;
        cout<<"Enter the number 2:\n";
        cin>>num2;

        add = num1 + num2;
        sub = num1 - num2;
        div = num1 / num2;
        mul = num1 * num2;

        switch (choice)
        {
            case 1:
            {
                cout<<"\nAddition: "<<add;
                break;
            }

            case 2:
            {
                cout<<"\nSubtraction: "<<sub;
                break;
            }

            case 3:
            {
                cout<<"\nDivision: "<<div;
                break;
            }

            case 4:
            {
                cout<<"\nMultiplication: "<<mul;
                break;
            }

            default:
            {
                cout<<"wrong operation!";
                break;
            }
        }
    }
    return 0;
}
