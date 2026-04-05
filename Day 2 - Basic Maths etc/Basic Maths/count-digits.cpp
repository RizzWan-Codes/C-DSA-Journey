#include <iostream>
using namespace std;

int countDigits (int n) {
    int count = 0;

    while (n > 0) {
        count++;

        n = n / 10;
    }

    return count;
}

int main () {

    int N;

    cout << "Enter a large number to count its digits: ";
    cin >> N;

    int digits = countDigits(N);

    cout << "Number of digits in " << N << " are: " << digits << endl;

    return 0;
}