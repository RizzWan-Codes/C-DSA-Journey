#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majority_element (vector<int>& arr) {
    unordered_map<int, int> mp;
    int maxFreq = 0;
    int element = 0;

    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }

    for (auto it: mp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            element = it.first;
        }
    }

    if (maxFreq > arr.size() / 2) return element;
    else return -1;
}

int main () {
    vector<int> arr = {12, 5, 1, 7, 8, 12, 12, 12, 12, 12, 12, 8};

    int majority = majority_element(arr);

    cout << majority;
}