#include <iostream>
using namespace std;

string specializedWord (string s) {
    string result = "";
    if (s.length() <= 10) {
        return s;
    }
    else {
    char startLetter = s[0];
    char endLetter = s[s.length() - 1];
    string remainingLenght = to_string(s.length() - 2);

    result = startLetter + remainingLenght + endLetter;
    }
    return result;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string result = specializedWord(s);

        cout << result << endl;
    }
}