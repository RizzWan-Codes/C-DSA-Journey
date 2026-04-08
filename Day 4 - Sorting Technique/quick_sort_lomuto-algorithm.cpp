#include <vector>
#include <iostream>
using namespace std;

// Lomuto's partitioning algorithm

int Partition (vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}

void quick_sort (vector<int>& arr, int left, int right) {
    if (left < right) {
        int Pi = Partition(arr, left, right);
        quick_sort(arr, left, Pi - 1);
        quick_sort(arr, Pi + 1, right);
    }
}

int main () {
    vector<int> arr = {7, 14, 3, 1, 20, 5, 18, 9, 4, 15, 6, 2, 19, 8, 17, 10, 11, 13, 16, 12};

    int left = 0;
    int right = arr.size() - 1;

    quick_sort(arr, left, right);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}