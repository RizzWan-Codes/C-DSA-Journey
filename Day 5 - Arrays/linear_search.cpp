#include <vector>
#include <iostream>
using namespace std;

int returnIndexOfFoundNumberInArray (vector<int>& arr, int k) {
    for (int i = 0; i < arr.size(); i++) {
        if (k == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main () {
    vector<int> arr = {1, 2, 3, 5, 7, 8, 9, 10};
    int k = 6;

    int index = returnIndexOfFoundNumberInArray(arr, k);

    if (index == -1) cout << "Not found";
    else cout << "Found! : " << index;
}