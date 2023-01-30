#include <bits/stdc++.h>
using namespace std;

using ll = long long;


char upper(char c) {
    return c - 32;
}

char lower(char c) {
    return c + 32;
}

int main() {

    string s;
    // string mod = ""; strings are mutable so we can do anything on it
    getline(cin, s);

    for(auto& c : s) {
        if(c >= 'a' && c <= 'z') {
            c = upper(c); // change letters from lower to upper
        } else {
            c = lower(c); // change letters from lower to upper
        }
    }


    ll sum = 0;
    for(auto& c : s) {
        if(c >= 'A' && c <= 'Z') {
            sum += c;
        } else {
            sum -= c;
        }
    }

    if(sum < 0) {
        sum *= -1; // equivalent to abs(sum);
    }

    // see if prime
    int prime = 0;
    for(int i = 2; i < sum; i++) {
        if(sum % i == 0) {
            prime = 1;
            break;
        }
    }

    cout << (prime ? 0 : 1) << endl;

}