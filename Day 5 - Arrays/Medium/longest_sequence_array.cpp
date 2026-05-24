#include <iostream>
#include <vector>
#include <set>
using namespace std;

int longest_sequence_consecutive (vector<int>& arr) {
    set<int> st;
    int count = 0, longest = 0;
    int currentNum = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        st.insert(arr[i]);
    }

    for (int x : st) {
        if (st.find(x - 1) == st.end()) {
            currentNum = x;
            count = 1;
        
        while (st.count(currentNum + 1)) {
            currentNum++;
            count++;
        }
    longest = max(longest, count);
    }
}
    return longest;
}

int main () {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    
    int length = longest_sequence_consecutive(arr);

    cout << length;
}