#include <bits/stdc++.h>
using namespace std;

bool isPelindrome(int n)
{
    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }

    return true;
}

int main()
{
    int ans = -1;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= i; j--)
        {
            if (i * j % 11 == 0 and isPelindrome(i * j))
            {
                ans = max(ans, i * j);
            }
        }
    }

    cout << ans;
    return 0;
}