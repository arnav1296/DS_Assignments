#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENter size of matrix: ";
    cin >> n;
    cout << "Enter lower triangle elements row wise: " << endl;
    int nonZero = n * (n + 1) / 2;
    vector<int> arr(nonZero);
    for (int i = 0; i < nonZero; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                int k = i * (i + 1) / 2 + j;
                cout << arr[k] << " ";
            }
            else
            {
                int k = j * (j + 1) / 2 + i;
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
}
