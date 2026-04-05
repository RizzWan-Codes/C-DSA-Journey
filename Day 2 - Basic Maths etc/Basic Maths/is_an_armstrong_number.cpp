#include <iostream>
#include <cmath>
using namespace std;

int countDigits (int a) {
    int count = 0;

    while (a > 0) {
        count++;

        a = a / 10;
    }

    return count;
}

bool isArmstrongNum (int n) {
    int dup = n;
    int sum = 0;

    int digits = countDigits(n);

    while (n > 0) {
        int lastDigit = n % 10;
        int raised = round(pow(lastDigit, digits));
        sum += raised;

        n = n / 10;
    }

    if (sum == dup) {
        return true;
    } else {
        return false;
    }
}

int main () {
    cout << "Enter a number to check if it is an armstrong number: ";
    int num;
    cin >> num;

    if (isArmstrongNum(num)) {
        cout << num << " is an armstrong number!";
    } else {
        cout << num << " is not an armstrong number!";
    }

    return 0;
}