#include <bits/stdc++.h>
using namespace std;

class specialStack{
    stack<int> s;
    stack<int> minStack;
    public:
    void push(int x) {
        s.push(x);
        if (minStack.empty() || x < minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if(s.empty())
        return;
        s.pop();
        minStack.pop();
    }

    int peek() {
        if (s.empty()) {
            return -1;
        }
        return s.top();
    }
    int getMin() {
        return minStack.top();
    }

};


int main() {
    specialStack st;
    
    // st.push();
    st.push(9);
    st.push(2);
    st.push(5);
    st.push(6);

    cout << st.getMin() << endl;

    return 0;
}