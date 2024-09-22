#include <stdio.h>
#include <iostream>
using namespace std;

// class always stays top of the code
class AsciiValue
{
private:
    char input;

public:
    // constructor
    // AsciiValue(char _input)
    // {
    //     this->input = _input;
    // }
    // constructor can be written in short hand syntax
    AsciiValue(char _input) : input(_input) {}

    // void function which prints the ascii value
    void printAsciiValue()
    {
        int asciiValue = input;
        cout << "ASCII value of " << input << ": " << asciiValue << endl;
    }
};

// followed by the main driver function
int main()
{
    // float price = 100.99;
    // int newPrice = (int)price;
    // char a = 'a';
    // char A = 'A';
    // int asciiValueOfA = A;
    // int asciiValueOfa = a;
    // cout << newPrice << endl;
    // cout << sizeof(newPrice) << endl; // 4
    // cout << sizeof(price) << endl;    // 4
    // cout << "a:" << asciiValueOfa << " A:" << asciiValueOfA << endl;

    char input;
    string x;

    // Loop to keep asking for input until 'q' is entered
    while (true)
    {
        cout << "Enter 'q' to quit or any other key to proceed: ";
        cin >> x;

        // If user inputs 'q', break the loop
        if (x == "q" || x == "Q")
        {
            break;
        }

        // Ask for a character input
        cout << "Enter a character: ";
        cin >> input;

        // Create AsciiValue object and print the ASCII value
        AsciiValue a1(input);
        a1.printAsciiValue();

    } // Infinite loop that breaks on 'q'

    return 0;
}
