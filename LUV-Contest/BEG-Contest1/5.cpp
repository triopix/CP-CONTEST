#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int lcf(int a, int b) {

    // highest factor = a*b so lcm will be gcf when no other factor present
    int result;
    for(int i = 1; i <= a*b; i++) {
        if((i % a == 0) && (i % b == 0)) {
            result = i;
            break; // lowest one found!
        }
    }

    return result;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int cth_num;

    // we want to run infinite loop from 2 - infinity
    for(int i = 2; c > 0; i++) {
        // there will only be c iterations of this loop
        if(i % a == 0 || i % b == 0) { // only need to check if one of them are good!
            
            // if n is part of both a and b, then n part of a = true and n part of b = true = (true or true) = true
            cth_num = i; // the last cth num when c is finished will be the num
            c--; // there will only be c iterations
        }
    }

    int step_value;

    if((cth_num % a == 0) && (cth_num % b == 0)) {
        step_value = lcf(a, b);
    } else if(cth_num % a == 0) {
        step_value = a;
    } else {
        step_value = b;
    }

    for(int i = cth_num; i >= 0; i-=step_value) {
        cout << i << " ";
    }
}