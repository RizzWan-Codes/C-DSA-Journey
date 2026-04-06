#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
}

void merge_sort (vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main () {
    vector<int> arr = {17, 3, 25, 9, 1, 14, 8, 20, 6, 11, 2, 19, 5, 13, 7, 18, 4, 16, 10, 12};

    int left = 0;
    int right = arr.size() - 1;

    merge_sort(arr, left, right);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}