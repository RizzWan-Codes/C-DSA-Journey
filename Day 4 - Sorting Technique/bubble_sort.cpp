#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble_sort (vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted Array Bubble Sort: " << endl;
    for (int x : arr) {
        cout << x << " ";
    }
}

int main () {
    vector<int> arr = {1, 2, 8, 3, 7, 12, 10, 17};
    bubble_sort(arr);
}