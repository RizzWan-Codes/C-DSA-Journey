#include <iostream>
using namespace std;

void printAllNumbersTillN (int current, int n) {

    if (current <= n) {
        cout << current << endl;
        printAllNumbersTillN(current + 1, n);
    }
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printAllNumbersTillN(1, n);
}