//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string findLargest(int N, int S)
    {
        // code here

        //     if (S < 0) return "-1"; // Handle negative S

        //     string ans = "";
        //     if(9*N < S) return "-1";

        //     for (int i = 0 ; i < N ; ++i){

        //         if(S>=9){

        //             ans+="9";
        //             S-=9;
        //         }else{
        //              ans+=to_string(S);    // here we are add direct num and convert into string
        //              S = 0;               // S = 0 bcz of if S = 7 and N = 2 and than we directly add 7 and  S = 0 bcz when we come second we add 0 (bcz we write S =0)

        //         }
        //     }

        //  return ans;

        string ans = "";

        if (S == 0 && N > 1)
            return "-1";

        for (int i = 0; i < N; ++i)
        {

            if (S > 9)
            {
                ans += '9';
                S -= 9;
            }
            else
            {
                ans += to_string(S);
                S = 0;
            }
        }

        if (S > 0)
            return "-1";
        else
        {
            return ans;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        cin >> N >> S;

        Solution ob;
        cout << ob.findLargest(N, S) << "\n";
    }
    return 0;
}
// } Driver Code Ends