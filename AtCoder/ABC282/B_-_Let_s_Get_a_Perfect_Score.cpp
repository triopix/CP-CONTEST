#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main()
{

    int N, M;
    cin >> N >> M;

    char a[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }

    // start at 0, go through till N - using 0 based indexing
    int count = 0;

    // string length
    for (int i = 0; i < N; i++) { // current strings up to N
        for (int j = i + 1; j < N; j++) { // all strings after it
            bool flag = true; // set flag to true
            for (int k = 0; k < M; k++) { // checks each character in both strings
                if (a[i][k] == 'x' && a[j][k] == 'x') { // if match, flag is false
                    flag = false;
                }
            }
            if (flag == true) { // if none of them match then count is updated
                count++;
            }
        }
    }

    cout << count << endl;
}