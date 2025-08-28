#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> addSparse(vector<vector<int>> &sparse1, vector<vector<int>> &sparse2)
{
    vector<vector<int>> res;
    int i = 1, j = 1;
    int nonZero1 = sparse1[0][2];
    int nonZero2 = sparse2[0][2];
    res.push_back({sparse1[0][0], sparse1[0][1], 0});

    while (i <= nonZero1 && j <= nonZero2)
    {
        if (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] == sparse2[j][1])
        {
            res.push_back({sparse1[i][0], sparse1[i][1], sparse1[i][2] + sparse2[j][2]});
            i++;
            j++;
        }
        // else if is there to maintain row major order (in ascending)
        else if (sparse1[i][0] < sparse2[j][0] || (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] < sparse2[j][1]))
        {
            res.push_back(sparse1[i++]);
        }
        else
        {
            res.push_back(sparse2[j++]);
        }
    }
    // push remaining rows
    while (i <= nonZero1)
    {
        res.push_back(sparse1[i++]);
    }

    while (j <= nonZero2)
    {
        res.push_back(sparse2[j++]);
    }

    res[0][2] = res.size() - 1;

    return res;
}
int main()
{
    vector<vector<int>> A = {{3, 3, 5}, {0, 1, 1}, {0, 2, 2}, {1, 0, 3}, {1, 1, 4}, {2, 2, 8}};
    vector<vector<int>> B = {{3, 3, 4}, {0, 2, 1}, {1, 1, 1}, {1, 2, 2}, {2, 2, 3}};

    vector<vector<int>> res = addSparse(A, B);
    int row = res.size();
    int col = res[0].size();
    cout << "Result: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}