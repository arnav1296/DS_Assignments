#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n1; i++) {
        sum1+= s1[i];
    }
    for (int i = 0; i < n2; i++) {
        sum2 += s2[i];
    }
    if (sum1 == sum2) {
        return true;
    }
    return false;
}
int main() {
    cout << "Enter 2 strings: ";
    string s1, s2;
    cin >> s1 >> s2;
    if(isAnagram(s1,s2)) {
        cout << "Yes they are anagram";
    } else
    {
        cout << "NO they aint";
    }
    return 0;
}