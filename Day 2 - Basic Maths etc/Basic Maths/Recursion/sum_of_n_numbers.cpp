#include <iostream>
using namespace std;

int sumOfDigits (int n) {
    int sum = 0;

    if (n == 1) {
        return 1;
    }

    return n + sumOfDigits(n - 1);
}

int main () {
    int n;
    cin >> n;

    int sum = sumOfDigits(n);

    cout << sum;
}