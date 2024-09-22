#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 500) {
        cout << "Prime numbers between 2 and " << n << " are: ";

        for (int i = 2; i <= n; i++) {
            bool isPrime = true;

            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                cout << i << " ";
            }
        }

        cout << endl;
    } else {
        cout << "Please enter a number below 500." << endl;
    }

    return 0;
}
