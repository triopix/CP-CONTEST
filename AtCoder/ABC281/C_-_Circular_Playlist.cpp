#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long t;
    cin >> t;
    vector<int> a(n);
    for (auto& x : a) {
        cin >> x;
    }
    const long long rem = t % accumulate(begin(a), end(a), 0ll);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        if (sum + a[i] > rem) {
            cout << i + 1 << ' ' << rem - sum << '\n';
            return 0;
        }
        sum += a[i];
    }
    return 0;
}