#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &sparse) {
    int rows = sparse[0][0];
    int cols = sparse[0][1];
    int nonZero = sparse[0][2];
    
    vector<vector<int>> res(nonZero+1, vector<int>(3));
    
    res[0][0] = cols;
    res[0][1] = rows;
    res[0][2] = nonZero;

    
    int k = 1;
    for (int i = 0; i < cols; i++) {
        for (int j = 1; j <= nonZero; j++) {
             if (sparse[j][1] == i) {
                res[k][0] = sparse[j][1];
                res[k][1] = sparse[j][0];
                res[k][2] = sparse[j][2];
                k++;
             }
        }
    }
    return res;
}


int main() {
    int rows, cols, nonZero;
    cout << "Enter rows and cols: " << endl;
    cin >> rows >> cols;
    
    cout << "Enter number of non zero elements: " << endl;\
    cin >> nonZero;

    vector<vector<int>> mat(nonZero+1, vector<int>(3));

    mat[0][0] = rows;
    mat[0][1] = cols;
    mat[0][2] = nonZero;

    cout << "Enter row, col and val for each non-zero element";
    for (int i = 1; i <= nonZero; i++) {
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
    }

    vector<vector<int>> res = transpose(mat);

    for (int i = 0; i <= nonZero; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}