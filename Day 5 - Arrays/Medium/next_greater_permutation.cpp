#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void convertIntoNextLexographicalGreaterPermutation (vector<int>& arr) {
    int bpIndex = -1, requiredIndex = -1;

    for (int i = arr.size() - 1; i > 0; i--) {
        if (arr[i - 1] < arr[i]) {
            bpIndex = i - 1;
            break;
        }
    }

    if (bpIndex == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    for (int i = arr.size() - 1; i > bpIndex; i--) {
        if (arr[i] > arr[bpIndex]) {
            requiredIndex = i;
            break;
        }
    }

    swap(arr[bpIndex], arr[requiredIndex]);

    reverse(arr.begin() + bpIndex + 1, arr.end());
} 

int main () {
    vector<int> arr = {1, 9, 8, 7, 6};

    convertIntoNextLexographicalGreaterPermutation(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}