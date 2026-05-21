#include <iostream>
#include <vector>
using namespace std;

vector<int> moveLeftByOne (vector<int>& arr) {
    int lastElement = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = lastElement;

    return arr;
}

int main () {
    vector<int> arr = {1, 2, 3, 4, 5};

    arr = moveLeftByOne(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}