#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:

vector<int> alternate_positives_negatives (vector<int>& arr) {
    vector<int> pos, neg, ans;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    for (int i = 0; i < pos.size(); i++) {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }

    return ans;
}

};

int main () {
    vector<int> arr = {3,1,-2,-5,2,-4};

    Solution sol;

    vector<int> result = sol.alternate_positives_negatives(arr);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}