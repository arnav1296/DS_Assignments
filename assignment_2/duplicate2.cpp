#include <bits/stdc++.h>
using namespace std;
void dup_2(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            for (int j = n - 1; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 2;
            i++;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 2, 3, 4, 5};
    dup_2(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}