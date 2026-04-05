#include <iostream>
#include <vector>
using namespace std;

vector<int> printAllDivisors (int num) {
    vector<int> divisorsArr;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisorsArr.push_back(i);
        }
    }

    return divisorsArr;
}

int main () {
    cout << "Enter a number to see all of it's divisors: ";
    int N;
    cin >> N;

    vector<int> divisors = printAllDivisors(N);

    for (int divisor : divisors) {
        cout << divisor << " ";
    }

    return 0;
}