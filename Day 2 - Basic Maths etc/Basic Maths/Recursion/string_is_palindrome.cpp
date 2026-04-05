#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    if (s[start] != s[end]) return false;

    if (start >= end) return true;

    return isPalindrome(s, start + 1, end - 1);
}

int main () {
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1)) {
        cout << s << " is a palindrome!";
    } else {
        cout << s << " is not a palindrome!";
    }

    return 0;
}