#include <iostream>
using namespace std;

int countFactors (int a) {
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    return count;
}

bool isPrime (int n) {

    int factors = countFactors(n);

    if (factors > 2) {
        return false;
    } else {
        return true;
    }
}

int main () {
    cout << "Enter a number to check if it is prime: ";
    int N;
    cin >> N;

    if (isPrime(N)) {
        cout << N << " is a prime number!";
    } else {
        cout << N << " is not a prime number!";
    }
    
    return 0;
}