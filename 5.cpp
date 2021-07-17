#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcm(int a, int b)
{
    int product = a * b;
    int gcd = __gcd(a, b);

    return product / gcd;
}

int32_t main()
{
    const int h = 20;

    int ans = 1;

    for (int i = 2; i <= h; i++)
    {
        ans = lcm(ans, i);
    }

    cout << ans;
}