//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
            return 1;
        else
            return 0;
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        stack<int> s;

        // step 1 : push all element in stack

        for (int i = 0; i < n; ++i)
        {
            s.push(i);
        }

        // step 2 : check which elment is clebrity
        while (s.size() > 1)
        {

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(M, a, b, n))
                s.push(b);
            else
                s.push(a);
        }

        // step3 : confirm 0r verify it
        //       -> single elemet in stack is potential celebrity

        int candidate = s.top();

        // first row
        int zeroCount = 0;

        for (int i = 0; i < n; ++i)
        {
            if (M[candidate][i] == 0)
                zeroCount++;
        }

        // all zero
        if (zeroCount != n)
        {
            return -1;
        }

        // now column
        int oneCount = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i != candidate && M[i][candidate] == 1)
                oneCount++;
        }

        // all zero expect digonal
        if (oneCount != n - 1)
        {
            return -1;
        }

        return candidate;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M, n) << endl;
    }
}

// } Driver Code Ends