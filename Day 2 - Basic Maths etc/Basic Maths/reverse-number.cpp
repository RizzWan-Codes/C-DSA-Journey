#include <iostream>
using namespace std;

int reverseNumber (int num) {
    int reversedNum = 0;

    while (num > 0) {
        int lastDigit = num % 10;

        reversedNum = reversedNum * 10 + lastDigit;

        num = num / 10;
    }

    return reversedNum;
}

int main () {
    cout << "Enter a number to reverse it: ";
    int input;
    cin >> input;

    int reversedNumber = reverseNumber(input);
    cout << "Original Number: " << input << "\n" << "Reversed Number: " << reversedNumber << endl;
    return 0;
}