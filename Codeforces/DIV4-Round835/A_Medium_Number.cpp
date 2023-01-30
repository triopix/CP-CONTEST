#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a >= b && a <= c) || (a <= b && a >= c))
        {
            cout << a << endl;
        }

        if ((b >= a && b <= c) || (b <= a && b >= c))
        {
            cout << b << endl;
        }

        if ((c >= a && c <= b) || (c <= a && c >= b))
        {
            cout << c << endl;
        }
    }
}