//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void solve(int cur, int N, vector<int> &ans, int dx)
    {
        ans.push_back(cur);

        if (cur <= 0)
            dx = 5;

        if (cur < N or dx == -5)
            solve(cur + dx, N, ans, dx);
    }

    vector<int> pattern(int N)
    {
        vector<int> ans;
        solve(N, N, ans, -5);

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        vector<int> ans = ob.pattern(N);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends