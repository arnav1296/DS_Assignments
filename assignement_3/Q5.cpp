#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix;
    cin >> postfix;
    stack<int> s;

    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if (c >= '0' && c <= '9') {
            s.push(c - '0'); // convert char to int
        } else { // operator
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            if (c == '+') s.push(a + b);
            else if (c == '-') s.push(a - b);
            else if (c == '*') s.push(a * b);
            else if (c == '/') s.push(a / b);
        }
    }

    cout << s.top() << endl;
    return 0;
}
