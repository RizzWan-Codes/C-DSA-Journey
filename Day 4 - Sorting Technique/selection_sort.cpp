#include <iostream>
#include <vector>
using namespace std;

void selection_sort (vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted Array: " << endl;
    for (int x : arr) {
        cout << x << " ";
    }
}

int main () {
    vector<int> arr = {64, 25, 12, 22, 11};

    selection_sort(arr);
}