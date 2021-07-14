#include <bits/stdc++.h>
using namespace std;
#define int long long

void brute_force()
{
    int sum = 0;

    for (int i = 3; i < 1000; i += 3)
    {
        sum += i;
    }

    for (int i = 5; i < 1000; i += 5)
    {
        if (i % 3 != 0)
            sum += i;
    }

    cout << sum << endl;
}

int n_count(int d)
{
    if ((1000 - d) % d == 0)
        return (1000 - d) / d;

    return (1000 - d) / d + 1;
}

void ap()
{
    int n = n_count(3);
    int sum = (n) * (3 + 999) / 2;

    n = n_count(5);
    sum += n * (5 + 995) / 2;

    n = n_count(15);
    int last = 15 + (n - 1) * 15;

    sum -= n * (15 + last) / 2;

    cout << sum << endl;
}

int32_t main()
{

    brute_force();
    ap();

    return 0;
}