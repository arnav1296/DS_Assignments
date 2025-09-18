#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
};
int main() {
    string infix, postfix = "";
    cin >> infix;
    stack<char> s;


    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (c >= 'A' && c <= 'Z') postfix += c;
        else if (c == '(') s.push(c);
        else if (c == ')') {
            while (s.top() != '(') { postfix += s.top(); s.pop(); }
            s.pop();
        } else {
            while (!s.empty() && s.top() != '(' && prec(s.top()) >= prec(c)) {
                postfix += s.top(); s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) { postfix += s.top(); s.pop(); }

    cout << postfix << endl;
}
