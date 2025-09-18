#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            if ((c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) 
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string expr;
    cin >> expr;
    if (isValid(expr))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    return 0;
}
