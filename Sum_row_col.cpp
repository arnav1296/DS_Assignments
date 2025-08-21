#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows and cols: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter elements of the array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sum_rows = 0;
        for (int j = 0; j < n; j++)
        {
            sum_rows += arr[i][j];
        }
        cout << "Sum of row" << i + 1 << " is " << sum_rows << endl;
    }

    for (int i = 0; i < n; i++)
    {
        int sum_col = 0;
        for (int j = 0; j < m; j++)
        {
            sum_col += arr[j][i];
        }
        cout << "Sum of col" << i + 1 << " is " << sum_col << endl;
    }

    return 0;
}