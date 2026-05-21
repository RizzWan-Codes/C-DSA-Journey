#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK (vector<int>& arr, int k) {
    int maxLen = 0, i = 0, j = 0, sum = 0;

    while (j < arr.size()) {
        sum += arr[j];

        while (sum > k) {
            sum -= arr[i];
            i++;
        }

        if (sum == k) {
            int len = (j - i) + 1;
            maxLen = max(maxLen, len);
        }
        j++;
    }
    return maxLen;
}

int main () {
    vector<int> arr = {5, 5, 1, 1, 1, 1, 10};
    int k = 4;

    int result = longestSubarrayWithSumK(arr, k);
    
    cout << result;

    return 0;
}