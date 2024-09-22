#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    string str;
    cout << "Enter the string: " << endl; // novigo
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count += 1;
            }
        }
        cout<<str[i]+":"+count<<endl;
        count = 1;
    }

    return 0;
}