#include <iostream>
#include <vector>
using namespace std;

// Hoare's partitioning algorithm

int Partition (vector<int>& arr, int left, int right) {
    int pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while (true) {
    do {
        i++;
    } while (arr[i] < pivot);

    do {
        j--;
    } while (arr[j] > pivot);

    if (i >= j) return j;

    swap(arr[i], arr[j]);
    }
}

void quick_sort (vector<int>& arr, int left, int right) {
    if (left < right) {
        int Pi = Partition(arr, left, right);

        quick_sort(arr, left, Pi);
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