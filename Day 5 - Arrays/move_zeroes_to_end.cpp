#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd (vector<int>& arr) {

    int j = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    for (int i = j; i < arr.size(); i++) {
        arr[i] = 0;
    }
}

int main () {
    vector<int> arr = {1, 0, 2, 3, 0, 0, 4, 0, 5};

    moveZeroesToEnd(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}