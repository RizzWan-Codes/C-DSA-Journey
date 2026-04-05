#include <iostream>
#include <vector>
using namespace std;

void insertion_sort (vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted Array: ";
    for (int x : arr) {
        cout <<  x << " ";
    }
}

int main () {
    vector<int> arr = {5, 2, 8, 1, 3, 17, 10};

    insertion_sort(arr);
}