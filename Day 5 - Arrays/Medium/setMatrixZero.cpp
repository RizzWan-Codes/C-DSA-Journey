#include <iostream>
#include <vector>
using namespace std;

void setMatrixZero (vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int col = matrix[0].size();

    vector<int> Zrow, Zcol;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 0) {
                Zrow.push_back(i);
                Zcol.push_back(j);
            }
        }
    }

    for (int i = 0; i < Zrow.size(); i++) {
        for (int j = 0; j < col; j++) {
            matrix[Zrow[i]][j] = 0;
        }
    }

    for (int i = 0; i < Zcol.size(); i++) {
        for (int j = 0; j < rows; j++) {
            matrix[j][Zcol[i]] = 0;
        }
    }
}

void printArray (vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main () {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    setMatrixZero(arr);

    printArray(arr);
}