#include <iostream>
using namespace std;

void printNamesNtimes (int n) {
    if (n > 0) {
        printNamesNtimes(n - 1);
        cout << "Rizwan" << "\n";
    } 
}

int main () {
    int n;
    cin >> n;
    printNamesNtimes(n);

    return 0;
}