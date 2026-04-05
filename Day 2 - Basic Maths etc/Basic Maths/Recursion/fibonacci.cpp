#include <iostream>
#include <vector>
using namespace std;

int Fibonacci (int n) {

    if (n <= 1) return n;

    int lastDigit = Fibonacci(n - 1);
    int secondLastDigit = Fibonacci(n - 2);

    return lastDigit + secondLastDigit;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 40) {
        cout << "That's... over limit bitch.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << Fibonacci(i) << " ";
    }

    return 0;
}
