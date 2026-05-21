#include <iostream>
#include <vector>
using namespace std;

void sort_0_1_2 (vector<int>& arr) {
    int left = 0, mid = 0, right = arr.size() - 1;

    while (mid <= right) {
        if (arr[mid] == 0) {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[right], arr[mid]);
            right--;
        }
    }
}

int main () {
    vector<int> arr = {2,0,1,2,1,0};

    sort_0_1_2(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}