#include <bits/stdc++.h>
using namespace std;

int main() {
string s1, s2;
cout << "Enter string 1";
cin >> s1;
cout << "Enter string 2";
cin >> s2;

int len1 = s1.length(); 

for (int i = 0; i < len1; i++) {
    s1 += s2[i];
}

cout << "Concatenated strings: " << s1 << endl;
    return 0;
}