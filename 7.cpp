#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(),x.end()
 

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n=1e6;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
      if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
          is_prime[j] = false;
      }   
    }

    cout << count(is_prime.begin(), is_prime.end(),true) << endl;

    int x = 10001;
    int xth_prime = -1;
    
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]==true)
        {
            x--;
            if(x==0)
            {
                xth_prime = i;
                break;
            }
        }
    }

    cout << '\n' << "Ans = " << xth_prime; 
    cout.flush();
    return 0;
}