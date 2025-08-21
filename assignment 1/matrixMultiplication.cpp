#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    cout << "Enter the rows and cols of array1: ";
    cin >> m >> n;
    cout << "Enter the cols of array 2: ";
    cin >> p;
    int arr1[m][n];
    int arr2[n][p];
    int res[m][p];

    cout << "Enter elements for first matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for first matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}