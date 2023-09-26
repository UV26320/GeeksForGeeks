//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0;
        map<vector<int>, int> m;
        while (i < n - 3)
        {
            int start = i + 1;
            while (start < n - 2)
            {
                int left = start + 1;
                int right = n - 1;
                while (left < right)
                {
                    if (arr[i] + arr[start] + arr[left] + arr[right] == k)
                    {
                        if (m.find({arr[i], arr[start], arr[left], arr[right]}) == m.end())
                        {
                            ans.push_back({arr[i], arr[start], arr[left], arr[right]});
                            m[{arr[i], arr[start], arr[left], arr[right]}] = 1;
                        }
                        left++;
                        right--;
                    }
                    else if (arr[i] + arr[start] + arr[left] + arr[right] < k)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
                start++;
            }
            i++;
        }
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.fourSum(a, k);
        for (auto &v : ans)
        {
            for (int &u : v)
            {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends