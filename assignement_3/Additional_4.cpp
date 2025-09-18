#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 4, 2, 2, 1, 0, -1, 10, 3, 20};
    int n = arr.size();
    vector<int> ans(n, 0);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        
        while (!s.empty() && arr[i] >= arr[s.top()]) {
            s.pop();
        }
    
        if (!s.empty()) {
            ans[i] = s.top() - i; 
        }

        s.push(i);
    }

    for (int i : ans) cout << i << " ";
    return 0;
}
