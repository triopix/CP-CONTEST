#include<bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main() {

    // constraints call for bigger size of N
    ull n;
    cin >> n;

    string s;
    cin >> s;

    bool found = true;
    for(int i = 0; i < n; i++) {
        if(found && s[i] == ',') {
            s[i] = '.';
        }

        if(s[i] == '"') {
            found = !found;
        }
    }

    cout << s << endl;

    // found is false
    // if you find a double quote - set found = true
    // add it to another string and continue
    // continue loop until finding another double quote where set it to false



    

}