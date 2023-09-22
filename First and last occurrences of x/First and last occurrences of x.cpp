//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int bs1(int arr[], int l, int r, int x)
    {
        int res = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (arr[m] < x)
                l = m + 1;
            else
            {
                if (arr[m] == x)
                    res = m;
                r = m - 1;
            }
        }
        return res;
    }

    int bs2(int arr[], int l, int r, int x)
    {
        int res = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (arr[m] > x)
                r = m - 1;
            else
            {
                if (arr[m] == x)
                    res = m;
                l = m + 1;
            }
        }
        return res;
    }

    vector<int> find(int arr[], int n, int x)
    {
        int li = bs1(arr, 0, n - 1, x);
        int ri = bs2(arr, 0, n - 1, x);
        vector<int> list = {li, ri};
        return list;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends