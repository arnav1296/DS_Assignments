#include <bits/stdc++.h>
using namespace std;

void binarySearch (vector<int> &arr, int target) {
    bool isFound = false;
    int left = 0;
    int right = arr.size();
    while(left <= right) {
        int mid = (left+right) / 2;
        if (arr[mid] == target) {
            isFound = true;
            cout << "Found at index: " << mid;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        } 
    }
    if (!isFound) {
        cout << "Not found";
    } 
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
    int target;
    cout << "Enter target element: " << endl;
    cin >> target;
    binarySearch(arr, target);
    return 0;
}