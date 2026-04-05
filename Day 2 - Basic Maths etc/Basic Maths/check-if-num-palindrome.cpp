#include <iostream>
using namespace std;

bool NumIsPalindrome (int n) {
    int reversedNum = 0;
    int duplicate = n;

    while (n > 0) {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }

    if (reversedNum == duplicate) {
        return true;
    } else {
        return false;
    }
}

int main () {
    cout << "Enter a number to check if it is a palindrome: ";
    int input;
    cin >> input;

    if (NumIsPalindrome(input)) {
        cout << input << " is a palindrome number!";
    } else {
        cout << "No, " << input << " is not a palindrome number.";
    }

    return 0;
}