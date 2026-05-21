#include <iostream>
using namespace std;

void removeNCharacters (string &s, int k) {
    s.erase(0, k);
    s.erase(s.length() - k, s.length());
}

int main () {
    string s;
    int k;
    cin >> s;
    cin >> k;

    removeNCharacters(s, k);

    cout << s;
}