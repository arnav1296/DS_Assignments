#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
cout << "ENter string: ";
cin >> s;
int len = s.length();
for (int i = 0; i < len/2; i++) {
    swap(s[i], s[len-i-1]);
}
cout << "Reversed string: " << s;
    return 0;
}