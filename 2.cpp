#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x = 0, y = 2;
    int sum = 0;

    const int M = 4e6;

    while (y < M)
    {
        sum += y;

        int t = 4 * y + x;
        x = y;
        y = t;
    }

    cout << sum;

    return 0;
}