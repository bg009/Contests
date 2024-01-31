#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
#define ll long long

    long long flowerGame(int n, int m)
    {

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                ans += (ll)(m / 2);
            }

            else
            {
                ans += (ll)(m / 2);
                if (m % 2 == 1)
                    ans++;
            }
        }

        return ans;
    }
};