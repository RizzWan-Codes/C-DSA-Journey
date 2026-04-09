#include <vector>
#include <iostream>
#include <climits>
#include <utility>
using namespace std;

pair<int, int> findSecondSmallestNum (vector<int>& arr) {
    int smallest = INT_MAX; // maximum possible value
    int second_smallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    return {smallest, second_smallest};
}

pair<int, int> findsSecondLargestSum (vector<int>& arr) {
    int largest = INT_MIN; // minimum possible value
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return {largest, secondLargest};
}

int main () {
    vector<int> arr = {12, 87, 45, 3, 68, 94, 21, 59, 77, 36};

    pair<int, int> small = findSecondSmallestNum(arr);
    pair<int, int> large = findsSecondLargestSum(arr);

    cout << "Smallest Number: " << small.first << " Second Smallest Number: " << small.second << endl;
    cout << "Largest Number: " << large.first << " Second Largest Number: " << large.second;

    return 0;
}

