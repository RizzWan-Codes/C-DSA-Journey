#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void calculate_lowest_highest_occurence (vector<int>& arr) {
    unordered_map<int, int> occurence;

    for (int i = 0; i < arr.size(); i++) {
        occurence[arr[i]]++;
    }

    int maxFreq = 0, minFreq = arr.size();
    int maxElement = 0, minElement = 0;

    for (const auto& it : occurence) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = element;
        }

        if (count < minFreq) {
            minFreq = count;
            minElement = element;
        }
    }

    cout << "The number with the most occurence is " << maxElement << " with occurence: " << maxFreq << endl;
    cout << "The number with the least occurence is " << minElement << " with occurence: " << minFreq;
}

int main () {
    vector<int> arr = {10, 5, 10, 15, 10, 5};

    calculate_lowest_highest_occurence(arr);
}