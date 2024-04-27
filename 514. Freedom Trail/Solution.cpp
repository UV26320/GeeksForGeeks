#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int solve(string &ring, string &key, int ptr, int index , vector<vector<int>> &dp)
    {

        int n = ring.size();
        int m = key.size();

        // base case
        if (index >= m)
            return 0;
        
        if(dp[index][ptr] != -1) return dp[index][ptr];
        

        // recursive call (choices...)
        int steps = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (ring[i] == key[index])
            {
                steps = min(steps, min(abs(i - ptr), n - abs(i - ptr)));
            }
        }
        return dp[index][ptr] = steps;
    }

public:
    int findRotateSteps(string ring, string key)
    {
        
        int ptr = 0;
        int index = 0;

        int n = ring.size();
        int m = key.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

        solve(ring, key, ptr, index,dp);
    }
};