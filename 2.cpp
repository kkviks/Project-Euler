#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x = 0, y = 1;
    int sum = 0;

    const int M = 4e6;

    while (true)
    {
        if (~y & 1)
            sum += y;

        int t = x + y;
        x = y;
        y = t;

        if (y > M)
            break;
    }

    cout << sum;

    return 0;
}