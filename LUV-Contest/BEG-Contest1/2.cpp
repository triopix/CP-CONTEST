#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    // no need to use arrays

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        ll product = 1;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x; // take each number and put it into product directly!
            product *= x;
        }

        int ls_dig = product % 10;

        if(ls_dig == 2 || ls_dig == 3 || ls_dig == 5) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}