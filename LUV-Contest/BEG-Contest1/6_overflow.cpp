// binomial coefficient questions! :)
#include<bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

// factorial function
ll fac(ll a) {
    if (a == 0 || a == 1) {
        return 1;
    } else {
        ll factorial = a * fac(a - 1);
        return factorial;
    }
}

int main() {
    
    ll t;
    cin >> t;

    while(t--) {

        ll n, ct = 0;
        cin >> n;

        while(ct < n) {

            for(ll i = 0; i <= ct; i++) {
                ll coeff = fac(ct) / (fac(i) * fac(ct - i));
                cout << coeff << " ";
            }

            cout << endl;

            ct++;
        }
    }
}