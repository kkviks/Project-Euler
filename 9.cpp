#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int ans = -1;

    for (int a = 1; a <= 998; a++)
    {
        for (int b = a + 1; a + b <= 1000; b++)
        {
            int c = 1000 - a - b;
            if (c > b and c *c == a * a + b * b)
            {
                ans = a * b * c;
                goto f;
            }
        }
    }
f:
    cout << ans;
    cout.flush();
    return 0;
}