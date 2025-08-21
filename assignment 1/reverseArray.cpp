#include <bits/stdc++.h>
using namespace std;

void rev(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rev(arr);

    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}