#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr;
    vector<int> res;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j + 1] = arr[j];
                n--;
            }
        }
    }

    for (int i : arr)
    {
        cout << i;
    }

    return 0;
}