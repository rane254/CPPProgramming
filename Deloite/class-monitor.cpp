/*
Problem Statement :

After JEE Mains, some students got admission into an engineering college. Now there is a class consisting of such n students, and the HOD came to say it is time to select the class monitor. But He never gets all of them at one time. So he brought a register, every time he gets someone with less rank than the previous time he cut the name and wrote the name of the student and the rank.
For a given number of ranks he gets each time, you have to predict how many names are cut in the list.

Constraints:
Number of Visiting<=10^9
ranks <=10000

Input Format:
Number of Visiting N in their first line
N space separated ranks the HOD gets each time

Output Format:
Number of ranks cut in the list
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, n;
    cout << "Enter the number of students: ";
    cin >> n;

    // int arr[n];
    vector<int> arr(n);
    
    cout<<"Enter the student rank with space-seperated: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];
    for (int j = 1; j < n; j++)
    {
        if (arr[j] < max) {
            count++;
        }
    }

    cout<<"Count: "<<count<<endl;

    return 0;
}