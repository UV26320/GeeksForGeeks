//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> rotate(int n, int d)
    {
        vector<int> ans;
        d = d % 16;
        int bits[16];
        int i, j;
        for (int i = 0; i < 16; i++)
        {
            bits[i] = n % 2;
            n /= 2;
        }
        int sum = 1;
        int left = 0, right = 0;

        for (i = (16 - d) % 16, j = 0; j < 16; j++, i = (i + 1) % 16)
        {
            if (bits[i] == 1)
            {
                left = left + sum;
            }
            sum = sum * 2;
        }

        sum = 1;

        for (i = d, j = 0; j < 16; j++, i = (i + 1) % 16)
        {
            if (bits[i] == 1)
            {
                right = right + sum;
            }
            sum = sum * 2;
        }

        ans.push_back(left);
        ans.push_back(right);

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

        int n, d;
        cin >> n >> d;
        Solution ob;
        vector<int> res = ob.rotate(n, d);
        cout << res[0] << endl
             << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends