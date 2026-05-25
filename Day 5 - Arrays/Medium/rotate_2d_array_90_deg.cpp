#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArrayBy90Deg (vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    reverse(matrix.begin(), matrix.end());

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int main () {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateArrayBy90Deg(matrix);
}