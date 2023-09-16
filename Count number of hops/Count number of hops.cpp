//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
    const int Mod = 1e9 + 7;

    long long solve(int n, vector<long long> &dp)
    {
        // Base cases
        if (n == 0)
            return 1;
        if (n < 0)
            return 0;

        // Check if the result is already computed
        if (dp[n] != -1)
            return dp[n];

        // Calculate the number of ways recursively
        long long ways = (solve(n - 1, dp) % Mod + solve(n - 2, dp) % Mod + solve(n - 3, dp) % Mod) % Mod;

        dp[n] = ways; // Store the result to avoid redundant calculations
        return ways;
    }

public:
    // Function to count the number of ways in which the frog can reach the top.
    long long countWays(int n)
    {
        vector<long long> dp(n + 1, -1);
        return solve(n, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    // taking testcases
    int t;
    cin >> t;

    while (t--)
    {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;
    }

    return 0;
}

// } Driver Code Ends