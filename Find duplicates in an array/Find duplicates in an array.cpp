//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here

        vector<int> ans;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            freq[arr[i]]++;
        }

        for (auto it = freq.begin(); it != freq.end(); ++it)
        {
            if (it->second > 1)
            {
                ans.push_back(it->first);
            }
        }

        sort(ans.begin(), ans.end());

        if (ans.empty())
        {
            ans.push_back(-1); // If no duplicates are found, return -1 as specified
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends