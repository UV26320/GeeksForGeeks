//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
const long long mod = 1e9 + 7;
class Solution
{
public:
    vector<long long> nthRowOfPascalTriangle(int n)
    {
        // code here
        vector<long long> v(n);

        v[0] = 1;

        for (int i = 1; i < n; i++)
        {

            // Create a temporary vector for the current row
            vector<long long> temp(i + 1);

            // The first element in each row is always 1
            temp[0] = 1;

            // Calculate the middle elements using the previous row
            for (int j = 1; j < i; j++)
            {
                temp[j] = (v[j] + v[j - 1]) % mod;
            }

            // The last element in each row is always 1
            temp[i] = 1;

            // Update v to the current row
            v = temp;
        }

        // Return the nth row of Pascal's Triangle
        return v;
    }
};

//{ Driver Code Starts.

void printAns(vector<long long> &ans)
{
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends