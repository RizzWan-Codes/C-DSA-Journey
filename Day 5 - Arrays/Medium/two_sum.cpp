// In this problem, we have to see if two numbers in an array have the sum equal to the target, if yes return their indices like
// [2, 4]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum (vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int needed = target - arr[i];
        if (mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }

        mp[arr[i]] = i;
    }
    return {};
}

int main () {
    vector<int> arr = {1, 8, 4, 9, 3, 2};
    int target = 7;

    vector<int> ans = twoSum(arr, target);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}