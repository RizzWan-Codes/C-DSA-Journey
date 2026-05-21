#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> rotate_k_times (vector<int>& arr, int n, int k, string direction) {
    k = k % n;

    for (char &ch : direction) {
        ch = tolower(ch);
    }

    if (direction == "right") {
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    } else if (direction == "left") {
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
    } else {
        cout << "Direction is not valid!!";
        return arr;
    }

    return arr;
}

int main () {
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int k = 0;
    string direction = "LeFt";

    arr = rotate_k_times(arr, n, k, direction);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}