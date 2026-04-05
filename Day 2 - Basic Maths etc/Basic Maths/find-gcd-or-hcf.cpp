#include <iostream>
using namespace std;

int findHCF (int num1, int num2) {
    int HCF;
    for (int i = 1; i <= min(num1, num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            HCF = i;
        }
    }

    return HCF;
}

int main () {
    cout << "Enter two numbers to find their HCF: ";
    int A, B;
    cin >> A >> B;

    int HCF = findHCF(A, B);

    cout << "HCF of " << A << " & " << B << " is " << HCF;

    return 0;
}