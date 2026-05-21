// The array is only of 1 and 0's. We have to find what is the max number of consecutive one's in the array.

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes (vector<int>& arr) {
    int maxOnes = 0;
    int currentOnes = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            currentOnes++;
        } else {
            if (currentOnes > maxOnes) { 
                maxOnes = currentOnes; 
            }
            currentOnes = 0;
        }
    }
    if (currentOnes > maxOnes) return currentOnes;
    else return maxOnes;
}

int main () {
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1};

    int one = findMaxConsecutiveOnes(arr);

    cout << one;

    return 0;
}