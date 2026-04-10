#include <vector>
#include <iostream>
using namespace std;

vector<int> removeDuplicates (vector<int>& arr) {
    int i = 0;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1);

    return arr; 
}

int main () {
    vector<int> arr = {1, 1, 1, 2, 4, 4, 7, 12, 14, 14, 15, 17, 17, 17};

    arr = removeDuplicates(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}