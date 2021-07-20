#include<bits/stdc++.h>
using namespace std;

int sqrOfSum(int n)
{
    return n*n*(n+1)*(n+1)/4;
}

int sumOfSqrs(int n)
{
    return n*(n+1)*(2*n+1)/6;
}

int32_t main()
{
    const int x = 100;
    int ans = sqrOfSum(x) - sumOfSqrs(x);
    cout << ans;
    
    return 0;
}