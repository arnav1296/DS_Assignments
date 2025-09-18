#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4,5,2,10,8};
    stack<int> s;
    int n = arr.size();
    vector<int> res(n);

    for (int i = n-1; i >= 0; i--) {
        while(!s.empty() && arr[i] >= s.top()) {
            s.pop();
        }

        if (s.empty()) {
            res[i] = -1;
        } 
        else {
            res[i] = s.top();
        }
       
        s.push(arr[i]);
        
    }

    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}