#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter a number between 1 - 3: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "\n" << "Monday";
            break;
        case 2:
            cout << "\n" <<  "Tuesday";
            break;
        case 3:
            cout << "\n" << "Wednesday";
            break;
        default:
            cout << "\n" << "Invalid";
            break;
    }
}