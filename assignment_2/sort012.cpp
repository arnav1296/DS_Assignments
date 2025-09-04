#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int> &arr)
{
    int c_0 = 0, c_1 = 0, c_2 = 0;
    for (int i : arr)
    {
        if (i == 0)
        {
            c_0++;
        }
        else if (i == 1)
        {
            c_1++;
        }
        else
        {
            c_2++;
        }
    }
    int index = 0;
    for (int i = 0; i < c_0; i++) {
        arr[index++] = 0;
    }
    for (int i = 0; i < c_1; i++) {
        arr[index++] = 1;
    }
    for (int i = 0; i < c_2; i++) {
        arr[index++] = 2;
    }
}
int main()
{
    vector<int> arr = {0,1,1,2,1,2,0,2,0,0,0,1};
    sort012(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}