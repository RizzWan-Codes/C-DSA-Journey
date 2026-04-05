#include <iostream>
#include <vector>
using namespace std;

void recursive_bubble_sort (vector<int>& arr, int n) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    recursive_bubble_sort(arr, n - 1);
}

int main () {
    vector<int> arr = {5, 3, 8, 4, 2};
    int n = arr.size();

    recursive_bubble_sort(arr, n);
    
    for (int x : arr) {
        cout << x << " ";
    }
}