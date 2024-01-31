#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        
        int ans = 0;
        
        for(int i = 0 ; i < s.size() - 1 ; i++)
        {
            if(s[i] == s[i + 1] || abs(s[i] - s[i + 1]) == abs('a' - 'A'))
                continue ;
            
            ans++;
        }
        
        return ans;
        
    }
};