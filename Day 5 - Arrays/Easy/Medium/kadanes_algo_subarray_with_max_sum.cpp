#include <iostream>
#include <vector>
#include <climits>
#include <utility>
using namespace std;

vector<int> max_sum_of_subarray (vector<int>& arr) {
    
    int sum = 0;
    int maxNum = INT_MIN;
    int ansStart = -1, ansEnd = -1, start = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (sum < 0) {
            sum = 0;
            start = i;
        }

        sum += arr[i];

        if (sum > maxNum) {
            maxNum = sum;
            ansStart = start;
            ansEnd = i;
        }
    }

    return {maxNum, ansStart, ansEnd};
}

int main () {
    vector<int> arr = {2, 3, -7, 4, 7, -4};

    vector<int> result = max_sum_of_subarray(arr);

    int maxNum = result[0];
    pair<int, int> indices = {result[1], result[2]};

    if (indices.first == -1) return -1;

    cout << "Max Sum Of Subarray: " << maxNum << endl;

    cout << "The Subarray: " << endl;
    vector<int> subarray(arr.begin() + indices.first, arr.begin() + indices.second + 1);

    for (int x : subarray) {
        cout << x << " ";
    }

    return 0;
}