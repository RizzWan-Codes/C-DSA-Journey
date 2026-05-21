#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion (vector<int>& arr1, vector<int>& arr2) {
    vector<int> ansArr;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (ansArr.empty() || ansArr.back() != arr1[i]) {
                ansArr.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (ansArr.empty() || ansArr.back() != arr2[j]) {
                ansArr.push_back(arr2[j]);
            }
            j++;
        } else {
            if (ansArr.empty() || ansArr.back() != arr1[i]) {
                ansArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < arr1.size()) {
        if (ansArr.empty() || ansArr.back() != arr1[i]) {
        ansArr.push_back(arr1[i]);
    }
            i++;
    }

    while (j < arr2.size()) 
    {
        if (ansArr.empty() || ansArr.back() != arr2[j]) {
        ansArr.push_back(arr2[j]);
    }
        j++;
    }
    
    return ansArr;
}

int main () {
    vector<int> arr1 = {1, 2, 2, 3, 5};
    vector<int> arr2 = {2, 3, 4, 4, 6};

    vector<int> result = findUnion(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}