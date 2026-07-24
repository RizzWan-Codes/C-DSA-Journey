#include <iostream>
using namespace std;

int main () {
    int n;
    int t = 4;
    while (t--) {
        cin >> n;
        if (t == 1) { 
        cout << "wtf is that";
        break;
        }
        if (n % 2 == 0) {
            cout << "Even" << endl;
        } 
        else {
        cout << "Odd" << endl;
    }
    
}
    return 0;
}