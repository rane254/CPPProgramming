#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
  // Write your code here.
  string rev = "";
  for (int i = 0; i < str.length(); i++)
  {
    rev = str[i] + rev;
  }

  return rev;
}

int main()
{
  string str;
  cout << "Enter the string: ";
  cin >> str;
  string res = reverseString(str);

  if (str == res)
  {
    cout << res << " is a reverse of " << str << endl;
  }
  else
  {
    cout << res << " is not a reverse of " << str << endl;
  }

  return 0;
}