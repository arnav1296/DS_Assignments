#include <iostream>
using namespace std;

const int MAX_LEN = 100;

struct Stack {
    int element[MAX_LEN];
    int top;
};

Stack init() {
    Stack S;
    S.top = -1;
    return S;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == MAX_LEN - 1;
}

Stack push(Stack S, int t) {
    if (!isFull(S)) {
        S.top++;
        S.element[S.top] = t;
    } else {
        cout << "Overflow\n";
    }
    return S;
}

Stack pop(Stack S) {
    if (!isEmpty(S)) {
        S.top--;
    } else {
        cout << "Stack is already empty\n";
    }
    return S;
}

int main() {
    Stack S = init();
    S = push(S, 10);
    S = push(S, 20);
    S = push(S, 30);
    cout << S.element[S.top] << endl;
    S = pop(S);
    if (!isEmpty(S))
        cout << S.element[S.top] << endl;
    else
        cout << "Stack is empty\n";
    return 0;
}
