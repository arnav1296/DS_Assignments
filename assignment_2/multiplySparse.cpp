#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multiplySparse(vector<vector<int>>& A, vector<vector<int>>& B) {
    int rows = A[0][0];
    int cols = B[0][1];

   
    vector<vector<int>> full(rows, vector<int>(cols, 0));

    
    for (int i = 1; i <= A[0][2]; i++) {
        for (int j = 1; j <= B[0][2]; j++) {
            if (A[i][1] == B[j][0]) {
                full[A[i][0]][B[j][1]] += A[i][2] * B[j][2];
            }
        }
    }

    
    vector<vector<int>> res;
    int nonZero = 0;
    res.push_back({rows, cols, 0});
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (full[i][j] != 0) {
                res.push_back({i, j, full[i][j]});
                nonZero++;
            }

    res[0][2] = nonZero; // update non-zero count
    return res;
}

int main() {
    // example
    vector<vector<int>> A = {
        {2, 3, 2},
        {0, 0, 1},
        {1, 2, 2}
    };

    vector<vector<int>> B = {
        {3, 2, 2},
        {0, 1, 3},
        {2, 0, 4}
    };

    vector<vector<int>> C = multiplySparse(A, B);

    cout << "Resultant Sparse Matrix:\n";
    for (int i = 0; i < C.size(); i++){
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

}
