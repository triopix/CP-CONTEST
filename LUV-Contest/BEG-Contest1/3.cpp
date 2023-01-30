#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    
    ll t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        // max is 2^60 so required long long for the calculation
        ll result = 0;
        ll p2 = 1;
        int count = 0;

        for(int i = s.size()-1; i >= 0; --i) {
            int bin_digit = s[i] - '0'; // getting 1 or 0
            p2 = pow(2, count);
            result += p2 * bin_digit;
            count++; // count will go from 0 - s.size() - 1 because of --i
        } 

        cout << result << endl;
    }
}