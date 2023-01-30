#include <bits/stdc++.h>
using namespace std;

using ll = long long;

char upper(char c)
{
    // lower - 32 = upper val from ascii table
    c = c - 32;
    return c;
}

int main()
{

    // we can use concept of infinite loops
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break; // stop until no string is entered
        }

        for (int i = 0; i < s.size(); ++i)
        {
            // define own function upper();
            s[i] = upper(s[i]);
        }

        cout << s << endl;
    }
}
