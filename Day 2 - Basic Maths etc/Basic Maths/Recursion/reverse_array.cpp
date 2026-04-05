#include <iostream>
#include <vector>
using namespace std;

void reverse_array (vector<int>& arr, int start, int end) {
    if (start > end) return;

    swap(arr[start], arr[end]);

    reverse_array(arr, start + 1, end - 1);
}

int main () {
    vector<int> arr = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    reverse_array(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << " ";
    }
}