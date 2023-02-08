#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    

    int t, w, ans = 0;
    
    cin >> t >> w;

    while(t--) {
        string st;
        cin >> st;
        for(int i = 0; i < w; i++) {
            if(st[i] == '#') {
                ans++;
            }
        }
    }

    cout << ans << endl;
}