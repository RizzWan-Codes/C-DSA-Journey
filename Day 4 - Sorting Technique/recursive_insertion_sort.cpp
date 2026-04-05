#include <iostream>
#include <vector>
using namespace std;

void recursive_insertion_sort (vector<int>& arr, int n) {
    if (n == 1) return;

    recursive_insertion_sort(arr, n - 1);

    int temp = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > temp) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

int main () {
    vector<int> arr = {5, 3, 8, 4, 2};

    recursive_insertion_sort(arr, arr.size());

    for (int x : arr) {
        cout << x << " ";
    }
}

