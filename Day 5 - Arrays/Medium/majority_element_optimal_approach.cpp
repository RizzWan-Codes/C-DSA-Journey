// Boyer-Moore Algorithm (Time complexity - O(N)           Space Complexity - O(1))
#include <iostream>
#include <vector>
using namespace std;

int majority_element (vector<int>& arr) {
    int count = 0, element = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (count == 0) {
            element = arr[i];
        }

        if (arr[i] == element) {
            count++;
        } else {
            count--;
        }
    }
    return element;
}

int main () {
    vector<int> arr = {12, 5, 1, 7, 8, 12, 12, 12, 12, 12, 12, 8};

    int majority = majority_element(arr);

    cout << majority;
}