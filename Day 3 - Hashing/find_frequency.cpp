#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findFrequencyOfArray (vector<int>& arr) {
    unordered_map<int, int> frequency;

    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i]]++;
    }

    for (const auto& x : frequency) {
        cout << x.first << " " << x.second << endl;
    }
}

int main () {
    vector<int> arr = {10, 5, 15, 10, 3, 5, 5, 3, 10, 15, 18};

    findFrequencyOfArray(arr);
}