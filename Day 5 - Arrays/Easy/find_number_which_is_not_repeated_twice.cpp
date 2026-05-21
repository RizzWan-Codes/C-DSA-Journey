// In this problem, we have to find a number in an array which is not repeated twice unlike all the others:
// Ex : {1, 3, 5, 3, 1, 4, 5, 4, 2} -> Here we can see all the numbers are repeated twice except 2 so we return 2
#include <iostream>
#include <vector>
using namespace std;   

int findNumberWhichIsNotRepeatedTwice (vector<int>& arr) {
    // We can use the XOR properties here: a ^ a = 0, a ^ 0 = a; So we can do a ^ a and whatever is left is non zero, that is our answer

    int not_repeated = 0;

    for (int i = 0; i < arr.size(); i++) {
        not_repeated ^= arr[i];
    }
    return not_repeated;
}

int main () {
    vector<int> arr = {1, 3, 5, 3, 1, 4, 5, 4, 2};

    int not_repeated = findNumberWhichIsNotRepeatedTwice(arr);

    cout << not_repeated;
}