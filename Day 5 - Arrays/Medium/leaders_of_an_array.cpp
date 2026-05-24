#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> leadersOfArray (vector<int>& arr) {
    vector<int> ans;
    if (arr.empty()) return;
    int maxVal = arr[arr.size() - 1];
    ans.push_back(maxVal);

    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main () {
    vector<int> arr = {10, 22, 12, 3, 0, 6};

    vector<int> result = leadersOfArray(arr);

    for (int x : result) {
        cout << x << " ";
    }
}