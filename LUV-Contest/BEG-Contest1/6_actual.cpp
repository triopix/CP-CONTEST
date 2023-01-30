#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

const int N = 42;
ull a[N][N]; // big array to fit everything

// already optimized code - creates the entire pascal triangle
// prints the triangle for n vals if they don't exceed our N = 42
// although this can always be changed if the constraints are larger

void makePascal()
{
    a[0][0] = 1; // first will always be 1
    for (int i = 1; i < N; i++)
    {
        a[i][0] = 1; // the first element at ith row is one
        a[i][i] = 1; // the last element at ith row is one

        // fill the middle values - from 1 to but not including i-1
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; // filling the middle values
        }
    }
}

// prints the triangle
void printPascal(int &n)
{
    // printing the entire array for required amount of n!
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // pascals triangle right way
    int t;
    cin >> t;
    makePascal();
    while(t--) {
        int n;
        cin >> n;
        printPascal(n);
    }
}