#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
#define ll long long
    int maximumLength(vector<int> &v)
    {

        int ans = 0;
        sort(v.begin(), v.end());
        set<int> vis;
        map<int, int> m;

        for (auto &x : v)
        {
            m[x]++;
        }

        for (auto &x : v)
        {
            if (x == 1)
            {
                int t = m[1];

                if (t % 2 == 0)
                    t--;

                ans = max(ans, t);
                continue;
            }
            if (vis.find(x) != vis.end())
                continue;

            vis.insert(x);
            ll a = x;

            int temp = 0;

            while (m[a])
            {
                ans = max(ans, temp + 1);
                vis.insert(a);
                if (m[a] == 1)
                {
                    temp++;
                    break;
                }

                temp += 2;

                if (a + 10000 >= INT_MAX)
                    break;

                a = a * a;
            }
        }

        return ans;
    }
};