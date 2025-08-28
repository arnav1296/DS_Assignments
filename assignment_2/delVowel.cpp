#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    string s, res;
    cout << "Enter string: ";
    cin >> s;

    for (char c : s) {
        if (!isVowel(c)) res += c;
    }

    cout << "String without vowels: " << res << endl;
    return 0;
}
