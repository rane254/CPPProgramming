#include <iostream>
using namespace std;

void isUpperOrLowerChar(char input)
{
    // int asciiValue = input; // explicit conversion

    // implicitly conversion
    if (input >= 65 && input <= 90)
    {
        cout << "Character: " << input << " is uppercase." << endl;
    }
    else if (input >= 97 && input <= 122)
    {
        cout << "Character: " << input << " is lowercase." << endl;
    }
    else
    {
        cout << "Character is not an uppercase or lowercase character." << endl;
    }
}

int main()
{
    char x, input;

    while (true)
    {
        cout << "Enter any keyword to proceed or 'q' or 'Q' to quit: ";
        cin >> x;

        if (x == 'q' || x == 'Q')
        {
            cout << "Exiting...." << endl;
            break;
        }

        cout << "Enter the character: ";
        cin >> input;

        isUpperOrLowerChar(input);
    }

    return 0;
}