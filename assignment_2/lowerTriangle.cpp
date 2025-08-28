#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENter size of matrix: ";
    cin >> n;
    cout << "Enter non zero elements row wise: " << endl;
    int nonZero = n * (n + 1) / 2;
    vector<int> arr(nonZero);
    for (int i = 0; i < nonZero; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << arr[k++] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}