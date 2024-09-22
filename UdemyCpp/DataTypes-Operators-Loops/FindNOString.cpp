#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of strings in a sentence:" << endl;
    cin >> n;
    vector<string> str(n);
    cout << "Enter the string:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << str[j] + " ";
    }
    cout << endl;

    // condition: string must contain 1 'N' or 'n' and 1 'O' or 'o'.
    for (int k = 0; k < n; k++)
    {
        string first = str[k];

        // size_t posN = first.find('N');
        // size_t posn = first.find('n');
        // size_t posO = first.find('O');
        // size_t poso = first.find('o');

        if (first.length() == 2)
        {
            // using find method
            // if ((posN != string::npos || posn != string::npos) && (posO != string::npos || poso != string::npos))
            //     &&((posN != posO) || (posn != poso))

            // using vector index
            if ((first[0] == 'N' || first[0] == 'n') && (first[1] == 'O' || first[1] == 'o') ||
                (first[0] == 'O' || first[0] == 'o') && (first[1] == 'N' || first[1] == 'n'))
            {
                cout << first << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
