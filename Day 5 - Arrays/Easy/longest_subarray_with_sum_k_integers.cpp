#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumKIntegers (vector<int>& arr, int k) {
    int maxLen = 0, sum = 0;
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) maxLen = i + 1;

        if (map.find(sum - k) != map.end()) {
            int len = i - map[sum - k];
            maxLen = max(maxLen, len);
        }

        if (map.find(sum) == map.end()) {
            map[sum] = i;
        }
    }
    return maxLen;
}

int main () {

    vector<int> v = {1, -1, 5, -2, 3};
    int k = 3;

    int result = longestSubarrayWithSumKIntegers(v, k);

    cout << result;

    return 0;
}