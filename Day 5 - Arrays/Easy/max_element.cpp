#include <iostream>
#include <vector>
using namespace std;

int findMaxElement (vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is Empty!" << endl;
        return -1;
    }

    int max = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
} 

int main () {
    vector<int> arr = {47, 92, 15, 63, 8, 76, 54, 29, 98, 38};

    int max = findMaxElement(arr);

    cout << "Largest element in array: "<< max;
}