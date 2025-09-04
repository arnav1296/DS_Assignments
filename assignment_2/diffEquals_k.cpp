#include <bits/stdc++.h>
using namespace std;
int diff(vector<int> &arr, int k) {
    int count = 0;
    for (int i  = 0; i < arr.size(); i++) {
        for (int j = i+1; j  < arr.size(); j++) {
            if (abs(arr[j] - arr[i]) == k) {
                count++;
            }
        }
    }
    return count;
}



int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: " <<endl;
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    int k;
    cout << "ENter k" << endl;
    cin >> k;
    cout << "Number of pairs is: " << diff(arr, k);

    return 0;
}