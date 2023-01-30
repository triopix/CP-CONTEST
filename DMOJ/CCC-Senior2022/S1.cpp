#include<bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main() {
    
    ull n;
    cin >> n;

    int count = 0;

    for(int i = 0; i < 1e6; i++) {

        int total = i * 5; // testing for all vals of 5
        int rem = n - total; // how much is left - lets see if its div by 4
        if(rem >= 0 and rem % 4 == 0) {
            count++; // for each val of 4
        }

    }
    cout << count << endl;
}