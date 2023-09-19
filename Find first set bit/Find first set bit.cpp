//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if (n == 0)
            return 0;
        // Position variable initialize with 1
        // m variable is used to check the set bit
        unsigned int position = 1;
        int m = 1;

        while (!(n & m))
        {

            // left shift
            m = m << 1;
            position++;
        }
        return position;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
    return 0;
}

// } Driver Code Ends