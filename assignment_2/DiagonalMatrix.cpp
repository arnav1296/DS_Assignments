#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number of diagonal elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter diagonal elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    cout << "Diagonal matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
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