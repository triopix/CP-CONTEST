#include<bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main() {


    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s2 = "";

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        s2.push_back(s[i]);
    }

    cout << s2;
} 