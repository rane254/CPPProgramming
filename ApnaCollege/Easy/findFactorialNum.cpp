#include <iostream>
using namespace std;

void findNFactNum(int num)
{
    int fact = 1, n = num;
    while (n > 0)
    {
        fact *= n;
        n--;
    }

    cout << "Factorial of " << num << " is " << fact << endl;
}

int main()
{
    findNFactNum(5); // 120
    return 0;
}