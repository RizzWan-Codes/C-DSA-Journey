    #include <vector>
    #include <iostream>
    using namespace std;

    int findMissingNumber (vector<int>& arr) {
        int xor1 = 0, xor2 = 0;

        for (int i = 1; i <= arr.size() + 1; i++) {
            xor1 = xor1 ^ i;
        }

        for (int i = 0; i < arr.size(); i++) {
            xor2 = xor2 ^ arr[i];
        }

        return xor1 ^ xor2;
    }

    int main () {
        vector<int> arr = {1, 3, 4, 5, 6};

        int missing = findMissingNumber(arr);

        cout << missing;
    }